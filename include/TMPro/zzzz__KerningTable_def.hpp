#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(KerningTable)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace TMPro {
struct GlyphValueRecord_Legacy;
}
namespace TMPro {
class KerningPair;
}
namespace TMPro {
class __KerningTable____c;
}
namespace TMPro {
class __KerningTable____c__DisplayClass3_0;
}
namespace TMPro {
class __KerningTable____c__DisplayClass4_0;
}
namespace TMPro {
class __KerningTable____c__DisplayClass5_0;
}
// Forward declare root types
namespace TMPro {
class KerningTable;
}
namespace TMPro {
class __KerningTable____c;
}
namespace TMPro {
class __KerningTable____c__DisplayClass3_0;
}
namespace TMPro {
class __KerningTable____c__DisplayClass4_0;
}
namespace TMPro {
class __KerningTable____c__DisplayClass5_0;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::KerningTable);
MARK_REF_PTR_T(::TMPro::__KerningTable____c);
MARK_REF_PTR_T(::TMPro::__KerningTable____c__DisplayClass3_0);
MARK_REF_PTR_T(::TMPro::__KerningTable____c__DisplayClass4_0);
MARK_REF_PTR_T(::TMPro::__KerningTable____c__DisplayClass5_0);
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::KerningTable::<>c__DisplayClass3_0*
class CORDL_TYPE __KerningTable____c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field first, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_first, put = __cordl_internal_set_first)) uint32_t first;

  /// @brief Field second, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_second, put = __cordl_internal_set_second)) uint32_t second;

  static inline ::TMPro::__KerningTable____c__DisplayClass3_0* New_ctor();

  /// @brief Method <AddKerningPair>b__0, addr 0x3140738, size 0x3c, virtual false, abstract: false, final false
  inline bool _AddKerningPair_b__0(::TMPro::KerningPair* item);

  constexpr uint32_t const& __cordl_internal_get_first() const;

  constexpr uint32_t& __cordl_internal_get_first();

  constexpr uint32_t const& __cordl_internal_get_second() const;

  constexpr uint32_t& __cordl_internal_get_second();

  constexpr void __cordl_internal_set_first(uint32_t value);

  constexpr void __cordl_internal_set_second(uint32_t value);

  /// @brief Method .ctor, addr 0x31401c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __KerningTable____c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__KerningTable____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __KerningTable____c__DisplayClass3_0(__KerningTable____c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__KerningTable____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __KerningTable____c__DisplayClass3_0(__KerningTable____c__DisplayClass3_0 const&) = delete;

  /// @brief Field first, offset: 0x10, size: 0x4, def value: None
  uint32_t ___first;

  /// @brief Field second, offset: 0x14, size: 0x4, def value: None
  uint32_t ___second;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__KerningTable____c__DisplayClass3_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::TMPro::__KerningTable____c__DisplayClass3_0, ___first) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::__KerningTable____c__DisplayClass3_0, ___second) == 0x14, "Offset mismatch!");

} // namespace TMPro
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::KerningTable::<>c__DisplayClass4_0*
class CORDL_TYPE __KerningTable____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field first, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_first, put = __cordl_internal_set_first)) uint32_t first;

  /// @brief Field second, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_second, put = __cordl_internal_set_second)) uint32_t second;

  static inline ::TMPro::__KerningTable____c__DisplayClass4_0* New_ctor();

  /// @brief Method <AddGlyphPairAdjustmentRecord>b__0, addr 0x3140774, size 0x3c, virtual false, abstract: false, final false
  inline bool _AddGlyphPairAdjustmentRecord_b__0(::TMPro::KerningPair* item);

  constexpr uint32_t const& __cordl_internal_get_first() const;

  constexpr uint32_t& __cordl_internal_get_first();

  constexpr uint32_t const& __cordl_internal_get_second() const;

  constexpr uint32_t& __cordl_internal_get_second();

  constexpr void __cordl_internal_set_first(uint32_t value);

  constexpr void __cordl_internal_set_second(uint32_t value);

  /// @brief Method .ctor, addr 0x31403c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __KerningTable____c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__KerningTable____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __KerningTable____c__DisplayClass4_0(__KerningTable____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__KerningTable____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __KerningTable____c__DisplayClass4_0(__KerningTable____c__DisplayClass4_0 const&) = delete;

  /// @brief Field first, offset: 0x10, size: 0x4, def value: None
  uint32_t ___first;

  /// @brief Field second, offset: 0x14, size: 0x4, def value: None
  uint32_t ___second;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__KerningTable____c__DisplayClass4_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::TMPro::__KerningTable____c__DisplayClass4_0, ___first) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::__KerningTable____c__DisplayClass4_0, ___second) == 0x14, "Offset mismatch!");

} // namespace TMPro
// Type: ::<>c__DisplayClass5_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::KerningTable::<>c__DisplayClass5_0*
class CORDL_TYPE __KerningTable____c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field left, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_left, put = __cordl_internal_set_left)) int32_t left;

  /// @brief Field right, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_right, put = __cordl_internal_set_right)) int32_t right;

  static inline ::TMPro::__KerningTable____c__DisplayClass5_0* New_ctor();

  /// @brief Method <RemoveKerningPair>b__0, addr 0x31407b0, size 0x3c, virtual false, abstract: false, final false
  inline bool _RemoveKerningPair_b__0(::TMPro::KerningPair* item);

  constexpr int32_t const& __cordl_internal_get_left() const;

  constexpr int32_t& __cordl_internal_get_left();

  constexpr int32_t const& __cordl_internal_get_right() const;

  constexpr int32_t& __cordl_internal_get_right();

  constexpr void __cordl_internal_set_left(int32_t value);

  constexpr void __cordl_internal_set_right(int32_t value);

  /// @brief Method .ctor, addr 0x31404ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __KerningTable____c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__KerningTable____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __KerningTable____c__DisplayClass5_0(__KerningTable____c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__KerningTable____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __KerningTable____c__DisplayClass5_0(__KerningTable____c__DisplayClass5_0 const&) = delete;

  /// @brief Field left, offset: 0x10, size: 0x4, def value: None
  int32_t ___left;

  /// @brief Field right, offset: 0x14, size: 0x4, def value: None
  int32_t ___right;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__KerningTable____c__DisplayClass5_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::TMPro::__KerningTable____c__DisplayClass5_0, ___left) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::__KerningTable____c__DisplayClass5_0, ___right) == 0x14, "Offset mismatch!");

} // namespace TMPro
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::KerningTable::<>c*
class CORDL_TYPE __KerningTable____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::TMPro::__KerningTable____c* __9;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0))::System::Func_2<::TMPro::KerningPair*, uint32_t>* __9__7_0;

  /// @brief Field <>9__7_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_1, put = setStaticF___9__7_1))::System::Func_2<::TMPro::KerningPair*, uint32_t>* __9__7_1;

  static inline ::TMPro::__KerningTable____c* New_ctor();

  /// @brief Method <SortKerningPairs>b__7_0, addr 0x3140858, size 0x18, virtual false, abstract: false, final false
  inline uint32_t _SortKerningPairs_b__7_0(::TMPro::KerningPair* s);

  /// @brief Method <SortKerningPairs>b__7_1, addr 0x3140870, size 0x18, virtual false, abstract: false, final false
  inline uint32_t _SortKerningPairs_b__7_1(::TMPro::KerningPair* s);

  /// @brief Method .ctor, addr 0x3140850, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::TMPro::__KerningTable____c* getStaticF___9();

  static inline ::System::Func_2<::TMPro::KerningPair*, uint32_t>* getStaticF___9__7_0();

  static inline ::System::Func_2<::TMPro::KerningPair*, uint32_t>* getStaticF___9__7_1();

  static inline void setStaticF___9(::TMPro::__KerningTable____c* value);

  static inline void setStaticF___9__7_0(::System::Func_2<::TMPro::KerningPair*, uint32_t>* value);

  static inline void setStaticF___9__7_1(::System::Func_2<::TMPro::KerningPair*, uint32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __KerningTable____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__KerningTable____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __KerningTable____c(__KerningTable____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__KerningTable____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __KerningTable____c(__KerningTable____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__KerningTable____c, 0x10>, "Size mismatch!");

} // namespace TMPro
// Type: TMPro::KerningTable
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMPro::KerningTable*
class CORDL_TYPE KerningTable : public ::System::Object {
public:
  // Declarations
  using __c = ::TMPro::__KerningTable____c;

  using __c__DisplayClass3_0 = ::TMPro::__KerningTable____c__DisplayClass3_0;

  using __c__DisplayClass4_0 = ::TMPro::__KerningTable____c__DisplayClass4_0;

  using __c__DisplayClass5_0 = ::TMPro::__KerningTable____c__DisplayClass5_0;

  /// @brief Field kerningPairs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_kerningPairs, put = __cordl_internal_set_kerningPairs))::System::Collections::Generic::List_1<::TMPro::KerningPair*>* kerningPairs;

  /// @brief Method AddGlyphPairAdjustmentRecord, addr 0x31401cc, size 0x1f8, virtual false, abstract: false, final false
  inline int32_t AddGlyphPairAdjustmentRecord(uint32_t first, ::TMPro::GlyphValueRecord_Legacy firstAdjustments, uint32_t second, ::TMPro::GlyphValueRecord_Legacy secondAdjustments);

  /// @brief Method AddKerningPair, addr 0x314000c, size 0x1b8, virtual false, abstract: false, final false
  inline int32_t AddKerningPair(uint32_t first, uint32_t second, float_t offset);

  /// @brief Method AddKerningPair, addr 0x313fe38, size 0x1d4, virtual false, abstract: false, final false
  inline void AddKerningPair();

  static inline ::TMPro::KerningTable* New_ctor();

  /// @brief Method RemoveKerningPair, addr 0x31404f4, size 0x58, virtual false, abstract: false, final false
  inline void RemoveKerningPair(int32_t index);

  /// @brief Method RemoveKerningPair, addr 0x31403cc, size 0x120, virtual false, abstract: false, final false
  inline void RemoveKerningPair(int32_t left, int32_t right);

  /// @brief Method SortKerningPairs, addr 0x314054c, size 0x1ec, virtual false, abstract: false, final false
  inline void SortKerningPairs();

  constexpr ::System::Collections::Generic::List_1<::TMPro::KerningPair*>*& __cordl_internal_get_kerningPairs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TMPro::KerningPair*>*> const& __cordl_internal_get_kerningPairs() const;

  constexpr void __cordl_internal_set_kerningPairs(::System::Collections::Generic::List_1<::TMPro::KerningPair*>* value);

  /// @brief Method .ctor, addr 0x313f6b0, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KerningTable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KerningTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KerningTable(KerningTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KerningTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KerningTable(KerningTable const&) = delete;

  /// @brief Field kerningPairs, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::KerningPair*>* ___kerningPairs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::KerningTable, 0x18>, "Size mismatch!");

static_assert(offsetof(::TMPro::KerningTable, ___kerningPairs) == 0x10, "Offset mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::KerningTable);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::KerningTable*, "TMPro", "KerningTable");
NEED_NO_BOX(::TMPro::__KerningTable____c);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__KerningTable____c*, "TMPro", "KerningTable/<>c");
NEED_NO_BOX(::TMPro::__KerningTable____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__KerningTable____c__DisplayClass3_0*, "TMPro", "KerningTable/<>c__DisplayClass3_0");
NEED_NO_BOX(::TMPro::__KerningTable____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__KerningTable____c__DisplayClass4_0*, "TMPro", "KerningTable/<>c__DisplayClass4_0");
NEED_NO_BOX(::TMPro::__KerningTable____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__KerningTable____c__DisplayClass5_0*, "TMPro", "KerningTable/<>c__DisplayClass5_0");
