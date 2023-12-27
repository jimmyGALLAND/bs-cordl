#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__CompareOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleCollator)
namespace Mono::Globalization::Unicode {
struct __SimpleCollator__Context;
}
namespace Mono::Globalization::Unicode {
struct __SimpleCollator__Escape;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Globalization {
class SortKey;
}
namespace Mono::Globalization::Unicode {
struct __SimpleCollator__ExtenderType;
}
namespace Mono::Globalization::Unicode {
class Contraction;
}
namespace System::Globalization {
class ISimpleCollator;
}
namespace Mono::Globalization::Unicode {
struct __SimpleCollator__PreviousInfo;
}
namespace System::Globalization {
class TextInfo;
}
namespace Mono::Globalization::Unicode {
class Level2Map;
}
namespace System::Globalization {
struct CompareOptions;
}
namespace Mono::Globalization::Unicode {
class SortKeyBuffer;
}
namespace Mono::Globalization::Unicode {
class CodePointIndexer;
}
// Forward declare root types
namespace Mono::Globalization::Unicode {
struct __SimpleCollator__ExtenderType;
}
namespace Mono::Globalization::Unicode {
class SimpleCollator;
}
namespace Mono::Globalization::Unicode {
struct __SimpleCollator__Context;
}
namespace Mono::Globalization::Unicode {
struct __SimpleCollator__Escape;
}
namespace Mono::Globalization::Unicode {
struct __SimpleCollator__PreviousInfo;
}
// Write type traits
MARK_VAL_T(::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType);
MARK_REF_PTR_T(::Mono::Globalization::Unicode::SimpleCollator);
MARK_VAL_T(::Mono::Globalization::Unicode::__SimpleCollator__Context);
MARK_VAL_T(::Mono::Globalization::Unicode::__SimpleCollator__Escape);
MARK_VAL_T(::Mono::Globalization::Unicode::__SimpleCollator__PreviousInfo);
// Type: ::Context
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Globalization::Unicode {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3659))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2267))
// CS Name: ::SimpleCollator::Context
struct CORDL_TYPE __SimpleCollator__Context {
public:
  // Declarations
  /// @brief Method .ctor addr 0x24194ec size 0x1c virtual false final false
  inline void _ctor(::System::Globalization::CompareOptions opt, ::cordl_internals::Ptr<uint8_t> alwaysMatchFlags, ::cordl_internals::Ptr<uint8_t> neverMatchFlags,
                    ::cordl_internals::Ptr<uint8_t> buffer1, ::cordl_internals::Ptr<uint8_t> buffer2, ::cordl_internals::Ptr<uint8_t> prev1);

  // Ctor Parameters [CppParam { name: "Option", ty: "::System::Globalization::CompareOptions", modifiers: "", def_value: None }, CppParam { name: "NeverMatchFlags", ty:
  // "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "AlwaysMatchFlags", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }, CppParam { name:
  // "Buffer1", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "Buffer2", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }, CppParam {
  // name: "PrevCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "PrevSortKey", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }]
  constexpr __SimpleCollator__Context(::System::Globalization::CompareOptions Option, ::cordl_internals::Ptr<uint8_t> NeverMatchFlags, ::cordl_internals::Ptr<uint8_t> AlwaysMatchFlags,
                                      ::cordl_internals::Ptr<uint8_t> Buffer1, ::cordl_internals::Ptr<uint8_t> Buffer2, int32_t PrevCode, ::cordl_internals::Ptr<uint8_t> PrevSortKey) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SimpleCollator__Context();

  /// @brief Field Option, offset: 0x0, size: 0x4, def value: None
  ::System::Globalization::CompareOptions Option;

  /// @brief Field NeverMatchFlags, offset: 0x8, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> NeverMatchFlags;

  /// @brief Field AlwaysMatchFlags, offset: 0x10, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> AlwaysMatchFlags;

  /// @brief Field Buffer1, offset: 0x18, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> Buffer1;

  /// @brief Field Buffer2, offset: 0x20, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> Buffer2;

