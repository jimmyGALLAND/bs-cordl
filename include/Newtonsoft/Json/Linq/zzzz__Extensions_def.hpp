#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Extensions)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace Newtonsoft::Json::Linq {
template <typename T> class __Extensions____c__2_1;
}
namespace Newtonsoft::Json::Linq {
template <typename T> class __Extensions____c__1_1;
}
namespace System {
class Object;
}
namespace Newtonsoft::Json::Linq {
template <typename T> class __Extensions____c__0_1;
}
namespace Newtonsoft::Json::Linq {
template <typename T> class __Extensions____c__3_1;
}
namespace Newtonsoft::Json::Linq {
template <typename T, typename U> class __Extensions____c__13_2;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Linq {
template <typename T, typename U> class __Extensions___Values_d__11_2;
}
namespace Newtonsoft::Json::Linq {
template <typename T> class IJEnumerable_1;
}
namespace Newtonsoft::Json::Linq {
class JProperty;
}
namespace Newtonsoft::Json::Linq {
class __Extensions____c;
}
namespace Newtonsoft::Json::Linq {
class JObject;
}
namespace Newtonsoft::Json::Linq {
template <typename T, typename U> class __Extensions___Convert_d__14_2;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class Extensions;
}
namespace Newtonsoft::Json::Linq {
template <typename T, typename U> class __Extensions___Convert_d__14_2;
}
namespace Newtonsoft::Json::Linq {
template <typename T, typename U> class __Extensions___Values_d__11_2;
}
namespace Newtonsoft::Json::Linq {
class __Extensions____c;
}
namespace Newtonsoft::Json::Linq {
template <typename T> class __Extensions____c__0_1;
}
namespace Newtonsoft::Json::Linq {
template <typename T, typename U> class __Extensions____c__13_2;
}
namespace Newtonsoft::Json::Linq {
template <typename T> class __Extensions____c__1_1;
}
namespace Newtonsoft::Json::Linq {
template <typename T> class __Extensions____c__2_1;
}
namespace Newtonsoft::Json::Linq {
template <typename T> class __Extensions____c__3_1;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::Extensions);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Linq::__Extensions___Convert_d__14_2);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Linq::__Extensions___Values_d__11_2);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::__Extensions____c);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Linq::__Extensions____c__0_1);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Linq::__Extensions____c__13_2);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Linq::__Extensions____c__1_1);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Linq::__Extensions____c__2_1);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Linq::__Extensions____c__3_1);
// Type: ::<>c__0`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11977))
// CS Name: ::Extensions::<>c__0`1<T>*
class CORDL_TYPE __Extensions____c__0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Newtonsoft::Json::Linq::__Extensions____c__0_1<T>* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0))::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* __9__0_0;

  static inline void setStaticF___9(::Newtonsoft::Json::Linq::__Extensions____c__0_1<T>* value);

  static inline ::Newtonsoft::Json::Linq::__Extensions____c__0_1<T>* getStaticF___9();

  static inline void setStaticF___9__0_0(::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* value);

  static inline ::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* getStaticF___9__0_0();

  static inline ::Newtonsoft::Json::Linq::__Extensions____c__0_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <Ancestors>b__0_0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* _Ancestors_b__0_0(T j);

  // Ctor Parameters [CppParam { name: "", ty: "__Extensions____c__0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Extensions____c__0_1(__Extensions____c__0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Extensions____c__0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Extensions____c__0_1(__Extensions____c__0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Extensions____c__0_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Linq
// Type: ::<>c__1`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11978))
// CS Name: ::Extensions::<>c__1`1<T>*
class CORDL_TYPE __Extensions____c__1_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Newtonsoft::Json::Linq::__Extensions____c__1_1<T>* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0))::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* __9__1_0;

  static inline void setStaticF___9(::Newtonsoft::Json::Linq::__Extensions____c__1_1<T>* value);

  static inline ::Newtonsoft::Json::Linq::__Extensions____c__1_1<T>* getStaticF___9();

  static inline void setStaticF___9__1_0(::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* value);

  static inline ::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* getStaticF___9__1_0();

  static inline ::Newtonsoft::Json::Linq::__Extensions____c__1_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <AncestorsAndSelf>b__1_0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* _AncestorsAndSelf_b__1_0(T j);

  // Ctor Parameters [CppParam { name: "", ty: "__Extensions____c__1_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Extensions____c__1_1(__Extensions____c__1_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Extensions____c__1_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Extensions____c__1_1(__Extensions____c__1_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Extensions____c__1_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Linq
