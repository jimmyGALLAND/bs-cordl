#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypeExtensions)
namespace ModestTree {
class __TypeExtensions___GetParentTypes_d__28;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class MemberInfo;
}
namespace ModestTree {
class __TypeExtensions____c__DisplayClass39_0;
}
namespace System {
class Object;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Delegate;
}
namespace System {
class Attribute;
}
namespace ModestTree {
class __TypeExtensions____c__DisplayClass39_1;
}
namespace System {
class Type;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace ModestTree {
class __TypeExtensions____c__DisplayClass35_0;
}
namespace ModestTree {
class __TypeExtensions____c__DisplayClass35_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace ModestTree {
class TypeExtensions;
}
namespace ModestTree {
class __TypeExtensions___GetParentTypes_d__28;
}
namespace ModestTree {
class __TypeExtensions____c__DisplayClass35_0;
}
namespace ModestTree {
class __TypeExtensions____c__DisplayClass35_1;
}
namespace ModestTree {
class __TypeExtensions____c__DisplayClass39_0;
}
namespace ModestTree {
class __TypeExtensions____c__DisplayClass39_1;
}
// Write type traits
MARK_REF_PTR_T(::ModestTree::TypeExtensions);
MARK_REF_PTR_T(::ModestTree::__TypeExtensions___GetParentTypes_d__28);
MARK_REF_PTR_T(::ModestTree::__TypeExtensions____c__DisplayClass35_0);
MARK_REF_PTR_T(::ModestTree::__TypeExtensions____c__DisplayClass35_1);
MARK_REF_PTR_T(::ModestTree::__TypeExtensions____c__DisplayClass39_0);
MARK_REF_PTR_T(::ModestTree::__TypeExtensions____c__DisplayClass39_1);
// Type: ::<GetParentTypes>d__28
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ModestTree {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10616))
// CS Name: ::TypeExtensions::<GetParentTypes>d__28*
class CORDL_TYPE __TypeExtensions___GetParentTypes_d__28 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Type* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field type, offset 0x28, size 0x8
  __declspec(property(get = __get_type, put = __set_type))::System::Type* type;

  /// @brief Field <>3__type, offset 0x30, size 0x8
  __declspec(property(get = __get___3__type, put = __set___3__type))::System::Type* __3__type;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __get___7__wrap1, put = __set___7__wrap1))::System::Collections::Generic::IEnumerator_1<::System::Type*>* __7__wrap1;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Type__get_Current))::System::Type* System_Collections_Generic_IEnumerator_System_Type__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Type*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Type*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Type*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Type* value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::System::Type*& __get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_type() const;

  constexpr void __set_type(::System::Type* value);

  constexpr ::System::Type*& __get___3__type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get___3__type() const;

  constexpr void __set___3__type(::System::Type* value);

  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>*& __get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::System::Type*>*> const& __get___7__wrap1() const;

  constexpr void __set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::System::Type*>* value);

  static inline ::ModestTree::__TypeExtensions___GetParentTypes_d__28* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2ebcd34 size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2ebd3bc size 0x1c virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2ebd3d8 size 0x4dc virtual true final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1 addr 0x2ebd8b4 size 0xb0 virtual false final false
  inline void __m__Finally1();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Type>.get_Current addr 0x2ebd964 size 0x8 virtual true final true
  inline ::System::Type* System_Collections_Generic_IEnumerator_System_Type__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2ebd96c size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2ebd9ac size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator addr 0x2ebd9b4 size 0xa4 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Type*>* System_Collections_Generic_IEnumerable_System_Type__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2ebda58 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__TypeExtensions___GetParentTypes_d__28", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeExtensions___GetParentTypes_d__28(__TypeExtensions___GetParentTypes_d__28&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeExtensions___GetParentTypes_d__28", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeExtensions___GetParentTypes_d__28(__TypeExtensions___GetParentTypes_d__28 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeExtensions___GetParentTypes_d__28();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Type* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field type, offset: 0x28, size: 0x8, def value: None
  ::System::Type* ___type;

  /// @brief Field <>3__type, offset: 0x30, size: 0x8, def value: None
  ::System::Type* _____3__type;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::System::Type*>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::__TypeExtensions___GetParentTypes_d__28, 0x40>, "Size mismatch!");

} // namespace ModestTree
// Type: ::<>c__DisplayClass35_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ModestTree {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10617))
// CS Name: ::TypeExtensions::<>c__DisplayClass35_0*
class CORDL_TYPE __TypeExtensions____c__DisplayClass35_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field attributeTypes, offset 0x10, size 0x8
  __declspec(property(get = __get_attributeTypes, put = __set_attributeTypes))::ArrayW<::System::Type*, ::Array<::System::Type*>*> attributeTypes;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __get_attributeTypes();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __get_attributeTypes() const;

  constexpr void __set_attributeTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  static inline ::ModestTree::__TypeExtensions____c__DisplayClass35_0* New_ctor();

  /// @brief Method .ctor addr 0x2ebd0ac size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <AllAttributes>b__0 addr 0x2ebda5c size 0xd8 virtual false final false
  inline bool _AllAttributes_b__0(::System::Attribute* a);

  // Ctor Parameters [CppParam { name: "", ty: "__TypeExtensions____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeExtensions____c__DisplayClass35_0(__TypeExtensions____c__DisplayClass35_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeExtensions____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeExtensions____c__DisplayClass35_0(__TypeExtensions____c__DisplayClass35_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeExtensions____c__DisplayClass35_0();