  /// @brief Field PrevCode, offset: 0x28, size: 0x4, def value: None
  int32_t PrevCode;

  /// @brief Field PrevSortKey, offset: 0x30, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> PrevSortKey;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::__SimpleCollator__Context, 0x38>, "Size mismatch!");

} // namespace Mono::Globalization::Unicode
// Type: ::PreviousInfo
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Globalization::Unicode {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2268))
// CS Name: ::SimpleCollator::PreviousInfo
struct CORDL_TYPE __SimpleCollator__PreviousInfo {
public:
  // Declarations
  /// @brief Method .ctor addr 0x241b064 size 0x10 virtual false final false
  inline void _ctor(bool dummy);

  // Ctor Parameters [CppParam { name: "Code", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SortKey", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }]
  constexpr __SimpleCollator__PreviousInfo(int32_t Code, ::cordl_internals::Ptr<uint8_t> SortKey) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SimpleCollator__PreviousInfo();

  /// @brief Field Code, offset: 0x0, size: 0x4, def value: None
  int32_t Code;

  /// @brief Field SortKey, offset: 0x8, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> SortKey;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::__SimpleCollator__PreviousInfo, 0x10>, "Size mismatch!");

} // namespace Mono::Globalization::Unicode
// Type: ::Escape
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Globalization::Unicode {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2269))
// CS Name: ::SimpleCollator::Escape
struct CORDL_TYPE __SimpleCollator__Escape {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "Source", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Start",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "End", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Optional", ty: "int32_t", modifiers: "", def_value:
  // None }]
  constexpr __SimpleCollator__Escape(::StringW Source, int32_t Index, int32_t Start, int32_t End, int32_t Optional) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SimpleCollator__Escape();

  /// @brief Field Source, offset: 0x0, size: 0x8, def value: None
  ::StringW Source;

  /// @brief Field Index, offset: 0x8, size: 0x4, def value: None
  int32_t Index;

  /// @brief Field Start, offset: 0xc, size: 0x4, def value: None
  int32_t Start;

  /// @brief Field End, offset: 0x10, size: 0x4, def value: None
  int32_t End;

  /// @brief Field Optional, offset: 0x14, size: 0x4, def value: None
  int32_t Optional;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::__SimpleCollator__Escape, 0x18>, "Size mismatch!");

} // namespace Mono::Globalization::Unicode
// Type: ::ExtenderType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Mono::Globalization::Unicode {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2270))
// CS Name: ::SimpleCollator::ExtenderType
struct CORDL_TYPE __SimpleCollator__ExtenderType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SimpleCollator__ExtenderType_Unwrapped
  enum struct ____SimpleCollator__ExtenderType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Simple = static_cast<int32_t>(0x1),
    __E_Voiced = static_cast<int32_t>(0x2),
    __E_Conditional = static_cast<int32_t>(0x3),
    __E_Buggy = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SimpleCollator__ExtenderType_Unwrapped() const noexcept {
    return static_cast<____SimpleCollator__ExtenderType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SimpleCollator__ExtenderType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SimpleCollator__ExtenderType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType const None;

  /// @brief Field Simple value: static_cast<int32_t>(0x1)
  static ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType const Simple;

  /// @brief Field Voiced value: static_cast<int32_t>(0x2)
  static ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType const Voiced;

  /// @brief Field Conditional value: static_cast<int32_t>(0x3)
  static ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType const Conditional;

  /// @brief Field Buggy value: static_cast<int32_t>(0x4)
  static ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType const Buggy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType, 0x4>, "Size mismatch!");

} // namespace Mono::Globalization::Unicode
// Type: Mono.Globalization.Unicode::SimpleCollator
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 93, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Globalization::Unicode {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2271))
// CS Name: ::Mono.Globalization.Unicode::SimpleCollator*
class CORDL_TYPE SimpleCollator : public ::System::Object {
public:
  // Declarations
  using ExtenderType = ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType;

  using Escape = ::Mono::Globalization::Unicode::__SimpleCollator__Escape;