// Type: ::<>c__2`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11979))
// CS Name: ::Extensions::<>c__2`1<T>*
class CORDL_TYPE __Extensions____c__2_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Newtonsoft::Json::Linq::__Extensions____c__2_1<T>* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0))::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* __9__2_0;

  static inline void setStaticF___9(::Newtonsoft::Json::Linq::__Extensions____c__2_1<T>* value);

  static inline ::Newtonsoft::Json::Linq::__Extensions____c__2_1<T>* getStaticF___9();

  static inline void setStaticF___9__2_0(::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* value);

  static inline ::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* getStaticF___9__2_0();

  static inline ::Newtonsoft::Json::Linq::__Extensions____c__2_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <Descendants>b__2_0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* _Descendants_b__2_0(T j);

  // Ctor Parameters [CppParam { name: "", ty: "__Extensions____c__2_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Extensions____c__2_1(__Extensions____c__2_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Extensions____c__2_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Extensions____c__2_1(__Extensions____c__2_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Extensions____c__2_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Linq
// Type: ::<>c__3`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11980))
// CS Name: ::Extensions::<>c__3`1<T>*
class CORDL_TYPE __Extensions____c__3_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Newtonsoft::Json::Linq::__Extensions____c__3_1<T>* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0))::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* __9__3_0;

  static inline void setStaticF___9(::Newtonsoft::Json::Linq::__Extensions____c__3_1<T>* value);

  static inline ::Newtonsoft::Json::Linq::__Extensions____c__3_1<T>* getStaticF___9();

  static inline void setStaticF___9__3_0(::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* value);

  static inline ::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* getStaticF___9__3_0();

  static inline ::Newtonsoft::Json::Linq::__Extensions____c__3_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <DescendantsAndSelf>b__3_0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* _DescendantsAndSelf_b__3_0(T j);

  // Ctor Parameters [CppParam { name: "", ty: "__Extensions____c__3_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Extensions____c__3_1(__Extensions____c__3_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Extensions____c__3_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Extensions____c__3_1(__Extensions____c__3_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Extensions____c__3_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Linq
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11981))
// CS Name: ::Extensions::<>c*
class CORDL_TYPE __Extensions____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Newtonsoft::Json::Linq::__Extensions____c* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF___9__4_0,
               put = setStaticF___9__4_0))::System::Func_2<::Newtonsoft::Json::Linq::JObject*, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>*>* __9__4_0;

  static inline void setStaticF___9(::Newtonsoft::Json::Linq::__Extensions____c* value);

  static inline ::Newtonsoft::Json::Linq::__Extensions____c* getStaticF___9();

  static inline void setStaticF___9__4_0(::System::Func_2<::Newtonsoft::Json::Linq::JObject*, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>*>* value);

  static inline ::System::Func_2<::Newtonsoft::Json::Linq::JObject*, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>*>* getStaticF___9__4_0();

  static inline ::Newtonsoft::Json::Linq::__Extensions____c* New_ctor();

  /// @brief Method .ctor addr 0x2691744 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <Properties>b__4_0 addr 0x269174c size 0x14 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>* _Properties_b__4_0(::Newtonsoft::Json::Linq::JObject* d);

  // Ctor Parameters [CppParam { name: "", ty: "__Extensions____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Extensions____c(__Extensions____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Extensions____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Extensions____c(__Extensions____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Extensions____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::__Extensions____c, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