public:
  /// @brief Field attributeTypes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ___attributeTypes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::__TypeExtensions____c__DisplayClass35_0, 0x18>, "Size mismatch!");

} // namespace ModestTree
// Type: ::<>c__DisplayClass35_1
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ModestTree {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10618))
// CS Name: ::TypeExtensions::<>c__DisplayClass35_1*
class CORDL_TYPE __TypeExtensions____c__DisplayClass35_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field a, offset 0x10, size 0x8
  __declspec(property(get = __get_a, put = __set_a))::System::Attribute* a;

  constexpr ::System::Attribute*& __get_a();

  constexpr ::cordl_internals::to_const_pointer<::System::Attribute*> const& __get_a() const;

  constexpr void __set_a(::System::Attribute* value);

  static inline ::ModestTree::__TypeExtensions____c__DisplayClass35_1* New_ctor();

  /// @brief Method .ctor addr 0x2ebdb34 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <AllAttributes>b__1 addr 0x2ebdb3c size 0x78 virtual false final false
  inline bool _AllAttributes_b__1(::System::Type* x);

  // Ctor Parameters [CppParam { name: "", ty: "__TypeExtensions____c__DisplayClass35_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeExtensions____c__DisplayClass35_1(__TypeExtensions____c__DisplayClass35_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeExtensions____c__DisplayClass35_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeExtensions____c__DisplayClass35_1(__TypeExtensions____c__DisplayClass35_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeExtensions____c__DisplayClass35_1();

public:
  /// @brief Field a, offset: 0x10, size: 0x8, def value: None
  ::System::Attribute* ___a;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::__TypeExtensions____c__DisplayClass35_1, 0x18>, "Size mismatch!");

} // namespace ModestTree
// Type: ::<>c__DisplayClass39_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ModestTree {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10619))
// CS Name: ::TypeExtensions::<>c__DisplayClass39_0*
class CORDL_TYPE __TypeExtensions____c__DisplayClass39_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field attributeTypes, offset 0x10, size 0x8
  __declspec(property(get = __get_attributeTypes, put = __set_attributeTypes))::ArrayW<::System::Type*, ::Array<::System::Type*>*> attributeTypes;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __get_attributeTypes();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __get_attributeTypes() const;

  constexpr void __set_attributeTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  static inline ::ModestTree::__TypeExtensions____c__DisplayClass39_0* New_ctor();

  /// @brief Method .ctor addr 0x2ebd28c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <AllAttributes>b__0 addr 0x2ebdbb4 size 0xd8 virtual false final false
  inline bool _AllAttributes_b__0(::System::Attribute* a);

  // Ctor Parameters [CppParam { name: "", ty: "__TypeExtensions____c__DisplayClass39_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeExtensions____c__DisplayClass39_0(__TypeExtensions____c__DisplayClass39_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeExtensions____c__DisplayClass39_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeExtensions____c__DisplayClass39_0(__TypeExtensions____c__DisplayClass39_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeExtensions____c__DisplayClass39_0();