  using PreviousInfo = ::Mono::Globalization::Unicode::__SimpleCollator__PreviousInfo;

  using Context = ::Mono::Globalization::Unicode::__SimpleCollator__Context;

  /// @brief Field textInfo, offset 0x10, size 0x8
  __declspec(property(get = __get_textInfo, put = __set_textInfo))::System::Globalization::TextInfo* textInfo;

  /// @brief Field cjkIndexer, offset 0x18, size 0x8
  __declspec(property(get = __get_cjkIndexer, put = __set_cjkIndexer))::Mono::Globalization::Unicode::CodePointIndexer* cjkIndexer;

  /// @brief Field contractions, offset 0x20, size 0x8
  __declspec(property(get = __get_contractions, put = __set_contractions))::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*> contractions;

  /// @brief Field level2Maps, offset 0x28, size 0x8
  __declspec(property(get = __get_level2Maps, put = __set_level2Maps))::ArrayW<::Mono::Globalization::Unicode::Level2Map*, ::Array<::Mono::Globalization::Unicode::Level2Map*>*> level2Maps;

  /// @brief Field unsafeFlags, offset 0x30, size 0x8
  __declspec(property(get = __get_unsafeFlags, put = __set_unsafeFlags))::ArrayW<uint8_t, ::Array<uint8_t>*> unsafeFlags;

  /// @brief Field cjkCatTable, offset 0x38, size 0x8
  __declspec(property(get = __get_cjkCatTable, put = __set_cjkCatTable))::cordl_internals::Ptr<uint8_t> cjkCatTable;

  /// @brief Field cjkLv1Table, offset 0x40, size 0x8
  __declspec(property(get = __get_cjkLv1Table, put = __set_cjkLv1Table))::cordl_internals::Ptr<uint8_t> cjkLv1Table;

  /// @brief Field cjkLv2Table, offset 0x48, size 0x8
  __declspec(property(get = __get_cjkLv2Table, put = __set_cjkLv2Table))::cordl_internals::Ptr<uint8_t> cjkLv2Table;

  /// @brief Field cjkLv2Indexer, offset 0x50, size 0x8
  __declspec(property(get = __get_cjkLv2Indexer, put = __set_cjkLv2Indexer))::Mono::Globalization::Unicode::CodePointIndexer* cjkLv2Indexer;

  /// @brief Field lcid, offset 0x58, size 0x4
  __declspec(property(get = __get_lcid, put = __set_lcid)) int32_t lcid;

  /// @brief Field frenchSort, offset 0x5c, size 0x1
  __declspec(property(get = __get_frenchSort, put = __set_frenchSort)) bool frenchSort;

  /// @brief Field invariant, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_invariant, put = setStaticF_invariant))::Mono::Globalization::Unicode::SimpleCollator* invariant;

  /// @brief Convert operator to "::System::Globalization::ISimpleCollator"
  constexpr operator ::System::Globalization::ISimpleCollator*() noexcept;

  constexpr ::System::Globalization::TextInfo*& __get_textInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::TextInfo*> const& __get_textInfo() const;

  constexpr void __set_textInfo(::System::Globalization::TextInfo* value);

  constexpr ::Mono::Globalization::Unicode::CodePointIndexer*& __get_cjkIndexer();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Globalization::Unicode::CodePointIndexer*> const& __get_cjkIndexer() const;

  constexpr void __set_cjkIndexer(::Mono::Globalization::Unicode::CodePointIndexer* value);

  constexpr ::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*>& __get_contractions();

  constexpr ::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*> const& __get_contractions() const;

  constexpr void __set_contractions(::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*> value);

  constexpr ::ArrayW<::Mono::Globalization::Unicode::Level2Map*, ::Array<::Mono::Globalization::Unicode::Level2Map*>*>& __get_level2Maps();

  constexpr ::ArrayW<::Mono::Globalization::Unicode::Level2Map*, ::Array<::Mono::Globalization::Unicode::Level2Map*>*> const& __get_level2Maps() const;

