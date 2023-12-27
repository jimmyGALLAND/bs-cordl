#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntervalTree_2)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace IntervalTree {
template <typename TKey, typename TValue> struct RangeValuePair_2;
}
namespace IntervalTree {
template <typename TKey, typename TValue> class __IntervalTree_2____c__DisplayClass19_0;
}
namespace System::Collections {
class IEnumerable;
}
namespace IntervalTree {
template <typename TKey, typename TValue> class __IntervalTree_2____c__DisplayClass20_0;
}
namespace IntervalTree {
template <typename TKey, typename TValue> class __IntervalTree_2____c__DisplayClass23_0;
}
namespace IntervalTree {
template <typename TKey, typename TValue> class IntervalTreeNode_2;
}
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace IntervalTree {
template <typename TKey, typename TValue> class __IntervalTree_2____c;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace IntervalTree {
template <typename TKey, typename TValue> class IIntervalTree_2;
}
namespace System::Collections {
class IEnumerator;
}
namespace IntervalTree {
template <typename TKey, typename TValue> class __IntervalTree_2____c__DisplayClass24_0;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace IntervalTree {
template <typename TKey, typename TValue> class IntervalTree_2;
}
namespace IntervalTree {
template <typename TKey, typename TValue> class __IntervalTree_2____c;
}
namespace IntervalTree {
template <typename TKey, typename TValue> class __IntervalTree_2____c__DisplayClass19_0;
}
namespace IntervalTree {
template <typename TKey, typename TValue> class __IntervalTree_2____c__DisplayClass20_0;
}
namespace IntervalTree {
template <typename TKey, typename TValue> class __IntervalTree_2____c__DisplayClass23_0;
}
namespace IntervalTree {
template <typename TKey, typename TValue> class __IntervalTree_2____c__DisplayClass24_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::IntervalTree::IntervalTree_2);
MARK_GEN_REF_PTR_T(::IntervalTree::__IntervalTree_2____c);
MARK_GEN_REF_PTR_T(::IntervalTree::__IntervalTree_2____c__DisplayClass19_0);
MARK_GEN_REF_PTR_T(::IntervalTree::__IntervalTree_2____c__DisplayClass20_0);
MARK_GEN_REF_PTR_T(::IntervalTree::__IntervalTree_2____c__DisplayClass23_0);
MARK_GEN_REF_PTR_T(::IntervalTree::__IntervalTree_2____c__DisplayClass24_0);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace IntervalTree {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16127))
// CS Name: ::IntervalTree`2::<>c<TKey,TValue>*
class CORDL_TYPE __IntervalTree_2____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::IntervalTree::__IntervalTree_2____c<TKey, TValue>* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0))::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TValue>* __9__10_0;

  static inline void setStaticF___9(::IntervalTree::__IntervalTree_2____c<TKey, TValue>* value);

  static inline ::IntervalTree::__IntervalTree_2____c<TKey, TValue>* getStaticF___9();

  static inline void setStaticF___9__10_0(::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TValue>* value);

  static inline ::System::Func_2<::IntervalTree::RangeValuePair_2<TKey, TValue>, TValue>* getStaticF___9__10_0();

  static inline ::IntervalTree::__IntervalTree_2____c<TKey, TValue>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <get_Values>b__10_0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TValue _get_Values_b__10_0(::IntervalTree::RangeValuePair_2<TKey, TValue> i);

  // Ctor Parameters [CppParam { name: "", ty: "__IntervalTree_2____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IntervalTree_2____c(__IntervalTree_2____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IntervalTree_2____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IntervalTree_2____c(__IntervalTree_2____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IntervalTree_2____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace IntervalTree
// Type: ::<>c__DisplayClass19_0
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace IntervalTree {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16128))
// CS Name: ::IntervalTree`2::<>c__DisplayClass19_0<TKey,TValue>*
class CORDL_TYPE __IntervalTree_2____c__DisplayClass19_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __get_value, put = __set_value)) TValue value;

  constexpr TValue& __get_value();

  constexpr TValue const& __get_value() const;

  constexpr void __set_value(TValue value);

  static inline ::IntervalTree::__IntervalTree_2____c__DisplayClass19_0<TKey, TValue>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <Remove>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool _Remove_b__0(::IntervalTree::RangeValuePair_2<TKey, TValue> l);

  // Ctor Parameters [CppParam { name: "", ty: "__IntervalTree_2____c__DisplayClass19_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IntervalTree_2____c__DisplayClass19_0(__IntervalTree_2____c__DisplayClass19_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IntervalTree_2____c__DisplayClass19_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IntervalTree_2____c__DisplayClass19_0(__IntervalTree_2____c__DisplayClass19_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IntervalTree_2____c__DisplayClass19_0();

public:
  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  TValue ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace IntervalTree