public:
  /// @brief Field attributeTypes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ___attributeTypes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::__TypeExtensions____c__DisplayClass39_0, 0x18>, "Size mismatch!");

} // namespace ModestTree
// Type: ::<>c__DisplayClass39_1
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ModestTree {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10620))
// CS Name: ::TypeExtensions::<>c__DisplayClass39_1*
class CORDL_TYPE __TypeExtensions____c__DisplayClass39_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field a, offset 0x10, size 0x8
  __declspec(property(get = __get_a, put = __set_a))::System::Attribute* a;

  constexpr ::System::Attribute*& __get_a();

  constexpr ::cordl_internals::to_const_pointer<::System::Attribute*> const& __get_a() const;

  constexpr void __set_a(::System::Attribute* value);

  static inline ::ModestTree::__TypeExtensions____c__DisplayClass39_1* New_ctor();

  /// @brief Method .ctor addr 0x2ebdc8c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <AllAttributes>b__1 addr 0x2ebdc94 size 0x78 virtual false final false
  inline bool _AllAttributes_b__1(::System::Type* x);

  // Ctor Parameters [CppParam { name: "", ty: "__TypeExtensions____c__DisplayClass39_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeExtensions____c__DisplayClass39_1(__TypeExtensions____c__DisplayClass39_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeExtensions____c__DisplayClass39_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeExtensions____c__DisplayClass39_1(__TypeExtensions____c__DisplayClass39_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeExtensions____c__DisplayClass39_1();