// Type: ::<Values>d__11`2
// SizeInfo { instance_size: 96, native_size: 96, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// cpp template
template <typename T, typename U>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11982))
// CS Name: ::Extensions::<Values>d__11`2<T,U>*
class CORDL_TYPE __Extensions___Values_d__11_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current)) U __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field source, offset 0x28, size 0x8
  __declspec(property(get = __get_source, put = __set_source))::System::Collections::Generic::IEnumerable_1<T>* source;

  /// @brief Field <>3__source, offset 0x30, size 0x8
  __declspec(property(get = __get___3__source, put = __set___3__source))::System::Collections::Generic::IEnumerable_1<T>* __3__source;

  /// @brief Field key, offset 0x38, size 0x8
  __declspec(property(get = __get_key, put = __set_key))::System::Object* key;

  /// @brief Field <>3__key, offset 0x40, size 0x8
  __declspec(property(get = __get___3__key, put = __set___3__key))::System::Object* __3__key;

  /// @brief Field <token>5__1, offset 0x48, size 0x8
  __declspec(property(get = __get__token_5__1, put = __set__token_5__1))::Newtonsoft::Json::Linq::JToken* _token_5__1;

  /// @brief Field <>7__wrap1, offset 0x50, size 0x8
  __declspec(property(get = __get___7__wrap1, put = __set___7__wrap1))::System::Collections::Generic::IEnumerator_1<T>* __7__wrap1;

  /// @brief Field <>7__wrap2, offset 0x58, size 0x8
  __declspec(property(get = __get___7__wrap2, put = __set___7__wrap2))::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* __7__wrap2;

  __declspec(property(get = System_Collections_Generic_IEnumerator_U__get_Current)) U System_Collections_Generic_IEnumerator_U__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<U>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<U>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<U>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<U>*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr U& __get___2__current();

  constexpr U const& __get___2__current() const;

  constexpr void __set___2__current(U value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::System::Collections::Generic::IEnumerable_1<T>*& __get_source();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> const& __get_source() const;

  constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<T>* value);

  constexpr ::System::Collections::Generic::IEnumerable_1<T>*& __get___3__source();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> const& __get___3__source() const;

  constexpr void __set___3__source(::System::Collections::Generic::IEnumerable_1<T>* value);

  constexpr ::System::Object*& __get_key();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_key() const;

  constexpr void __set_key(::System::Object* value);

  constexpr ::System::Object*& __get___3__key();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___3__key() const;

  constexpr void __set___3__key(::System::Object* value);

  constexpr ::Newtonsoft::Json::Linq::JToken*& __get__token_5__1();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __get__token_5__1() const;

  constexpr void __set__token_5__1(::Newtonsoft::Json::Linq::JToken* value);

  constexpr ::System::Collections::Generic::IEnumerator_1<T>*& __get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<T>*> const& __get___7__wrap1() const;

  constexpr void __set___7__wrap1(::System::Collections::Generic::IEnumerator_1<T>* value);

  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*& __get___7__wrap2();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*> const& __get___7__wrap2() const;

  constexpr void __set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* value);

  static inline ::Newtonsoft::Json::Linq::__Extensions___Values_d__11_2<T, U>* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void __m__Finally2();

  /// @brief Method System.Collections.Generic.IEnumerator<U>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
  inline U System_Collections_Generic_IEnumerator_U__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<U>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<U>* System_Collections_Generic_IEnumerable_U__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__Extensions___Values_d__11_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Extensions___Values_d__11_2(__Extensions___Values_d__11_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Extensions___Values_d__11_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Extensions___Values_d__11_2(__Extensions___Values_d__11_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Extensions___Values_d__11_2();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  U _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field source, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<T>* ___source;

  /// @brief Field <>3__source, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<T>* _____3__source;

  /// @brief Field key, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ___key;

  /// @brief Field <>3__key, offset: 0x40, size: 0x8, def value: None
  ::System::Object* _____3__key;

  /// @brief Field <token>5__1, offset: 0x48, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* ____token_5__1;

  /// @brief Field <>7__wrap1, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<T>* _____7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* _____7__wrap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Linq
// Type: ::<>c__13`2
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// cpp template
template <typename T, typename U>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11983))
// CS Name: ::Extensions::<>c__13`2<T,U>*
class CORDL_TYPE __Extensions____c__13_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Newtonsoft::Json::Linq::__Extensions____c__13_2<T, U>* __9;

  /// @brief Field <>9__13_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__13_0, put = setStaticF___9__13_0))::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* __9__13_0;

  static inline void setStaticF___9(::Newtonsoft::Json::Linq::__Extensions____c__13_2<T, U>* value);

  static inline ::Newtonsoft::Json::Linq::__Extensions____c__13_2<T, U>* getStaticF___9();

  static inline void setStaticF___9__13_0(::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* value);

  static inline ::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* getStaticF___9__13_0();

  static inline ::Newtonsoft::Json::Linq::__Extensions____c__13_2<T, U>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <Children>b__13_0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* _Children_b__13_0(T c);

  // Ctor Parameters [CppParam { name: "", ty: "__Extensions____c__13_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Extensions____c__13_2(__Extensions____c__13_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Extensions____c__13_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Extensions____c__13_2(__Extensions____c__13_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Extensions____c__13_2();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Linq