// Type: ::<>c__DisplayClass20_0
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace IntervalTree {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16129))
// CS Name: ::IntervalTree`2::<>c__DisplayClass20_0<TKey,TValue>*
class CORDL_TYPE __IntervalTree_2____c__DisplayClass20_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field items, offset 0x10, size 0x8
  __declspec(property(get = __get_items, put = __set_items))::System::Collections::Generic::IEnumerable_1<TValue>* items;

  constexpr ::System::Collections::Generic::IEnumerable_1<TValue>*& __get_items();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TValue>*> const& __get_items() const;

  constexpr void __set_items(::System::Collections::Generic::IEnumerable_1<TValue>* value);

  static inline ::IntervalTree::__IntervalTree_2____c__DisplayClass20_0<TKey, TValue>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <Remove>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool _Remove_b__0(::IntervalTree::RangeValuePair_2<TKey, TValue> l);

  // Ctor Parameters [CppParam { name: "", ty: "__IntervalTree_2____c__DisplayClass20_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IntervalTree_2____c__DisplayClass20_0(__IntervalTree_2____c__DisplayClass20_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IntervalTree_2____c__DisplayClass20_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IntervalTree_2____c__DisplayClass20_0(__IntervalTree_2____c__DisplayClass20_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IntervalTree_2____c__DisplayClass20_0();

public:
  /// @brief Field items, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<TValue>* ___items;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace IntervalTree
// Type: ::<>c__DisplayClass23_0
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace IntervalTree {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16130))
// CS Name: ::IntervalTree`2::<>c__DisplayClass23_0<TKey,TValue>*
class CORDL_TYPE __IntervalTree_2____c__DisplayClass23_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::IntervalTree::IntervalTree_2<TKey, TValue>* __4__this;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __get_key, put = __set_key)) TKey key;

  constexpr ::IntervalTree::IntervalTree_2<TKey, TValue>*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::IntervalTree::IntervalTree_2<TKey, TValue>*> const& __get___4__this() const;

  constexpr void __set___4__this(::IntervalTree::IntervalTree_2<TKey, TValue>* value);

  constexpr TKey& __get_key();

  constexpr TKey const& __get_key() const;

  constexpr void __set_key(TKey value);

  static inline ::IntervalTree::__IntervalTree_2____c__DisplayClass23_0<TKey, TValue>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <GetClosestPrevValueTo>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool _GetClosestPrevValueTo_b__0(::IntervalTree::RangeValuePair_2<TKey, TValue> pair);

  // Ctor Parameters [CppParam { name: "", ty: "__IntervalTree_2____c__DisplayClass23_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IntervalTree_2____c__DisplayClass23_0(__IntervalTree_2____c__DisplayClass23_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IntervalTree_2____c__DisplayClass23_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IntervalTree_2____c__DisplayClass23_0(__IntervalTree_2____c__DisplayClass23_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IntervalTree_2____c__DisplayClass23_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::IntervalTree::IntervalTree_2<TKey, TValue>* _____4__this;

  /// @brief Field key, offset: 0x18, size: 0x8, def value: None
  TKey ___key;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace IntervalTree
// Type: ::<>c__DisplayClass24_0
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace IntervalTree {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16131))
// CS Name: ::IntervalTree`2::<>c__DisplayClass24_0<TKey,TValue>*
class CORDL_TYPE __IntervalTree_2____c__DisplayClass24_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::IntervalTree::IntervalTree_2<TKey, TValue>* __4__this;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __get_key, put = __set_key)) TKey key;

  constexpr ::IntervalTree::IntervalTree_2<TKey, TValue>*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::IntervalTree::IntervalTree_2<TKey, TValue>*> const& __get___4__this() const;

  constexpr void __set___4__this(::IntervalTree::IntervalTree_2<TKey, TValue>* value);

  constexpr TKey& __get_key();

  constexpr TKey const& __get_key() const;

  constexpr void __set_key(TKey value);

  static inline ::IntervalTree::__IntervalTree_2____c__DisplayClass24_0<TKey, TValue>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <GetClosestNextValueTo>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool _GetClosestNextValueTo_b__0(::IntervalTree::RangeValuePair_2<TKey, TValue> pair);

  // Ctor Parameters [CppParam { name: "", ty: "__IntervalTree_2____c__DisplayClass24_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IntervalTree_2____c__DisplayClass24_0(__IntervalTree_2____c__DisplayClass24_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IntervalTree_2____c__DisplayClass24_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IntervalTree_2____c__DisplayClass24_0(__IntervalTree_2____c__DisplayClass24_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IntervalTree_2____c__DisplayClass24_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::IntervalTree::IntervalTree_2<TKey, TValue>* _____4__this;

  /// @brief Field key, offset: 0x18, size: 0x8, def value: None
  TKey ___key;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace IntervalTree