  constexpr void __set_level2Maps(::ArrayW<::Mono::Globalization::Unicode::Level2Map*, ::Array<::Mono::Globalization::Unicode::Level2Map*>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_unsafeFlags();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_unsafeFlags() const;

  constexpr void __set_unsafeFlags(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::cordl_internals::Ptr<uint8_t>& __get_cjkCatTable();

  constexpr ::cordl_internals::Ptr<uint8_t> const& __get_cjkCatTable() const;

  constexpr void __set_cjkCatTable(::cordl_internals::Ptr<uint8_t> value);

  constexpr ::cordl_internals::Ptr<uint8_t>& __get_cjkLv1Table();

  constexpr ::cordl_internals::Ptr<uint8_t> const& __get_cjkLv1Table() const;

  constexpr void __set_cjkLv1Table(::cordl_internals::Ptr<uint8_t> value);

  constexpr ::cordl_internals::Ptr<uint8_t>& __get_cjkLv2Table();

  constexpr ::cordl_internals::Ptr<uint8_t> const& __get_cjkLv2Table() const;

  constexpr void __set_cjkLv2Table(::cordl_internals::Ptr<uint8_t> value);

  constexpr ::Mono::Globalization::Unicode::CodePointIndexer*& __get_cjkLv2Indexer();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Globalization::Unicode::CodePointIndexer*> const& __get_cjkLv2Indexer() const;

  constexpr void __set_cjkLv2Indexer(::Mono::Globalization::Unicode::CodePointIndexer* value);

  constexpr int32_t& __get_lcid();

  constexpr int32_t const& __get_lcid() const;

  constexpr void __set_lcid(int32_t value);

  constexpr bool& __get_frenchSort();

  constexpr bool const& __get_frenchSort() const;

  constexpr void __set_frenchSort(bool value);

  static inline void setStaticF_invariant(::Mono::Globalization::Unicode::SimpleCollator* value);

  static inline ::Mono::Globalization::Unicode::SimpleCollator* getStaticF_invariant();

  static inline ::Mono::Globalization::Unicode::SimpleCollator* New_ctor(::System::Globalization::CultureInfo* culture);

  /// @brief Method .ctor addr 0x2417dec size 0x32c virtual false final false
  inline void _ctor(::System::Globalization::CultureInfo* culture);

  /// @brief Method SetCJKTable addr 0x2418118 size 0xdc virtual false final false
  inline void SetCJKTable(::System::Globalization::CultureInfo* culture, ByRef<::Mono::Globalization::Unicode::CodePointIndexer*> cjkIndexer, ByRef<::cordl_internals::Ptr<uint8_t>> catTable,
                          ByRef<::cordl_internals::Ptr<uint8_t>> lv1Table, ByRef<::Mono::Globalization::Unicode::CodePointIndexer*> lv2Indexer, ByRef<::cordl_internals::Ptr<uint8_t>> lv2Table);

  /// @brief Method GetNeutralCulture addr 0x24181f4 size 0x70 virtual false final false
  static inline ::System::Globalization::CultureInfo* GetNeutralCulture(::System::Globalization::CultureInfo* info);

  /// @brief Method Category addr 0x2418264 size 0x94 virtual false final false
  inline uint8_t Category(int32_t cp);

  /// @brief Method Level1 addr 0x24182f8 size 0x94 virtual false final false
  inline uint8_t Level1(int32_t cp);

  /// @brief Method Level2 addr 0x241838c size 0x12c virtual false final false
  inline uint8_t Level2(int32_t cp, ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType ext);

  /// @brief Method IsHalfKana addr 0x24184b8 size 0x74 virtual false final false
  static inline bool IsHalfKana(int32_t cp, ::System::Globalization::CompareOptions opt);

  /// @brief Method GetContraction addr 0x241852c size 0xc0 virtual false final false
  inline ::Mono::Globalization::Unicode::Contraction* GetContraction(::StringW s, int32_t start, int32_t end);

  /// @brief Method GetContraction addr 0x24185ec size 0x124 virtual false final false
  inline ::Mono::Globalization::Unicode::Contraction* GetContraction(::StringW s, int32_t start, int32_t end,
                                                                     ::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*> clist);

  /// @brief Method GetTailContraction addr 0x2418710 size 0xc0 virtual false final false
  inline ::Mono::Globalization::Unicode::Contraction* GetTailContraction(::StringW s, int32_t start, int32_t end);

  /// @brief Method GetTailContraction addr 0x24187d0 size 0x1f0 virtual false final false
  inline ::Mono::Globalization::Unicode::Contraction* GetTailContraction(::StringW s, int32_t start, int32_t end,
                                                                         ::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*> clist);

  /// @brief Method FilterOptions addr 0x24189c0 size 0xec virtual false final false
  inline int32_t FilterOptions(int32_t i, ::System::Globalization::CompareOptions opt);

  /// @brief Method GetExtenderType addr 0x2418aac size 0x104 virtual false final false
  inline ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType GetExtenderType(int32_t i);

  /// @brief Method ToDashTypeValue addr 0x2418bb0 size 0x20 virtual false final false
  static inline uint8_t ToDashTypeValue(::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType ext, ::System::Globalization::CompareOptions opt);

  /// @brief Method FilterExtender addr 0x2418bd0 size 0x214 virtual false final false
  inline int32_t FilterExtender(int32_t i, ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType ext, ::System::Globalization::CompareOptions opt);

  /// @brief Method IsIgnorable addr 0x2418de4 size 0x84 virtual false final false
  static inline bool IsIgnorable(int32_t i, ::System::Globalization::CompareOptions opt);

  /// @brief Method IsSafe addr 0x2418e68 size 0x60 virtual false final false
  inline bool IsSafe(int32_t i);

  /// @brief Method GetSortKey addr 0x2418ec8 size 0x20 virtual true final true
  inline ::System::Globalization::SortKey* GetSortKey(::StringW s, ::System::Globalization::CompareOptions options);

  /// @brief Method GetSortKey addr 0x2418ee8 size 0xc8 virtual false final false
  inline ::System::Globalization::SortKey* GetSortKey(::StringW s, int32_t start, int32_t length, ::System::Globalization::CompareOptions options);

  /// @brief Method GetSortKey addr 0x2419130 size 0x37c virtual false final false
  inline void GetSortKey(::StringW s, int32_t start, int32_t end, ::Mono::Globalization::Unicode::SortKeyBuffer* buf, ::System::Globalization::CompareOptions opt);

  /// @brief Method FillSortKeyRaw addr 0x2419508 size 0x3a0 virtual false final false
  inline void FillSortKeyRaw(int32_t i, ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType ext, ::Mono::Globalization::Unicode::SortKeyBuffer* buf,
                             ::System::Globalization::CompareOptions opt);

  /// @brief Method FillSurrogateSortKeyRaw addr 0x2419a80 size 0xb4 virtual false final false
  inline void FillSurrogateSortKeyRaw(int32_t i, ::Mono::Globalization::Unicode::SortKeyBuffer* buf);

  /// @brief Method System.Globalization.ISimpleCollator.Compare addr 0x2419bc8 size 0x4 virtual true final true
  inline int32_t System_Globalization_ISimpleCollator_Compare(::StringW s1, int32_t idx1, int32_t len1, ::StringW s2, int32_t idx2, int32_t len2, ::System::Globalization::CompareOptions options);

  /// @brief Method Compare addr 0x2419bcc size 0xb4 virtual false final false
  inline int32_t Compare(::StringW s1, int32_t idx1, int32_t len1, ::StringW s2, int32_t idx2, int32_t len2, ::System::Globalization::CompareOptions options);

  /// @brief Method ClearBuffer addr 0x24194d0 size 0x1c virtual false final false
  inline void ClearBuffer(::cordl_internals::Ptr<uint8_t> buffer, int32_t size);

  /// @brief Method CompareInternal addr 0x2419c80 size 0x13e4 virtual false final false
  inline int32_t CompareInternal(::StringW s1, int32_t idx1, int32_t len1, ::StringW s2, int32_t idx2, int32_t len2, ByRef<bool> targetConsumed, ByRef<bool> sourceConsumed, bool skipHeadingExtenders,
                                 bool immediateBreakup, ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context> ctx);

  /// @brief Method CompareFlagPair addr 0x241b074 size 0x20 virtual false final false
  inline int32_t CompareFlagPair(bool b1, bool b2);

  /// @brief Method IsPrefix addr 0x241b094 size 0x20 virtual true final true
  inline bool IsPrefix(::StringW src, ::StringW target, ::System::Globalization::CompareOptions opt);

  /// @brief Method IsPrefix addr 0x241b0b4 size 0xb0 virtual false final false
  inline bool IsPrefix(::StringW s, ::StringW target, int32_t start, int32_t length, ::System::Globalization::CompareOptions opt);

  /// @brief Method IsPrefix addr 0x241b164 size 0x68 virtual false final false
  inline bool IsPrefix(::StringW s, ::StringW target, int32_t start, int32_t length, bool skipHeadingExtenders, ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context> ctx);

  /// @brief Method IsSuffix addr 0x241b1cc size 0x20 virtual true final true
  inline bool IsSuffix(::StringW src, ::StringW target, ::System::Globalization::CompareOptions opt);

  /// @brief Method IsSuffix addr 0x241b1ec size 0x94 virtual false final false
  inline bool IsSuffix(::StringW s, ::StringW target, int32_t start, int32_t length, ::System::Globalization::CompareOptions opt);

  /// @brief Method QuickIndexOf addr 0x241b40c size 0x168 virtual false final false
  inline int32_t QuickIndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, ByRef<bool> testWasUnable);

  /// @brief Method IndexOf addr 0x241b574 size 0x1f4 virtual true final true
  inline int32_t IndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, ::System::Globalization::CompareOptions opt);