// Type: ::<Convert>d__14`2
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// cpp template
template <typename T, typename U>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11984))
// CS Name: ::Extensions::<Convert>d__14`2<T,U>*
class CORDL_TYPE __Extensions___Convert_d__14_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current)) U __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field source, offset 0x28, size 0x8
  __declspec(property(get = __get_source, put = __set_source))::System::Collections::Generic::IEnumerable_1<T>* source;

  /// @brief Field <>3__source, offset 0x30, size 0x8
  __declspec(property(get = __get___3__source, put = __set___3__source))::System::Collections::Generic::IEnumerable_1<T>* __3__source;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __get___7__wrap1, put = __set___7__wrap1))::System::Collections::Generic::IEnumerator_1<T>* __7__wrap1;

  __declspec(property(get = System_Collections_Generic_IEnumerator_U__get_Current)) U System_Collections_Generic_IEnumerator_U__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<U>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<U>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<U>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<U>*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr U& __get___2__current();

  constexpr U const& __get___2__current() const;

  constexpr void __set___2__current(U value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::System::Collections::Generic::IEnumerable_1<T>*& __get_source();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> const& __get_source() const;

  constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<T>* value);

  constexpr ::System::Collections::Generic::IEnumerable_1<T>*& __get___3__source();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> const& __get___3__source() const;

  constexpr void __set___3__source(::System::Collections::Generic::IEnumerable_1<T>* value);

  constexpr ::System::Collections::Generic::IEnumerator_1<T>*& __get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<T>*> const& __get___7__wrap1() const;

  constexpr void __set___7__wrap1(::System::Collections::Generic::IEnumerator_1<T>* value);

  static inline ::Newtonsoft::Json::Linq::__Extensions___Convert_d__14_2<T, U>* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void __m__Finally1();

  /// @brief Method System.Collections.Generic.IEnumerator<U>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
  inline U System_Collections_Generic_IEnumerator_U__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<U>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<U>* System_Collections_Generic_IEnumerable_U__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__Extensions___Convert_d__14_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Extensions___Convert_d__14_2(__Extensions___Convert_d__14_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Extensions___Convert_d__14_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Extensions___Convert_d__14_2(__Extensions___Convert_d__14_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Extensions___Convert_d__14_2();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  U _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field source, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<T>* ___source;

  /// @brief Field <>3__source, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<T>* _____3__source;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<T>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Linq
// Type: Newtonsoft.Json.Linq::Extensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11985))
// CS Name: ::Newtonsoft.Json.Linq::Extensions*
class CORDL_TYPE Extensions : public ::System::Object {
public:
  // Declarations
  template <typename T, typename U> using _Convert_d__14_2 = ::Newtonsoft::Json::Linq::__Extensions___Convert_d__14_2<T, U>;

  template <typename T, typename U> using __c__13_2 = ::Newtonsoft::Json::Linq::__Extensions____c__13_2<T, U>;

  template <typename T, typename U> using _Values_d__11_2 = ::Newtonsoft::Json::Linq::__Extensions___Values_d__11_2<T, U>;

  using __c = ::Newtonsoft::Json::Linq::__Extensions____c;

  template <typename T> using __c__3_1 = ::Newtonsoft::Json::Linq::__Extensions____c__3_1<T>;

  template <typename T> using __c__2_1 = ::Newtonsoft::Json::Linq::__Extensions____c__2_1<T>;

  template <typename T> using __c__1_1 = ::Newtonsoft::Json::Linq::__Extensions____c__1_1<T>;

  template <typename T> using __c__0_1 = ::Newtonsoft::Json::Linq::__Extensions____c__0_1<T>;

  /// @brief Method Ancestors addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Ancestors(::System::Collections::Generic::IEnumerable_1<T>* source);

  /// @brief Method AncestorsAndSelf addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* AncestorsAndSelf(::System::Collections::Generic::IEnumerable_1<T>* source);

  /// @brief Method Descendants addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Descendants(::System::Collections::Generic::IEnumerable_1<T>* source);

  /// @brief Method DescendantsAndSelf addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* DescendantsAndSelf(::System::Collections::Generic::IEnumerable_1<T>* source);

  /// @brief Method Properties addr 0x26914fc size 0x138 virtual false final false
  static inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>* Properties(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JObject*>* source);

  /// @brief Method Values addr 0x2691634 size 0x5c virtual false final false
  static inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Values(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* source,
                                                                                                    ::System::Object* key);

  /// @brief Method Values addr 0x26916d8 size 0x8 virtual false final false
  static inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Values(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* source);

  /// @brief Method Values addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename U>
  static inline ::System::Collections::Generic::IEnumerable_1<U>* Values(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* source, ::System::Object* key);

  /// @brief Method Values addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename U> static inline ::System::Collections::Generic::IEnumerable_1<U>* Values(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* source);

  /// @brief Method Value addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename U> static inline U Value(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* value);

  /// @brief Method Value addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T, typename U> static inline U Value(::System::Collections::Generic::IEnumerable_1<T>* value);

  /// @brief Method Values addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T, typename U> static inline ::System::Collections::Generic::IEnumerable_1<U>* Values(::System::Collections::Generic::IEnumerable_1<T>* source, ::System::Object* key);

  /// @brief Method Children addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Children(::System::Collections::Generic::IEnumerable_1<T>* source);

  /// @brief Method Children addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T, typename U> static inline ::System::Collections::Generic::IEnumerable_1<U>* Children(::System::Collections::Generic::IEnumerable_1<T>* source);

  /// @brief Method Convert addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T, typename U> static inline ::System::Collections::Generic::IEnumerable_1<U>* Convert(::System::Collections::Generic::IEnumerable_1<T>* source);

  /// @brief Method Convert addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T, typename U> static inline U Convert(T token);

  /// @brief Method AsJEnumerable addr 0x2691690 size 0x48 virtual false final false
  static inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* AsJEnumerable(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* source);

  /// @brief Method AsJEnumerable addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::Newtonsoft::Json::Linq::IJEnumerable_1<T>* AsJEnumerable(::System::Collections::Generic::IEnumerable_1<T>* source);

  // Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Extensions(Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Extensions(Extensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Extensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::Extensions, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::Extensions);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::Extensions*, "Newtonsoft.Json.Linq", "Extensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Linq::__Extensions___Convert_d__14_2, "Newtonsoft.Json.Linq", "Extensions/<Convert>d__14`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Linq::__Extensions___Values_d__11_2, "Newtonsoft.Json.Linq", "Extensions/<Values>d__11`2");
NEED_NO_BOX(::Newtonsoft::Json::Linq::__Extensions____c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::__Extensions____c*, "Newtonsoft.Json.Linq", "Extensions/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Linq::__Extensions____c__0_1, "Newtonsoft.Json.Linq", "Extensions/<>c__0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Linq::__Extensions____c__13_2, "Newtonsoft.Json.Linq", "Extensions/<>c__13`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Linq::__Extensions____c__1_1, "Newtonsoft.Json.Linq", "Extensions/<>c__1`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Linq::__Extensions____c__2_1, "Newtonsoft.Json.Linq", "Extensions/<>c__2`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Linq::__Extensions____c__3_1, "Newtonsoft.Json.Linq", "Extensions/<>c__3`1");