// Type: IntervalTree::IntervalTree`2
// SizeInfo { instance_size: 48, native_size: 41, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace IntervalTree {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16132))
// CS Name: ::IntervalTree::IntervalTree`2<TKey,TValue>*
class CORDL_TYPE IntervalTree_2 : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass24_0 = ::IntervalTree::__IntervalTree_2____c__DisplayClass24_0<TKey, TValue>;

  using __c__DisplayClass23_0 = ::IntervalTree::__IntervalTree_2____c__DisplayClass23_0<TKey, TValue>;

  using __c__DisplayClass20_0 = ::IntervalTree::__IntervalTree_2____c__DisplayClass20_0<TKey, TValue>;

  using __c__DisplayClass19_0 = ::IntervalTree::__IntervalTree_2____c__DisplayClass19_0<TKey, TValue>;

  using __c = ::IntervalTree::__IntervalTree_2____c<TKey, TValue>;

  /// @brief Field root, offset 0x10, size 0x8
  __declspec(property(get = __get_root, put = __set_root))::IntervalTree::IntervalTreeNode_2<TKey, TValue>* root;

  /// @brief Field items, offset 0x18, size 0x8
  __declspec(property(get = __get_items, put = __set_items))::System::Collections::Generic::List_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>* items;

  /// @brief Field comparer, offset 0x20, size 0x8
  __declspec(property(get = __get_comparer, put = __set_comparer))::System::Collections::Generic::IComparer_1<TKey>* comparer;

  /// @brief Field isInSync, offset 0x28, size 0x1
  __declspec(property(get = __get_isInSync, put = __set_isInSync)) bool isInSync;

  __declspec(property(get = get_Max)) TKey Max;

  __declspec(property(get = get_Min)) TKey Min;

  __declspec(property(get = get_Values))::System::Collections::Generic::IEnumerable_1<TValue>* Values;

  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Convert operator to "::IntervalTree::IIntervalTree_2<TKey,TValue>"
  constexpr operator ::IntervalTree::IIntervalTree_2<TKey, TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::IntervalTree::IntervalTreeNode_2<TKey, TValue>*& __get_root();

  constexpr ::cordl_internals::to_const_pointer<::IntervalTree::IntervalTreeNode_2<TKey, TValue>*> const& __get_root() const;

  constexpr void __set_root(::IntervalTree::IntervalTreeNode_2<TKey, TValue>* value);

  constexpr ::System::Collections::Generic::List_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*& __get_items();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*> const& __get_items() const;

  constexpr void __set_items(::System::Collections::Generic::List_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>* value);

  constexpr ::System::Collections::Generic::IComparer_1<TKey>*& __get_comparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<TKey>*> const& __get_comparer() const;

  constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<TKey>* value);

  constexpr bool& __get_isInSync();

  constexpr bool const& __get_isInSync() const;

  constexpr void __set_isInSync(bool value);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method get_Max addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TKey get_Max();

  /// @brief Method get_Min addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TKey get_Min();

  /// @brief Method get_Values addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::Generic::IEnumerable_1<TValue>* get_Values();

  /// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
  inline int32_t get_Count();

  static inline ::IntervalTree::IntervalTree_2<TKey, TValue>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  static inline ::IntervalTree::IntervalTree_2<TKey, TValue>* New_ctor(::System::Collections::Generic::IComparer_1<TKey>* comparer);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Collections::Generic::IComparer_1<TKey>* comparer);

  /// @brief Method Query addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::Generic::IEnumerable_1<TValue>* Query(TKey value);

  /// @brief Method Query addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::Generic::IEnumerable_1<TValue>* Query(TKey from, TKey to);

  /// @brief Method QueryWithCount addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::Generic::List_1<TValue>* QueryWithCount(TKey from, TKey to);

  /// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Add(TKey from, TKey to, TValue value);

  /// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Remove(TValue value);

  /// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Remove(::System::Collections::Generic::IEnumerable_1<TValue>* items);

  /// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Clear();

  /// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>* GetEnumerator();

  /// @brief Method GetClosestPrevValueTo addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TValue GetClosestPrevValueTo(TKey key);

  /// @brief Method GetClosestNextValueTo addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TValue GetClosestNextValueTo(TKey key);

  /// @brief Method Rebuild addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Rebuild();

  // Ctor Parameters [CppParam { name: "", ty: "IntervalTree_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntervalTree_2(IntervalTree_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntervalTree_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntervalTree_2(IntervalTree_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntervalTree_2();

public:
  /// @brief Field root, offset: 0x10, size: 0x8, def value: None
  ::IntervalTree::IntervalTreeNode_2<TKey, TValue>* ___root;

  /// @brief Field items, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>* ___items;

  /// @brief Field comparer, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IComparer_1<TKey>* ___comparer;

  /// @brief Field isInSync, offset: 0x28, size: 0x1, def value: None
  bool ___isInSync;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace IntervalTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::IntervalTree::IntervalTree_2, "IntervalTree", "IntervalTree`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::IntervalTree::__IntervalTree_2____c, "IntervalTree", "IntervalTree`2/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::IntervalTree::__IntervalTree_2____c__DisplayClass19_0, "IntervalTree", "IntervalTree`2/<>c__DisplayClass19_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::IntervalTree::__IntervalTree_2____c__DisplayClass20_0, "IntervalTree", "IntervalTree`2/<>c__DisplayClass20_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::IntervalTree::__IntervalTree_2____c__DisplayClass23_0, "IntervalTree", "IntervalTree`2/<>c__DisplayClass23_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::IntervalTree::__IntervalTree_2____c__DisplayClass24_0, "IntervalTree", "IntervalTree`2/<>c__DisplayClass24_0");
