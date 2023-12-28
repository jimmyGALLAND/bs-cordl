#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ConventionSelectTypesBinder)
namespace Zenject {
class ConventionFilterTypesBinder;
}
namespace Zenject {
class __ConventionSelectTypesBinder____c;
}
namespace Zenject {
class ConventionBindInfo;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
class ConventionSelectTypesBinder;
}
namespace Zenject {
class __ConventionSelectTypesBinder____c;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ConventionSelectTypesBinder);
MARK_REF_PTR_T(::Zenject::__ConventionSelectTypesBinder____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10699))
// CS Name: ::ConventionSelectTypesBinder::<>c*
class CORDL_TYPE __ConventionSelectTypesBinder____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Zenject::__ConventionSelectTypesBinder____c* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0))::System::Func_2<::System::Type*, bool>* __9__4_0;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0))::System::Func_2<::System::Type*, bool>* __9__5_0;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0))::System::Func_2<::System::Type*, bool>* __9__6_0;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0))::System::Func_2<::System::Type*, bool>* __9__7_0;

  static inline void setStaticF___9(::Zenject::__ConventionSelectTypesBinder____c* value);

  static inline ::Zenject::__ConventionSelectTypesBinder____c* getStaticF___9();

  static inline void setStaticF___9__4_0(::System::Func_2<::System::Type*, bool>* value);

  static inline ::System::Func_2<::System::Type*, bool>* getStaticF___9__4_0();

  static inline void setStaticF___9__5_0(::System::Func_2<::System::Type*, bool>* value);

  static inline ::System::Func_2<::System::Type*, bool>* getStaticF___9__5_0();

  static inline void setStaticF___9__6_0(::System::Func_2<::System::Type*, bool>* value);

  static inline ::System::Func_2<::System::Type*, bool>* getStaticF___9__6_0();

  static inline void setStaticF___9__7_0(::System::Func_2<::System::Type*, bool>* value);

  static inline ::System::Func_2<::System::Type*, bool>* getStaticF___9__7_0();

  static inline ::Zenject::__ConventionSelectTypesBinder____c* New_ctor();

  /// @brief Method .ctor addr 0x2ecb518 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <AllClasses>b__4_0 addr 0x2ecb520 size 0x18 virtual false final false
  inline bool _AllClasses_b__4_0(::System::Type* t);

  /// @brief Method <AllNonAbstractClasses>b__5_0 addr 0x2ecb538 size 0x44 virtual false final false
  inline bool _AllNonAbstractClasses_b__5_0(::System::Type* t);

  /// @brief Method <AllAbstractClasses>b__6_0 addr 0x2ecb57c size 0x3c virtual false final false
  inline bool _AllAbstractClasses_b__6_0(::System::Type* t);

  /// @brief Method <AllInterfaces>b__7_0 addr 0x2ecb5b8 size 0x18 virtual false final false
  inline bool _AllInterfaces_b__7_0(::System::Type* t);

  /// @brief Method __zenCreate addr 0x2ecb5d0 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2ecb62c size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionSelectTypesBinder____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConventionSelectTypesBinder____c(__ConventionSelectTypesBinder____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionSelectTypesBinder____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConventionSelectTypesBinder____c(__ConventionSelectTypesBinder____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConventionSelectTypesBinder____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__ConventionSelectTypesBinder____c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Type: Zenject::ConventionSelectTypesBinder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10700))
// CS Name: ::Zenject::ConventionSelectTypesBinder*
class CORDL_TYPE ConventionSelectTypesBinder : public ::System::Object {
public:
  // Declarations
  using __c = ::Zenject::__ConventionSelectTypesBinder____c;

  /// @brief Field _bindInfo, offset 0x10, size 0x8
  __declspec(property(get = __get__bindInfo, put = __set__bindInfo))::Zenject::ConventionBindInfo* _bindInfo;

  constexpr ::Zenject::ConventionBindInfo*& __get__bindInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::ConventionBindInfo*> const& __get__bindInfo() const;

  constexpr void __set__bindInfo(::Zenject::ConventionBindInfo* value);

  static inline ::Zenject::ConventionSelectTypesBinder* New_ctor(::Zenject::ConventionBindInfo* bindInfo);

  /// @brief Method .ctor addr 0x2ec7120 size 0x28 virtual false final false
  inline void _ctor(::Zenject::ConventionBindInfo* bindInfo);

  /// @brief Method CreateNextBinder addr 0x2ecb088 size 0x68 virtual false final false
  inline ::Zenject::ConventionFilterTypesBinder* CreateNextBinder();

  /// @brief Method AllTypes addr 0x2ecb0f0 size 0x4 virtual false final false
  inline ::Zenject::ConventionFilterTypesBinder* AllTypes();

  /// @brief Method AllClasses addr 0x2ecb0f4 size 0xf0 virtual false final false
  inline ::Zenject::ConventionFilterTypesBinder* AllClasses();

  /// @brief Method AllNonAbstractClasses addr 0x2ecb1e4 size 0xf0 virtual false final false
  inline ::Zenject::ConventionFilterTypesBinder* AllNonAbstractClasses();

  /// @brief Method AllAbstractClasses addr 0x2ecb2d4 size 0xf0 virtual false final false
  inline ::Zenject::ConventionFilterTypesBinder* AllAbstractClasses();

  /// @brief Method AllInterfaces addr 0x2ecb3c4 size 0xf0 virtual false final false
  inline ::Zenject::ConventionFilterTypesBinder* AllInterfaces();

  // Ctor Parameters [CppParam { name: "", ty: "ConventionSelectTypesBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConventionSelectTypesBinder(ConventionSelectTypesBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConventionSelectTypesBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConventionSelectTypesBinder(ConventionSelectTypesBinder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConventionSelectTypesBinder();

public:
  /// @brief Field _bindInfo, offset: 0x10, size: 0x8, def value: None
  ::Zenject::ConventionBindInfo* ____bindInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ConventionSelectTypesBinder, 0x18>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ConventionSelectTypesBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ConventionSelectTypesBinder*, "Zenject", "ConventionSelectTypesBinder");
NEED_NO_BOX(::Zenject::__ConventionSelectTypesBinder____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__ConventionSelectTypesBinder____c*, "Zenject", "ConventionSelectTypesBinder/<>c");
