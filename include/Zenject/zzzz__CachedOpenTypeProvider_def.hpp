#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CachedOpenTypeProvider)
namespace Zenject {
class IProvider;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace Zenject {
class __CachedOpenTypeProvider____c;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Type;
}
namespace Zenject {
class CachedProvider;
}
namespace System {
class Action;
}
namespace Zenject {
class InjectContext;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class CachedOpenTypeProvider;
}
namespace Zenject {
class __CachedOpenTypeProvider____c;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::CachedOpenTypeProvider);
MARK_REF_PTR_T(::Zenject::__CachedOpenTypeProvider____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11177))
// CS Name: ::CachedOpenTypeProvider::<>c*
class CORDL_TYPE __CachedOpenTypeProvider____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Zenject::__CachedOpenTypeProvider____c* __9;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0))::System::Func_2<::Zenject::CachedProvider*, int32_t>* __9__8_0;

  static inline void setStaticF___9(::Zenject::__CachedOpenTypeProvider____c* value);

  static inline ::Zenject::__CachedOpenTypeProvider____c* getStaticF___9();

  static inline void setStaticF___9__8_0(::System::Func_2<::Zenject::CachedProvider*, int32_t>* value);

  static inline ::System::Func_2<::Zenject::CachedProvider*, int32_t>* getStaticF___9__8_0();

  static inline ::Zenject::__CachedOpenTypeProvider____c* New_ctor();

  /// @brief Method .ctor addr 0x2f055f0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <get_NumInstances>b__8_0 addr 0x2f055f8 size 0x54 virtual false final false
  inline int32_t _get_NumInstances_b__8_0(::Zenject::CachedProvider* x);

  /// @brief Method __zenCreate addr 0x2f05698 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2f056f4 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__CachedOpenTypeProvider____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CachedOpenTypeProvider____c(__CachedOpenTypeProvider____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CachedOpenTypeProvider____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CachedOpenTypeProvider____c(__CachedOpenTypeProvider____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CachedOpenTypeProvider____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__CachedOpenTypeProvider____c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Type: Zenject::CachedOpenTypeProvider
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11178))
// CS Name: ::Zenject::CachedOpenTypeProvider*
class CORDL_TYPE CachedOpenTypeProvider : public ::System::Object {
public:
  // Declarations
  using __c = ::Zenject::__CachedOpenTypeProvider____c;

  /// @brief Field _creator, offset 0x10, size 0x8
  __declspec(property(get = __get__creator, put = __set__creator))::Zenject::IProvider* _creator;

  /// @brief Field _providerMap, offset 0x18, size 0x8
  __declspec(property(get = __get__providerMap, put = __set__providerMap))::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::CachedProvider*>* _providerMap;

  __declspec(property(get = get_IsCached)) bool IsCached;

  __declspec(property(get = get_TypeVariesBasedOnMemberType)) bool TypeVariesBasedOnMemberType;

  __declspec(property(get = get_NumInstances)) int32_t NumInstances;

  /// @brief Convert operator to "::Zenject::IProvider"
  constexpr operator ::Zenject::IProvider*() noexcept;

  constexpr ::Zenject::IProvider*& __get__creator();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::IProvider*> const& __get__creator() const;

  constexpr void __set__creator(::Zenject::IProvider* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::CachedProvider*>*& __get__providerMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::CachedProvider*>*> const& __get__providerMap() const;

  constexpr void __set__providerMap(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::CachedProvider*>* value);

  static inline ::Zenject::CachedOpenTypeProvider* New_ctor(::Zenject::IProvider* creator);

  /// @brief Method .ctor addr 0x2f04e38 size 0x10c virtual false final false
  inline void _ctor(::Zenject::IProvider* creator);

  /// @brief Method get_IsCached addr 0x2f04f44 size 0x8 virtual true final true
  inline bool get_IsCached();

  /// @brief Method get_TypeVariesBasedOnMemberType addr 0x2f04f4c size 0x28 virtual true final true
  inline bool get_TypeVariesBasedOnMemberType();

  /// @brief Method get_NumInstances addr 0x2f04f74 size 0x130 virtual false final false
  inline int32_t get_NumInstances();

  /// @brief Method ClearCache addr 0x2f050a4 size 0x50 virtual false final false
  inline void ClearCache();

  /// @brief Method GetInstanceType addr 0x2f050f4 size 0xac virtual true final true
  inline ::System::Type* GetInstanceType(::Zenject::InjectContext* context);

  /// @brief Method GetAllInstancesWithInjectSplit addr 0x2f051a0 size 0x13c virtual true final true
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  // Ctor Parameters [CppParam { name: "", ty: "CachedOpenTypeProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CachedOpenTypeProvider(CachedOpenTypeProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CachedOpenTypeProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CachedOpenTypeProvider(CachedOpenTypeProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CachedOpenTypeProvider();

public:
  /// @brief Field _creator, offset: 0x10, size: 0x8, def value: None
  ::Zenject::IProvider* ____creator;

  /// @brief Field _providerMap, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::CachedProvider*>* ____providerMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::CachedOpenTypeProvider, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::CachedOpenTypeProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::CachedOpenTypeProvider*, "Zenject", "CachedOpenTypeProvider");
NEED_NO_BOX(::Zenject::__CachedOpenTypeProvider____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__CachedOpenTypeProvider____c*, "Zenject", "CachedOpenTypeProvider/<>c");
