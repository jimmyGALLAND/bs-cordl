#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LinqExtensions)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace ModestTree {
template <typename T> class __LinqExtensions___Yield_d__0_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace ModestTree {
template <typename T> class __LinqExtensions____c__8_1;
}
namespace ModestTree {
template <typename T> class __LinqExtensions____c__DisplayClass10_0_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Linq {
template <typename TKey, typename TElement> class IGrouping_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace ModestTree {
class LinqExtensions;
}
namespace ModestTree {
template <typename T> class __LinqExtensions___Yield_d__0_1;
}
namespace ModestTree {
template <typename T> class __LinqExtensions____c__8_1;
}
namespace ModestTree {
template <typename T> class __LinqExtensions____c__DisplayClass10_0_1;
}
// Write type traits
MARK_REF_PTR_T(::ModestTree::LinqExtensions);
MARK_GEN_REF_PTR_T(::ModestTree::__LinqExtensions___Yield_d__0_1);
MARK_GEN_REF_PTR_T(::ModestTree::__LinqExtensions____c__8_1);
MARK_GEN_REF_PTR_T(::ModestTree::__LinqExtensions____c__DisplayClass10_0_1);
// Type: ::<Yield>d__0`1
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ModestTree {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10610))
// CS Name: ::LinqExtensions::<Yield>d__0`1<T>*
class CORDL_TYPE __LinqExtensions___Yield_d__0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current)) T __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field item, offset 0x28, size 0x8
  __declspec(property(get = __get_item, put = __set_item)) T item;

  /// @brief Field <>3__item, offset 0x30, size 0x8
  __declspec(property(get = __get___3__item, put = __set___3__item)) T __3__item;

  __declspec(property(get = System_Collections_Generic_IEnumerator_T__get_Current)) T System_Collections_Generic_IEnumerator_T__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr T& __get___2__current();

  constexpr T const& __get___2__current() const;

  constexpr void __set___2__current(T value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr T& __get_item();

  constexpr T const& __get_item() const;

  constexpr void __set_item(T value);

  constexpr T& __get___3__item();

  constexpr T const& __get___3__item() const;

  constexpr void __set___3__item(T value);

  static inline ::ModestTree::__LinqExtensions___Yield_d__0_1<T>* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
  inline T System_Collections_Generic_IEnumerator_T__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__LinqExtensions___Yield_d__0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LinqExtensions___Yield_d__0_1(__LinqExtensions___Yield_d__0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LinqExtensions___Yield_d__0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LinqExtensions___Yield_d__0_1(__LinqExtensions___Yield_d__0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LinqExtensions___Yield_d__0_1();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  T _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field item, offset: 0x28, size: 0x8, def value: None
  T ___item;

  /// @brief Field <>3__item, offset: 0x30, size: 0x8, def value: None
  T _____3__item;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace ModestTree
// Type: ::<>c__8`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ModestTree {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10611))
// CS Name: ::LinqExtensions::<>c__8`1<T>*
class CORDL_TYPE __LinqExtensions____c__8_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::ModestTree::__LinqExtensions____c__8_1<T>* __9;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0))::System::Func_2<T, T>* __9__8_0;

  /// @brief Field <>9__8_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_1, put = setStaticF___9__8_1))::System::Func_2<::System::Linq::IGrouping_2<T, T>*, bool>* __9__8_1;

  /// @brief Field <>9__8_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_2, put = setStaticF___9__8_2))::System::Func_2<::System::Linq::IGrouping_2<T, T>*, T>* __9__8_2;

  static inline void setStaticF___9(::ModestTree::__LinqExtensions____c__8_1<T>* value);

  static inline ::ModestTree::__LinqExtensions____c__8_1<T>* getStaticF___9();

  static inline void setStaticF___9__8_0(::System::Func_2<T, T>* value);

  static inline ::System::Func_2<T, T>* getStaticF___9__8_0();

  static inline void setStaticF___9__8_1(::System::Func_2<::System::Linq::IGrouping_2<T, T>*, bool>* value);

  static inline ::System::Func_2<::System::Linq::IGrouping_2<T, T>*, bool>* getStaticF___9__8_1();

  static inline void setStaticF___9__8_2(::System::Func_2<::System::Linq::IGrouping_2<T, T>*, T>* value);

  static inline ::System::Func_2<::System::Linq::IGrouping_2<T, T>*, T>* getStaticF___9__8_2();

  static inline ::ModestTree::__LinqExtensions____c__8_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <GetDuplicates>b__8_0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline T _GetDuplicates_b__8_0(T x);

  /// @brief Method <GetDuplicates>b__8_1 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool _GetDuplicates_b__8_1(::System::Linq::IGrouping_2<T, T>* x);

  /// @brief Method <GetDuplicates>b__8_2 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline T _GetDuplicates_b__8_2(::System::Linq::IGrouping_2<T, T>* x);

  // Ctor Parameters [CppParam { name: "", ty: "__LinqExtensions____c__8_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LinqExtensions____c__8_1(__LinqExtensions____c__8_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LinqExtensions____c__8_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LinqExtensions____c__8_1(__LinqExtensions____c__8_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LinqExtensions____c__8_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace ModestTree
// Type: ::<>c__DisplayClass10_0`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ModestTree {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10612))
// CS Name: ::LinqExtensions::<>c__DisplayClass10_0`1<T>*
class CORDL_TYPE __LinqExtensions____c__DisplayClass10_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __get_value, put = __set_value)) T value;

  constexpr T& __get_value();

  constexpr T const& __get_value() const;

  constexpr void __set_value(T value);

  static inline ::ModestTree::__LinqExtensions____c__DisplayClass10_0_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <ContainsItem>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool _ContainsItem_b__0(T x);

  // Ctor Parameters [CppParam { name: "", ty: "__LinqExtensions____c__DisplayClass10_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LinqExtensions____c__DisplayClass10_0_1(__LinqExtensions____c__DisplayClass10_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LinqExtensions____c__DisplayClass10_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LinqExtensions____c__DisplayClass10_0_1(__LinqExtensions____c__DisplayClass10_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LinqExtensions____c__DisplayClass10_0_1();

