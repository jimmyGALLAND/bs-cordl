#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ConventionBindInfo)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class __ConventionBindInfo____c__DisplayClass6_0;
}
namespace Zenject {
class __ConventionBindInfo____c__DisplayClass7_0;
}
// Forward declare root types
namespace Zenject {
class ConventionBindInfo;
}
namespace Zenject {
class __ConventionBindInfo____c__DisplayClass6_0;
}
namespace Zenject {
class __ConventionBindInfo____c__DisplayClass7_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ConventionBindInfo);
MARK_REF_PTR_T(::Zenject::__ConventionBindInfo____c__DisplayClass6_0);
MARK_REF_PTR_T(::Zenject::__ConventionBindInfo____c__DisplayClass7_0);
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::ConventionBindInfo::<>c__DisplayClass6_0*
class CORDL_TYPE __ConventionBindInfo____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field assembly, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_assembly, put = __cordl_internal_set_assembly))::System::Reflection::Assembly* assembly;

  static inline ::Zenject::__ConventionBindInfo____c__DisplayClass6_0* New_ctor();

  /// @brief Method <ShouldIncludeAssembly>b__0, addr 0x3418aa8, size 0x28, virtual false, abstract: false, final false
  inline bool _ShouldIncludeAssembly_b__0(::System::Func_2<::System::Reflection::Assembly*, bool>* predicate);

  constexpr ::System::Reflection::Assembly*& __cordl_internal_get_assembly();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::Assembly*> const& __cordl_internal_get_assembly() const;

  constexpr void __cordl_internal_set_assembly(::System::Reflection::Assembly* value);

  /// @brief Method __zenCreate, addr 0x3418ad0, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x3418b2c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x3418830, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConventionBindInfo____c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConventionBindInfo____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConventionBindInfo____c__DisplayClass6_0(__ConventionBindInfo____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionBindInfo____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConventionBindInfo____c__DisplayClass6_0(__ConventionBindInfo____c__DisplayClass6_0 const&) = delete;

  /// @brief Field assembly, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::Assembly* ___assembly;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__ConventionBindInfo____c__DisplayClass6_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__ConventionBindInfo____c__DisplayClass6_0, ___assembly) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass7_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::ConventionBindInfo::<>c__DisplayClass7_0*
class CORDL_TYPE __ConventionBindInfo____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::System::Type* type;

  static inline ::Zenject::__ConventionBindInfo____c__DisplayClass7_0* New_ctor();

  /// @brief Method <ShouldIncludeType>b__0, addr 0x3418cec, size 0x28, virtual false, abstract: false, final false
  inline bool _ShouldIncludeType_b__0(::System::Func_2<::System::Type*, bool>* predicate);

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_type() const;

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method __zenCreate, addr 0x3418d14, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x3418d70, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x3418910, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConventionBindInfo____c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConventionBindInfo____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConventionBindInfo____c__DisplayClass7_0(__ConventionBindInfo____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionBindInfo____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConventionBindInfo____c__DisplayClass7_0(__ConventionBindInfo____c__DisplayClass7_0 const&) = delete;

  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__ConventionBindInfo____c__DisplayClass7_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__ConventionBindInfo____c__DisplayClass7_0, ___type) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: Zenject::ConventionBindInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::ConventionBindInfo*