  /// @brief Method IndexOfOrdinal addr 0x241bc04 size 0xd8 virtual false final false
  inline int32_t IndexOfOrdinal(::StringW s, ::StringW target, int32_t start, int32_t length);

  /// @brief Method IndexOfOrdinal addr 0x241bcdc size 0x70 virtual false final false
  inline int32_t IndexOfOrdinal(::StringW s, char16_t target, int32_t start, int32_t length);

  /// @brief Method IndexOfSortKey addr 0x241bd4c size 0x9c virtual false final false
  inline int32_t IndexOfSortKey(::StringW s, int32_t start, int32_t length, ::cordl_internals::Ptr<uint8_t> sortkey, char16_t target, int32_t ti, bool noLv4,
                                ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context> ctx);

  /// @brief Method IndexOf addr 0x241b768 size 0x49c virtual false final false
  inline int32_t IndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, ::cordl_internals::Ptr<uint8_t> targetSortKey,
                         ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context> ctx);

  /// @brief Method LastIndexOf addr 0x241b280 size 0x18c virtual true final true
  inline int32_t LastIndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, ::System::Globalization::CompareOptions opt);

  /// @brief Method LastIndexOfOrdinal addr 0x241c4c0 size 0x134 virtual false final false
  inline int32_t LastIndexOfOrdinal(::StringW s, ::StringW target, int32_t start, int32_t length);

  /// @brief Method LastIndexOfSortKey addr 0x241c5f4 size 0xa4 virtual false final false
  inline int32_t LastIndexOfSortKey(::StringW s, int32_t start, int32_t orgStart, int32_t length, ::cordl_internals::Ptr<uint8_t> sortkey, int32_t ti, bool noLv4,
                                    ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context> ctx);

  /// @brief Method LastIndexOf addr 0x241bfa0 size 0x520 virtual false final false
  inline int32_t LastIndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, ::cordl_internals::Ptr<uint8_t> targetSortKey,
                             ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context> ctx);

  /// @brief Method MatchesForward addr 0x241bde8 size 0x1b8 virtual false final false
  inline bool MatchesForward(::StringW s, ByRef<int32_t> idx, int32_t end, int32_t ti, ::cordl_internals::Ptr<uint8_t> sortkey, bool noLv4,
                             ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context> ctx);

  /// @brief Method MatchesForwardCore addr 0x241c85c size 0x354 virtual false final false
  inline bool MatchesForwardCore(::StringW s, ByRef<int32_t> idx, int32_t end, int32_t ti, ::cordl_internals::Ptr<uint8_t> sortkey, bool noLv4,
                                 ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType ext, ByRef<::Mono::Globalization::Unicode::Contraction*> ct,
                                 ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context> ctx);

  /// @brief Method MatchesPrimitive addr 0x241cbb0 size 0x22c virtual false final false
  inline bool MatchesPrimitive(::System::Globalization::CompareOptions opt, ::cordl_internals::Ptr<uint8_t> source, int32_t si, ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType ext,
                               ::cordl_internals::Ptr<uint8_t> target, int32_t ti, bool noLv4);

  /// @brief Method MatchesBackward addr 0x241c698 size 0x1c4 virtual false final false
  inline bool MatchesBackward(::StringW s, ByRef<int32_t> idx, int32_t end, int32_t orgStart, int32_t ti, ::cordl_internals::Ptr<uint8_t> sortkey, bool noLv4,
                              ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context> ctx);

  /// @brief Method MatchesBackwardCore addr 0x241cddc size 0x498 virtual false final false
  inline bool MatchesBackwardCore(::StringW s, ByRef<int32_t> idx, int32_t end, int32_t orgStart, int32_t ti, ::cordl_internals::Ptr<uint8_t> sortkey, bool noLv4,
                                  ::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType ext, ByRef<::Mono::Globalization::Unicode::Contraction*> ct,
                                  ByRef<::Mono::Globalization::Unicode::__SimpleCollator__Context> ctx);

  // Ctor Parameters [CppParam { name: "", ty: "SimpleCollator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleCollator(SimpleCollator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleCollator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleCollator(SimpleCollator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleCollator();