public:
  /// @brief Field a, offset: 0x10, size: 0x8, def value: None
  ::System::Attribute* ___a;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::__TypeExtensions____c__DisplayClass39_1, 0x18>, "Size mismatch!");

} // namespace ModestTree
// Type: ModestTree::TypeExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ModestTree {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10621))
// CS Name: ::ModestTree::TypeExtensions*
class CORDL_TYPE TypeExtensions : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass39_1 = ::ModestTree::__TypeExtensions____c__DisplayClass39_1;

  using __c__DisplayClass39_0 = ::ModestTree::__TypeExtensions____c__DisplayClass39_0;

  using __c__DisplayClass35_1 = ::ModestTree::__TypeExtensions____c__DisplayClass35_1;

  using __c__DisplayClass35_0 = ::ModestTree::__TypeExtensions____c__DisplayClass35_0;

  using _GetParentTypes_d__28 = ::ModestTree::__TypeExtensions___GetParentTypes_d__28;

  /// @brief Field _isClosedGenericType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__isClosedGenericType, put = setStaticF__isClosedGenericType))::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* _isClosedGenericType;

  /// @brief Field _isOpenGenericType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__isOpenGenericType, put = setStaticF__isOpenGenericType))::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* _isOpenGenericType;

  /// @brief Field _isValueType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__isValueType, put = setStaticF__isValueType))::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* _isValueType;

  /// @brief Field _interfaces, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__interfaces,
                             put = setStaticF__interfaces))::System::Collections::Generic::Dictionary_2<::System::Type*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* _interfaces;

  static inline void setStaticF__isClosedGenericType(::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* getStaticF__isClosedGenericType();

  static inline void setStaticF__isOpenGenericType(::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* getStaticF__isOpenGenericType();

  static inline void setStaticF__isValueType(::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* getStaticF__isValueType();

  static inline void setStaticF__interfaces(::System::Collections::Generic::Dictionary_2<::System::Type*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* getStaticF__interfaces();

  /// @brief Method DerivesFrom addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool DerivesFrom(::System::Type* a);

  /// @brief Method DerivesFrom addr 0x2ebabe8 size 0xb0 virtual false final false
  static inline bool DerivesFrom(::System::Type* a, ::System::Type* b);

  /// @brief Method DerivesFromOrEqual addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool DerivesFromOrEqual(::System::Type* a);

  /// @brief Method DerivesFromOrEqual addr 0x2ebae54 size 0xa0 virtual false final false
  static inline bool DerivesFromOrEqual(::System::Type* a, ::System::Type* b);

  /// @brief Method IsAssignableToGenericType addr 0x2ebc554 size 0x1d8 virtual false final false
  static inline bool IsAssignableToGenericType(::System::Type* givenType, ::System::Type* genericType);

  /// @brief Method IsEnum addr 0x2ebc82c size 0x20 virtual false final false
  static inline bool IsEnum(::System::Type* type);

  /// @brief Method IsValueType addr 0x2ebc84c size 0xfc virtual false final false
  static inline bool IsValueType(::System::Type* type);

  /// @brief Method DeclaredInstanceMethods addr 0x2ebc948 size 0x24 virtual false final false
  static inline ::ArrayW<::System::Reflection::MethodInfo*, ::Array<::System::Reflection::MethodInfo*>*> DeclaredInstanceMethods(::System::Type* type);

  /// @brief Method DeclaredInstanceProperties addr 0x2ebc96c size 0x24 virtual false final false
  static inline ::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*> DeclaredInstanceProperties(::System::Type* type);

  /// @brief Method DeclaredInstanceFields addr 0x2ebc990 size 0x24 virtual false final false
  static inline ::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> DeclaredInstanceFields(::System::Type* type);

  /// @brief Method BaseType addr 0x2ebc9b4 size 0x20 virtual false final false
  static inline ::System::Type* BaseType(::System::Type* type);

  /// @brief Method IsGenericType addr 0x2ebc9d4 size 0x20 virtual false final false
  static inline bool IsGenericType(::System::Type* type);

  /// @brief Method IsGenericTypeDefinition addr 0x2ebc9f4 size 0x20 virtual false final false
  static inline bool IsGenericTypeDefinition(::System::Type* type);

  /// @brief Method IsPrimitive addr 0x2ebca14 size 0x14 virtual false final false
  static inline bool IsPrimitive(::System::Type* type);

  /// @brief Method IsInterface addr 0x2ebca28 size 0x14 virtual false final false
  static inline bool IsInterface(::System::Type* type);

  /// @brief Method ContainsGenericParameters addr 0x2ebca3c size 0x20 virtual false final false
  static inline bool ContainsGenericParameters(::System::Type* type);

  /// @brief Method IsAbstract addr 0x2ebca5c size 0x14 virtual false final false
  static inline bool IsAbstract(::System::Type* type);

  /// @brief Method IsSealed addr 0x2ebca70 size 0x14 virtual false final false
  static inline bool IsSealed(::System::Type* type);

  /// @brief Method Method addr 0x2ebca84 size 0x14 virtual false final false
  static inline ::System::Reflection::MethodInfo* Method(::System::Delegate* del);

  /// @brief Method GenericArguments addr 0x2ebca98 size 0x20 virtual false final false
  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GenericArguments(::System::Type* type);

  /// @brief Method Interfaces addr 0x2ebc72c size 0x100 virtual false final false
  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> Interfaces(::System::Type* type);

  /// @brief Method Constructors addr 0x2ebcab8 size 0x24 virtual false final false
  static inline ::ArrayW<::System::Reflection::ConstructorInfo*, ::Array<::System::Reflection::ConstructorInfo*>*> Constructors(::System::Type* type);

  /// @brief Method GetDefaultValue addr 0x2ebcadc size 0x74 virtual false final false
  static inline ::System::Object* GetDefaultValue(::System::Type* type);

  /// @brief Method IsClosedGenericType addr 0x2ebcb50 size 0x16c virtual false final false
  static inline bool IsClosedGenericType(::System::Type* type);

  /// @brief Method GetParentTypes addr 0x2ebccbc size 0x78 virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetParentTypes(::System::Type* type);

  /// @brief Method IsOpenGenericType addr 0x2ebcd68 size 0x16c virtual false final false
  static inline bool IsOpenGenericType(::System::Type* type);

  /// @brief Method GetAttribute addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T GetAttribute(::System::Reflection::MemberInfo* provider);

  /// @brief Method TryGetAttribute addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T TryGetAttribute(::System::Reflection::MemberInfo* provider);

  /// @brief Method HasAttribute addr 0x2ebced4 size 0x80 virtual false final false
  static inline bool HasAttribute(::System::Reflection::MemberInfo* provider, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> attributeTypes);

  /// @brief Method HasAttribute addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool HasAttribute(::System::Reflection::MemberInfo* provider);

  /// @brief Method AllAttributes addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::System::Collections::Generic::IEnumerable_1<T>* AllAttributes(::System::Reflection::MemberInfo* provider);

  /// @brief Method AllAttributes addr 0x2ebcf54 size 0x158 virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* AllAttributes(::System::Reflection::MemberInfo* provider,
                                                                                                   ::ArrayW<::System::Type*, ::Array<::System::Type*>*> attributeTypes);

  /// @brief Method HasAttribute addr 0x2ebd0b4 size 0x80 virtual false final false
  static inline bool HasAttribute(::System::Reflection::ParameterInfo* provider, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> attributeTypes);

  /// @brief Method HasAttribute addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool HasAttribute(::System::Reflection::ParameterInfo* provider);

  /// @brief Method AllAttributes addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::System::Collections::Generic::IEnumerable_1<T>* AllAttributes(::System::Reflection::ParameterInfo* provider);

  /// @brief Method AllAttributes addr 0x2ebd134 size 0x158 virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* AllAttributes(::System::Reflection::ParameterInfo* provider,
                                                                                                   ::ArrayW<::System::Type*, ::Array<::System::Type*>*> attributeTypes);

  // Ctor Parameters [CppParam { name: "", ty: "TypeExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeExtensions(TypeExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeExtensions(TypeExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::TypeExtensions, 0x10>, "Size mismatch!");

} // namespace ModestTree
NEED_NO_BOX(::ModestTree::TypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::TypeExtensions*, "ModestTree", "TypeExtensions");
NEED_NO_BOX(::ModestTree::__TypeExtensions___GetParentTypes_d__28);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::__TypeExtensions___GetParentTypes_d__28*, "ModestTree", "TypeExtensions/<GetParentTypes>d__28");
NEED_NO_BOX(::ModestTree::__TypeExtensions____c__DisplayClass35_0);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::__TypeExtensions____c__DisplayClass35_0*, "ModestTree", "TypeExtensions/<>c__DisplayClass35_0");
NEED_NO_BOX(::ModestTree::__TypeExtensions____c__DisplayClass35_1);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::__TypeExtensions____c__DisplayClass35_1*, "ModestTree", "TypeExtensions/<>c__DisplayClass35_1");
NEED_NO_BOX(::ModestTree::__TypeExtensions____c__DisplayClass39_0);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::__TypeExtensions____c__DisplayClass39_0*, "ModestTree", "TypeExtensions/<>c__DisplayClass39_0");
NEED_NO_BOX(::ModestTree::__TypeExtensions____c__DisplayClass39_1);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::__TypeExtensions____c__DisplayClass39_1*, "ModestTree", "TypeExtensions/<>c__DisplayClass39_1");