class CORDL_TYPE ConventionBindInfo : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass6_0 = ::Zenject::__ConventionBindInfo____c__DisplayClass6_0;

  using __c__DisplayClass7_0 = ::Zenject::__ConventionBindInfo____c__DisplayClass7_0;

  /// @brief Field _assemblyFilters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__assemblyFilters,
                      put = __cordl_internal_set__assemblyFilters))::System::Collections::Generic::List_1<::System::Func_2<::System::Reflection::Assembly*, bool>*>* _assemblyFilters;

  /// @brief Field _assemblyTypeCache, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF__assemblyTypeCache,
      put = setStaticF__assemblyTypeCache))::System::Collections::Generic::Dictionary_2<::System::Reflection::Assembly*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* _assemblyTypeCache;

  /// @brief Field _typeFilters, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__typeFilters, put = __cordl_internal_set__typeFilters))::System::Collections::Generic::List_1<::System::Func_2<::System::Type*, bool>*>* _typeFilters;

  /// @brief Method AddAssemblyFilter, addr 0x34180b0, size 0xa8, virtual false, abstract: false, final false
  inline void AddAssemblyFilter(::System::Func_2<::System::Reflection::Assembly*, bool>* predicate);

  /// @brief Method AddTypeFilter, addr 0x3418690, size 0xa8, virtual false, abstract: false, final false
  inline void AddTypeFilter(::System::Func_2<::System::Type*, bool>* predicate);

  /// @brief Method GetAllAssemblies, addr 0x3418738, size 0x20, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>* GetAllAssemblies();

  /// @brief Method GetTypes, addr 0x3418918, size 0x100, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetTypes(::System::Reflection::Assembly* assembly);

  static inline ::Zenject::ConventionBindInfo* New_ctor();

  /// @brief Method ResolveTypes, addr 0x3417078, size 0x1b0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::Type*>* ResolveTypes();

  /// @brief Method ShouldIncludeAssembly, addr 0x3418758, size 0xd8, virtual false, abstract: false, final false
  inline bool ShouldIncludeAssembly(::System::Reflection::Assembly* assembly);

  /// @brief Method ShouldIncludeType, addr 0x3418838, size 0xd8, virtual false, abstract: false, final false
  inline bool ShouldIncludeType(::System::Type* type);

  /// @brief Method <ResolveTypes>b__9_0, addr 0x3418aa4, size 0x4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* _ResolveTypes_b__9_0(::System::Reflection::Assembly* assembly);

  constexpr ::System::Collections::Generic::List_1<::System::Func_2<::System::Reflection::Assembly*, bool>*>*& __cordl_internal_get__assemblyFilters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Func_2<::System::Reflection::Assembly*, bool>*>*> const& __cordl_internal_get__assemblyFilters() const;

  constexpr ::System::Collections::Generic::List_1<::System::Func_2<::System::Type*, bool>*>*& __cordl_internal_get__typeFilters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Func_2<::System::Type*, bool>*>*> const& __cordl_internal_get__typeFilters() const;

  constexpr void __cordl_internal_set__assemblyFilters(::System::Collections::Generic::List_1<::System::Func_2<::System::Reflection::Assembly*, bool>*>* value);

  constexpr void __cordl_internal_set__typeFilters(::System::Collections::Generic::List_1<::System::Func_2<::System::Type*, bool>*>* value);

  /// @brief Method .ctor, addr 0x3416f90, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Reflection::Assembly*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* getStaticF__assemblyTypeCache();

  static inline void setStaticF__assemblyTypeCache(::System::Collections::Generic::Dictionary_2<::System::Reflection::Assembly*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConventionBindInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConventionBindInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConventionBindInfo(ConventionBindInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConventionBindInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConventionBindInfo(ConventionBindInfo const&) = delete;

  /// @brief Field _typeFilters, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Func_2<::System::Type*, bool>*>* ____typeFilters;

  /// @brief Field _assemblyFilters, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Func_2<::System::Reflection::Assembly*, bool>*>* ____assemblyFilters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ConventionBindInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::ConventionBindInfo, ____typeFilters) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::ConventionBindInfo, ____assemblyFilters) == 0x18, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ConventionBindInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ConventionBindInfo*, "Zenject", "ConventionBindInfo");
NEED_NO_BOX(::Zenject::__ConventionBindInfo____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__ConventionBindInfo____c__DisplayClass6_0*, "Zenject", "ConventionBindInfo/<>c__DisplayClass6_0");
NEED_NO_BOX(::Zenject::__ConventionBindInfo____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__ConventionBindInfo____c__DisplayClass7_0*, "Zenject", "ConventionBindInfo/<>c__DisplayClass7_0");