public:
  /// @brief Field textInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Globalization::TextInfo* ___textInfo;

  /// @brief Field cjkIndexer, offset: 0x18, size: 0x8, def value: None
  ::Mono::Globalization::Unicode::CodePointIndexer* ___cjkIndexer;

  /// @brief Field contractions, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::Mono::Globalization::Unicode::Contraction*, ::Array<::Mono::Globalization::Unicode::Contraction*>*> ___contractions;

  /// @brief Field level2Maps, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::Mono::Globalization::Unicode::Level2Map*, ::Array<::Mono::Globalization::Unicode::Level2Map*>*> ___level2Maps;

  /// @brief Field unsafeFlags, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___unsafeFlags;

  /// @brief Field cjkCatTable, offset: 0x38, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> ___cjkCatTable;

  /// @brief Field cjkLv1Table, offset: 0x40, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> ___cjkLv1Table;

  /// @brief Field cjkLv2Table, offset: 0x48, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> ___cjkLv2Table;

  /// @brief Field cjkLv2Indexer, offset: 0x50, size: 0x8, def value: None
  ::Mono::Globalization::Unicode::CodePointIndexer* ___cjkLv2Indexer;

  /// @brief Field lcid, offset: 0x58, size: 0x4, def value: None
  int32_t ___lcid;

  /// @brief Field frenchSort, offset: 0x5c, size: 0x1, def value: None
  bool ___frenchSort;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::SimpleCollator, 0x60>, "Size mismatch!");

} // namespace Mono::Globalization::Unicode
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::__SimpleCollator__ExtenderType, "Mono.Globalization.Unicode", "SimpleCollator/ExtenderType");
NEED_NO_BOX(::Mono::Globalization::Unicode::SimpleCollator);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::SimpleCollator*, "Mono.Globalization.Unicode", "SimpleCollator");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::__SimpleCollator__Context, "Mono.Globalization.Unicode", "SimpleCollator/Context");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::__SimpleCollator__Escape, "Mono.Globalization.Unicode", "SimpleCollator/Escape");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::__SimpleCollator__PreviousInfo, "Mono.Globalization.Unicode", "SimpleCollator/PreviousInfo");