public:
  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  T ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace ModestTree
// Type: ModestTree::LinqExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ModestTree {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10613))
// CS Name: ::ModestTree::LinqExtensions*
class CORDL_TYPE LinqExtensions : public ::System::Object {
public:
  // Declarations
  template <typename T> using __c__DisplayClass10_0_1 = ::ModestTree::__LinqExtensions____c__DisplayClass10_0_1<T>;

  template <typename T> using __c__8_1 = ::ModestTree::__LinqExtensions____c__8_1<T>;

  template <typename T> using _Yield_d__0_1 = ::ModestTree::__LinqExtensions___Yield_d__0_1<T>;

  /// @brief Method Yield addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::System::Collections::Generic::IEnumerable_1<T>* Yield(T item);

  /// @brief Method OnlyOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TSource> static inline TSource OnlyOrDefault(::System::Collections::Generic::IEnumerable_1<TSource>* source);

  /// @brief Method HasAtLeast addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool HasAtLeast(::System::Collections::Generic::IEnumerable_1<T>* enumerable, int32_t amount);

  /// @brief Method HasMoreThan addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool HasMoreThan(::System::Collections::Generic::IEnumerable_1<T>* enumerable, int32_t amount);

  /// @brief Method HasLessThan addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool HasLessThan(::System::Collections::Generic::IEnumerable_1<T>* enumerable, int32_t amount);

  /// @brief Method HasAtMost addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool HasAtMost(::System::Collections::Generic::IEnumerable_1<T>* enumerable, int32_t amount);

  /// @brief Method IsEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool IsEmpty(::System::Collections::Generic::List_1<T>* list);

  /// @brief Method IsEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool IsEmpty(::System::Collections::Generic::IEnumerable_1<T>* enumerable);

  /// @brief Method GetDuplicates addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::System::Collections::Generic::IEnumerable_1<T>* GetDuplicates(::System::Collections::Generic::IEnumerable_1<T>* list);

  /// @brief Method Except addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::System::Collections::Generic::IEnumerable_1<T>* Except(::System::Collections::Generic::IEnumerable_1<T>* list, T item);

  /// @brief Method ContainsItem addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool ContainsItem(::System::Collections::Generic::IEnumerable_1<T>* list, T value);

  // Ctor Parameters [CppParam { name: "", ty: "LinqExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LinqExtensions(LinqExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LinqExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LinqExtensions(LinqExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LinqExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::LinqExtensions, 0x10>, "Size mismatch!");

} // namespace ModestTree
NEED_NO_BOX(::ModestTree::LinqExtensions);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::LinqExtensions*, "ModestTree", "LinqExtensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::ModestTree::__LinqExtensions___Yield_d__0_1, "ModestTree", "LinqExtensions/<Yield>d__0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::ModestTree::__LinqExtensions____c__8_1, "ModestTree", "LinqExtensions/<>c__8`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::ModestTree::__LinqExtensions____c__DisplayClass10_0_1, "ModestTree", "LinqExtensions/<>c__DisplayClass10_0`1");
