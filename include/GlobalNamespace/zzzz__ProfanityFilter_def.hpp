#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProfanityFilter)
namespace GlobalNamespace {
class __ProfanityFilter__TrieNode;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace GlobalNamespace {
class __ProfanityFilter___GetLookalikeLetters_d__4;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
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
namespace GlobalNamespace {
class ProfanityFilter;
}
namespace GlobalNamespace {
class __ProfanityFilter__TrieNode;
}
namespace GlobalNamespace {
class __ProfanityFilter___GetLookalikeLetters_d__4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ProfanityFilter);
MARK_REF_PTR_T(::GlobalNamespace::__ProfanityFilter__TrieNode);
MARK_REF_PTR_T(::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4);
// Type: ::TrieNode
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12931))
// CS Name: ::ProfanityFilter::TrieNode*
class CORDL_TYPE __ProfanityFilter__TrieNode : public ::System::Object {
public:
  // Declarations
  /// @brief Field _children, offset 0x10, size 0x8
  __declspec(property(get = __get__children, put = __set__children))::System::Collections::Generic::Dictionary_2<char16_t, ::GlobalNamespace::__ProfanityFilter__TrieNode*>* _children;

  /// @brief Field _shortestWord, offset 0x18, size 0x4
  __declspec(property(get = __get__shortestWord, put = __set__shortestWord)) int32_t _shortestWord;

  constexpr ::System::Collections::Generic::Dictionary_2<char16_t, ::GlobalNamespace::__ProfanityFilter__TrieNode*>*& __get__children();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<char16_t, ::GlobalNamespace::__ProfanityFilter__TrieNode*>*> const& __get__children() const;

  constexpr void __set__children(::System::Collections::Generic::Dictionary_2<char16_t, ::GlobalNamespace::__ProfanityFilter__TrieNode*>* value);

  constexpr int32_t& __get__shortestWord();

  constexpr int32_t const& __get__shortestWord() const;

  constexpr void __set__shortestWord(int32_t value);

  /// @brief Method AddWord addr 0xe539b8 size 0x4c4 virtual false final false
  inline void AddWord(::StringW word, int32_t index);

  /// @brief Method IsMatch addr 0xe53ee4 size 0x178 virtual false final false
  inline bool IsMatch(::StringW word, int32_t index);

  static inline ::GlobalNamespace::__ProfanityFilter__TrieNode* New_ctor();

  /// @brief Method .ctor addr 0xe539a8 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__ProfanityFilter__TrieNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ProfanityFilter__TrieNode(__ProfanityFilter__TrieNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ProfanityFilter__TrieNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ProfanityFilter__TrieNode(__ProfanityFilter__TrieNode const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProfanityFilter__TrieNode();

public:
  /// @brief Field _children, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<char16_t, ::GlobalNamespace::__ProfanityFilter__TrieNode*>* ____children;

  /// @brief Field _shortestWord, offset: 0x18, size: 0x4, def value: None
  int32_t ____shortestWord;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ProfanityFilter__TrieNode, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetLookalikeLetters>d__4
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12932))
// CS Name: ::ProfanityFilter::<GetLookalikeLetters>d__4*
class CORDL_TYPE __ProfanityFilter___GetLookalikeLetters_d__4 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x14, size 0x2
  __declspec(property(get = __get___2__current, put = __set___2__current)) char16_t __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x18, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field c, offset 0x1c, size 0x2
  __declspec(property(get = __get_c, put = __set_c)) char16_t c;

  /// @brief Field <>3__c, offset 0x1e, size 0x2
  __declspec(property(get = __get___3__c, put = __set___3__c)) char16_t __3__c;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Char__get_Current)) char16_t System_Collections_Generic_IEnumerator_System_Char__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<char16_t>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<char16_t>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<char16_t>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<char16_t>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr char16_t& __get___2__current();

  constexpr char16_t const& __get___2__current() const;

  constexpr void __set___2__current(char16_t value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr char16_t& __get_c();

  constexpr char16_t const& __get_c() const;

  constexpr void __set_c(char16_t value);

  constexpr char16_t& __get___3__c();

  constexpr char16_t const& __get___3__c() const;

  constexpr void __set___3__c(char16_t value);

  static inline ::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0xe540d4 size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0xe54174 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0xe54178 size 0xa4 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Char>.get_Current addr 0xe5421c size 0x8 virtual true final true
  inline char16_t System_Collections_Generic_IEnumerator_System_Char__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0xe54224 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0xe54264 size 0x5c virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<System.Char>.GetEnumerator addr 0xe542c0 size 0xa4 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<char16_t>* System_Collections_Generic_IEnumerable_System_Char__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0xe54364 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__ProfanityFilter___GetLookalikeLetters_d__4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ProfanityFilter___GetLookalikeLetters_d__4(__ProfanityFilter___GetLookalikeLetters_d__4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ProfanityFilter___GetLookalikeLetters_d__4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ProfanityFilter___GetLookalikeLetters_d__4(__ProfanityFilter___GetLookalikeLetters_d__4 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProfanityFilter___GetLookalikeLetters_d__4();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x14, size: 0x2, def value: None
  char16_t _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x18, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field c, offset: 0x1c, size: 0x2, def value: None
  char16_t ___c;

  /// @brief Field <>3__c, offset: 0x1e, size: 0x2, def value: None
  char16_t _____3__c;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ProfanityFilter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12933))
// CS Name: ::ProfanityFilter*
class CORDL_TYPE ProfanityFilter : public ::System::Object {
public:
  // Declarations
  using _GetLookalikeLetters_d__4 = ::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4;

  using TrieNode = ::GlobalNamespace::__ProfanityFilter__TrieNode;

  /// @brief Field _trie, offset 0x10, size 0x8
  __declspec(property(get = __get__trie, put = __set__trie))::GlobalNamespace::__ProfanityFilter__TrieNode* _trie;

  constexpr ::GlobalNamespace::__ProfanityFilter__TrieNode*& __get__trie();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ProfanityFilter__TrieNode*> const& __get__trie() const;

  constexpr void __set__trie(::GlobalNamespace::__ProfanityFilter__TrieNode* value);

  static inline ::GlobalNamespace::ProfanityFilter* New_ctor(::System::Collections::Generic::IEnumerable_1<::StringW>* wordList);

  /// @brief Method .ctor addr 0xe53668 size 0x340 virtual false final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::StringW>* wordList);

  /// @brief Method IsProfane addr 0xe53e7c size 0x68 virtual false final false
  inline bool IsProfane(::StringW word);

  /// @brief Method GetLookalikeLetters addr 0xe5405c size 0x78 virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<char16_t>* GetLookalikeLetters(char16_t c);

  /// @brief Method GetLeetEquivalent addr 0xe54108 size 0x6c virtual false final false
  static inline char16_t GetLeetEquivalent(char16_t c);

  // Ctor Parameters [CppParam { name: "", ty: "ProfanityFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProfanityFilter(ProfanityFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProfanityFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProfanityFilter(ProfanityFilter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfanityFilter();

public:
  /// @brief Field _trie, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__ProfanityFilter__TrieNode* ____trie;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ProfanityFilter, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ProfanityFilter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ProfanityFilter*, "", "ProfanityFilter");
NEED_NO_BOX(::GlobalNamespace::__ProfanityFilter__TrieNode);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ProfanityFilter__TrieNode*, "", "ProfanityFilter/TrieNode");
NEED_NO_BOX(::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*, "", "ProfanityFilter/<GetLookalikeLetters>d__4");
