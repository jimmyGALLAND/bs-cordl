#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Deflate)
namespace Org::BouncyCastle::Utilities::Zlib {
class ZStream;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class Tree;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class __Deflate__Config;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class Deflate;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class __Deflate__Config;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Zlib::Deflate);
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config);
// Type: ::Config
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1818))
// CS Name: ::Deflate::Config*
class CORDL_TYPE __Deflate__Config : public ::System::Object {
public:
  // Declarations
  /// @brief Field good_length, offset 0x10, size 0x4
  __declspec(property(get = __get_good_length, put = __set_good_length)) int32_t good_length;

  /// @brief Field max_lazy, offset 0x14, size 0x4
  __declspec(property(get = __get_max_lazy, put = __set_max_lazy)) int32_t max_lazy;

  /// @brief Field nice_length, offset 0x18, size 0x4
  __declspec(property(get = __get_nice_length, put = __set_nice_length)) int32_t nice_length;

  /// @brief Field max_chain, offset 0x1c, size 0x4
  __declspec(property(get = __get_max_chain, put = __set_max_chain)) int32_t max_chain;

  /// @brief Field func, offset 0x20, size 0x4
  __declspec(property(get = __get_func, put = __set_func)) int32_t func;

  constexpr int32_t& __get_good_length();

  constexpr int32_t const& __get_good_length() const;

  constexpr void __set_good_length(int32_t value);

  constexpr int32_t& __get_max_lazy();

  constexpr int32_t const& __get_max_lazy() const;

  constexpr void __set_max_lazy(int32_t value);

  constexpr int32_t& __get_nice_length();

  constexpr int32_t const& __get_nice_length() const;

  constexpr void __set_nice_length(int32_t value);

  constexpr int32_t& __get_max_chain();

  constexpr int32_t const& __get_max_chain() const;

  constexpr void __set_max_chain(int32_t value);

  constexpr int32_t& __get_func();

  constexpr int32_t const& __get_func() const;

  constexpr void __set_func(int32_t value);

  static inline ::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config* New_ctor(int32_t good_length, int32_t max_lazy, int32_t nice_length, int32_t max_chain, int32_t func);

  /// @brief Method .ctor addr 0x1164504 size 0x50 virtual false final false
  inline void _ctor(int32_t good_length, int32_t max_lazy, int32_t nice_length, int32_t max_chain, int32_t func);

  // Ctor Parameters [CppParam { name: "", ty: "__Deflate__Config", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Deflate__Config(__Deflate__Config&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Deflate__Config", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Deflate__Config(__Deflate__Config const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Deflate__Config();

public:
  /// @brief Field good_length, offset: 0x10, size: 0x4, def value: None
  int32_t ___good_length;

  /// @brief Field max_lazy, offset: 0x14, size: 0x4, def value: None
  int32_t ___max_lazy;

  /// @brief Field nice_length, offset: 0x18, size: 0x4, def value: None
  int32_t ___nice_length;

  /// @brief Field max_chain, offset: 0x1c, size: 0x4, def value: None
  int32_t ___max_chain;

  /// @brief Field func, offset: 0x20, size: 0x4, def value: None
  int32_t ___func;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Zlib
// Type: Org.BouncyCastle.Utilities.Zlib::Deflate
// SizeInfo { instance_size: 304, native_size: -1, calculated_instance_size: 304, calculated_native_size: 304, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1819))
// CS Name: ::Org.BouncyCastle.Utilities.Zlib::Deflate*
class CORDL_TYPE Deflate : public ::System::Object {
public:
  // Declarations
  using Config = ::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config;

  /// @brief Field strm, offset 0x10, size 0x8
  __declspec(property(get = __get_strm, put = __set_strm))::Org::BouncyCastle::Utilities::Zlib::ZStream* strm;

  /// @brief Field status, offset 0x18, size 0x4
  __declspec(property(get = __get_status, put = __set_status)) int32_t status;

  /// @brief Field pending_buf, offset 0x20, size 0x8
  __declspec(property(get = __get_pending_buf, put = __set_pending_buf))::ArrayW<uint8_t, ::Array<uint8_t>*> pending_buf;

  /// @brief Field pending_out, offset 0x28, size 0x4
  __declspec(property(get = __get_pending_out, put = __set_pending_out)) int32_t pending_out;

  /// @brief Field pending, offset 0x2c, size 0x4
  __declspec(property(get = __get_pending, put = __set_pending)) int32_t pending;

  /// @brief Field noheader, offset 0x30, size 0x4
  __declspec(property(get = __get_noheader, put = __set_noheader)) int32_t noheader;

  /// @brief Field data_type, offset 0x34, size 0x1
  __declspec(property(get = __get_data_type, put = __set_data_type)) uint8_t data_type;

  /// @brief Field method, offset 0x35, size 0x1
  __declspec(property(get = __get_method, put = __set_method)) uint8_t method;

  /// @brief Field last_flush, offset 0x38, size 0x4
  __declspec(property(get = __get_last_flush, put = __set_last_flush)) int32_t last_flush;

  /// @brief Field w_size, offset 0x3c, size 0x4
  __declspec(property(get = __get_w_size, put = __set_w_size)) int32_t w_size;

  /// @brief Field w_bits, offset 0x40, size 0x4
  __declspec(property(get = __get_w_bits, put = __set_w_bits)) int32_t w_bits;

  /// @brief Field w_mask, offset 0x44, size 0x4
  __declspec(property(get = __get_w_mask, put = __set_w_mask)) int32_t w_mask;

  /// @brief Field window, offset 0x48, size 0x8
  __declspec(property(get = __get_window, put = __set_window))::ArrayW<uint8_t, ::Array<uint8_t>*> window;

  /// @brief Field window_size, offset 0x50, size 0x4
  __declspec(property(get = __get_window_size, put = __set_window_size)) int32_t window_size;

  /// @brief Field prev, offset 0x58, size 0x8
  __declspec(property(get = __get_prev, put = __set_prev))::ArrayW<int16_t, ::Array<int16_t>*> prev;

  /// @brief Field head, offset 0x60, size 0x8
  __declspec(property(get = __get_head, put = __set_head))::ArrayW<int16_t, ::Array<int16_t>*> head;

  /// @brief Field ins_h, offset 0x68, size 0x4
  __declspec(property(get = __get_ins_h, put = __set_ins_h)) int32_t ins_h;

  /// @brief Field hash_size, offset 0x6c, size 0x4
  __declspec(property(get = __get_hash_size, put = __set_hash_size)) int32_t hash_size;

  /// @brief Field hash_bits, offset 0x70, size 0x4
  __declspec(property(get = __get_hash_bits, put = __set_hash_bits)) int32_t hash_bits;

  /// @brief Field hash_mask, offset 0x74, size 0x4
  __declspec(property(get = __get_hash_mask, put = __set_hash_mask)) int32_t hash_mask;

  /// @brief Field hash_shift, offset 0x78, size 0x4
  __declspec(property(get = __get_hash_shift, put = __set_hash_shift)) int32_t hash_shift;

  /// @brief Field block_start, offset 0x7c, size 0x4
  __declspec(property(get = __get_block_start, put = __set_block_start)) int32_t block_start;

  /// @brief Field match_length, offset 0x80, size 0x4
  __declspec(property(get = __get_match_length, put = __set_match_length)) int32_t match_length;

  /// @brief Field prev_match, offset 0x84, size 0x4
  __declspec(property(get = __get_prev_match, put = __set_prev_match)) int32_t prev_match;

  /// @brief Field match_available, offset 0x88, size 0x4
  __declspec(property(get = __get_match_available, put = __set_match_available)) int32_t match_available;

  /// @brief Field strstart, offset 0x8c, size 0x4
  __declspec(property(get = __get_strstart, put = __set_strstart)) int32_t strstart;

  /// @brief Field match_start, offset 0x90, size 0x4
  __declspec(property(get = __get_match_start, put = __set_match_start)) int32_t match_start;

  /// @brief Field lookahead, offset 0x94, size 0x4
  __declspec(property(get = __get_lookahead, put = __set_lookahead)) int32_t lookahead;

  /// @brief Field prev_length, offset 0x98, size 0x4
  __declspec(property(get = __get_prev_length, put = __set_prev_length)) int32_t prev_length;

  /// @brief Field max_chain_length, offset 0x9c, size 0x4
  __declspec(property(get = __get_max_chain_length, put = __set_max_chain_length)) int32_t max_chain_length;

  /// @brief Field max_lazy_match, offset 0xa0, size 0x4
  __declspec(property(get = __get_max_lazy_match, put = __set_max_lazy_match)) int32_t max_lazy_match;

  /// @brief Field level, offset 0xa4, size 0x4
  __declspec(property(get = __get_level, put = __set_level)) int32_t level;

  /// @brief Field strategy, offset 0xa8, size 0x4
  __declspec(property(get = __get_strategy, put = __set_strategy)) int32_t strategy;

  /// @brief Field good_match, offset 0xac, size 0x4
  __declspec(property(get = __get_good_match, put = __set_good_match)) int32_t good_match;

  /// @brief Field nice_match, offset 0xb0, size 0x4
  __declspec(property(get = __get_nice_match, put = __set_nice_match)) int32_t nice_match;

  /// @brief Field dyn_ltree, offset 0xb8, size 0x8
  __declspec(property(get = __get_dyn_ltree, put = __set_dyn_ltree))::ArrayW<int16_t, ::Array<int16_t>*> dyn_ltree;

  /// @brief Field dyn_dtree, offset 0xc0, size 0x8
  __declspec(property(get = __get_dyn_dtree, put = __set_dyn_dtree))::ArrayW<int16_t, ::Array<int16_t>*> dyn_dtree;

  /// @brief Field bl_tree, offset 0xc8, size 0x8
  __declspec(property(get = __get_bl_tree, put = __set_bl_tree))::ArrayW<int16_t, ::Array<int16_t>*> bl_tree;

  /// @brief Field l_desc, offset 0xd0, size 0x8
  __declspec(property(get = __get_l_desc, put = __set_l_desc))::Org::BouncyCastle::Utilities::Zlib::Tree* l_desc;

  /// @brief Field d_desc, offset 0xd8, size 0x8
  __declspec(property(get = __get_d_desc, put = __set_d_desc))::Org::BouncyCastle::Utilities::Zlib::Tree* d_desc;

  /// @brief Field bl_desc, offset 0xe0, size 0x8
  __declspec(property(get = __get_bl_desc, put = __set_bl_desc))::Org::BouncyCastle::Utilities::Zlib::Tree* bl_desc;

  /// @brief Field bl_count, offset 0xe8, size 0x8
  __declspec(property(get = __get_bl_count, put = __set_bl_count))::ArrayW<int16_t, ::Array<int16_t>*> bl_count;

  /// @brief Field heap, offset 0xf0, size 0x8
  __declspec(property(get = __get_heap, put = __set_heap))::ArrayW<int32_t, ::Array<int32_t>*> heap;

  /// @brief Field heap_len, offset 0xf8, size 0x4
  __declspec(property(get = __get_heap_len, put = __set_heap_len)) int32_t heap_len;

  /// @brief Field heap_max, offset 0xfc, size 0x4
  __declspec(property(get = __get_heap_max, put = __set_heap_max)) int32_t heap_max;

  /// @brief Field depth, offset 0x100, size 0x8
  __declspec(property(get = __get_depth, put = __set_depth))::ArrayW<uint8_t, ::Array<uint8_t>*> depth;

  /// @brief Field l_buf, offset 0x108, size 0x4
  __declspec(property(get = __get_l_buf, put = __set_l_buf)) int32_t l_buf;

  /// @brief Field lit_bufsize, offset 0x10c, size 0x4
  __declspec(property(get = __get_lit_bufsize, put = __set_lit_bufsize)) int32_t lit_bufsize;

  /// @brief Field last_lit, offset 0x110, size 0x4
  __declspec(property(get = __get_last_lit, put = __set_last_lit)) int32_t last_lit;

  /// @brief Field d_buf, offset 0x114, size 0x4
  __declspec(property(get = __get_d_buf, put = __set_d_buf)) int32_t d_buf;

  /// @brief Field opt_len, offset 0x118, size 0x4
  __declspec(property(get = __get_opt_len, put = __set_opt_len)) int32_t opt_len;

  /// @brief Field static_len, offset 0x11c, size 0x4
  __declspec(property(get = __get_static_len, put = __set_static_len)) int32_t static_len;

  /// @brief Field matches, offset 0x120, size 0x4
  __declspec(property(get = __get_matches, put = __set_matches)) int32_t matches;

  /// @brief Field last_eob_len, offset 0x124, size 0x4
  __declspec(property(get = __get_last_eob_len, put = __set_last_eob_len)) int32_t last_eob_len;

  /// @brief Field bi_buf, offset 0x128, size 0x4
  __declspec(property(get = __get_bi_buf, put = __set_bi_buf)) uint32_t bi_buf;

  /// @brief Field bi_valid, offset 0x12c, size 0x4
  __declspec(property(get = __get_bi_valid, put = __set_bi_valid)) int32_t bi_valid;

  /// @brief Field config_table, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_config_table,
               put = setStaticF_config_table))::ArrayW<::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config*, ::Array<::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config*>*> config_table;

  /// @brief Field z_errmsg, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_z_errmsg, put = setStaticF_z_errmsg))::ArrayW<::StringW, ::Array<::StringW>*> z_errmsg;

  constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream*& __get_strm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Zlib::ZStream*> const& __get_strm() const;

  constexpr void __set_strm(::Org::BouncyCastle::Utilities::Zlib::ZStream* value);

  constexpr int32_t& __get_status();

  constexpr int32_t const& __get_status() const;

  constexpr void __set_status(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_pending_buf();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_pending_buf() const;

  constexpr void __set_pending_buf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_pending_out();

  constexpr int32_t const& __get_pending_out() const;

  constexpr void __set_pending_out(int32_t value);

  constexpr int32_t& __get_pending();

  constexpr int32_t const& __get_pending() const;

  constexpr void __set_pending(int32_t value);

  constexpr int32_t& __get_noheader();

  constexpr int32_t const& __get_noheader() const;

  constexpr void __set_noheader(int32_t value);

  constexpr uint8_t& __get_data_type();

  constexpr uint8_t const& __get_data_type() const;

  constexpr void __set_data_type(uint8_t value);

  constexpr uint8_t& __get_method();

  constexpr uint8_t const& __get_method() const;

  constexpr void __set_method(uint8_t value);

  constexpr int32_t& __get_last_flush();

  constexpr int32_t const& __get_last_flush() const;

  constexpr void __set_last_flush(int32_t value);

  constexpr int32_t& __get_w_size();

  constexpr int32_t const& __get_w_size() const;

  constexpr void __set_w_size(int32_t value);

  constexpr int32_t& __get_w_bits();

  constexpr int32_t const& __get_w_bits() const;

  constexpr void __set_w_bits(int32_t value);

  constexpr int32_t& __get_w_mask();

  constexpr int32_t const& __get_w_mask() const;

  constexpr void __set_w_mask(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_window();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_window() const;

  constexpr void __set_window(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_window_size();

  constexpr int32_t const& __get_window_size() const;

  constexpr void __set_window_size(int32_t value);

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& __get_prev();

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& __get_prev() const;

  constexpr void __set_prev(::ArrayW<int16_t, ::Array<int16_t>*> value);

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& __get_head();

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& __get_head() const;

  constexpr void __set_head(::ArrayW<int16_t, ::Array<int16_t>*> value);

  constexpr int32_t& __get_ins_h();

  constexpr int32_t const& __get_ins_h() const;

  constexpr void __set_ins_h(int32_t value);

  constexpr int32_t& __get_hash_size();

  constexpr int32_t const& __get_hash_size() const;

  constexpr void __set_hash_size(int32_t value);

  constexpr int32_t& __get_hash_bits();

  constexpr int32_t const& __get_hash_bits() const;

  constexpr void __set_hash_bits(int32_t value);

  constexpr int32_t& __get_hash_mask();

  constexpr int32_t const& __get_hash_mask() const;

  constexpr void __set_hash_mask(int32_t value);

  constexpr int32_t& __get_hash_shift();

  constexpr int32_t const& __get_hash_shift() const;

  constexpr void __set_hash_shift(int32_t value);

  constexpr int32_t& __get_block_start();

  constexpr int32_t const& __get_block_start() const;

  constexpr void __set_block_start(int32_t value);

  constexpr int32_t& __get_match_length();

  constexpr int32_t const& __get_match_length() const;

  constexpr void __set_match_length(int32_t value);

  constexpr int32_t& __get_prev_match();

  constexpr int32_t const& __get_prev_match() const;

  constexpr void __set_prev_match(int32_t value);

  constexpr int32_t& __get_match_available();

  constexpr int32_t const& __get_match_available() const;

  constexpr void __set_match_available(int32_t value);

  constexpr int32_t& __get_strstart();

  constexpr int32_t const& __get_strstart() const;

  constexpr void __set_strstart(int32_t value);

  constexpr int32_t& __get_match_start();

  constexpr int32_t const& __get_match_start() const;

  constexpr void __set_match_start(int32_t value);

  constexpr int32_t& __get_lookahead();

  constexpr int32_t const& __get_lookahead() const;

  constexpr void __set_lookahead(int32_t value);

  constexpr int32_t& __get_prev_length();

  constexpr int32_t const& __get_prev_length() const;

  constexpr void __set_prev_length(int32_t value);

  constexpr int32_t& __get_max_chain_length();

  constexpr int32_t const& __get_max_chain_length() const;

  constexpr void __set_max_chain_length(int32_t value);

  constexpr int32_t& __get_max_lazy_match();

  constexpr int32_t const& __get_max_lazy_match() const;

  constexpr void __set_max_lazy_match(int32_t value);

  constexpr int32_t& __get_level();

  constexpr int32_t const& __get_level() const;

  constexpr void __set_level(int32_t value);

  constexpr int32_t& __get_strategy();

  constexpr int32_t const& __get_strategy() const;

  constexpr void __set_strategy(int32_t value);

  constexpr int32_t& __get_good_match();

  constexpr int32_t const& __get_good_match() const;

  constexpr void __set_good_match(int32_t value);

  constexpr int32_t& __get_nice_match();

  constexpr int32_t const& __get_nice_match() const;

  constexpr void __set_nice_match(int32_t value);

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& __get_dyn_ltree();

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& __get_dyn_ltree() const;

  constexpr void __set_dyn_ltree(::ArrayW<int16_t, ::Array<int16_t>*> value);

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& __get_dyn_dtree();

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& __get_dyn_dtree() const;

  constexpr void __set_dyn_dtree(::ArrayW<int16_t, ::Array<int16_t>*> value);

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& __get_bl_tree();

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& __get_bl_tree() const;

  constexpr void __set_bl_tree(::ArrayW<int16_t, ::Array<int16_t>*> value);

  constexpr ::Org::BouncyCastle::Utilities::Zlib::Tree*& __get_l_desc();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Zlib::Tree*> const& __get_l_desc() const;

  constexpr void __set_l_desc(::Org::BouncyCastle::Utilities::Zlib::Tree* value);

  constexpr ::Org::BouncyCastle::Utilities::Zlib::Tree*& __get_d_desc();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Zlib::Tree*> const& __get_d_desc() const;

  constexpr void __set_d_desc(::Org::BouncyCastle::Utilities::Zlib::Tree* value);

  constexpr ::Org::BouncyCastle::Utilities::Zlib::Tree*& __get_bl_desc();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Zlib::Tree*> const& __get_bl_desc() const;

  constexpr void __set_bl_desc(::Org::BouncyCastle::Utilities::Zlib::Tree* value);

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& __get_bl_count();

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& __get_bl_count() const;

  constexpr void __set_bl_count(::ArrayW<int16_t, ::Array<int16_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_heap();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_heap() const;

  constexpr void __set_heap(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr int32_t& __get_heap_len();

  constexpr int32_t const& __get_heap_len() const;

  constexpr void __set_heap_len(int32_t value);

  constexpr int32_t& __get_heap_max();

  constexpr int32_t const& __get_heap_max() const;

  constexpr void __set_heap_max(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_depth();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_depth() const;

  constexpr void __set_depth(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_l_buf();

  constexpr int32_t const& __get_l_buf() const;

  constexpr void __set_l_buf(int32_t value);

  constexpr int32_t& __get_lit_bufsize();

  constexpr int32_t const& __get_lit_bufsize() const;

  constexpr void __set_lit_bufsize(int32_t value);

  constexpr int32_t& __get_last_lit();

  constexpr int32_t const& __get_last_lit() const;

  constexpr void __set_last_lit(int32_t value);

  constexpr int32_t& __get_d_buf();

  constexpr int32_t const& __get_d_buf() const;

  constexpr void __set_d_buf(int32_t value);

  constexpr int32_t& __get_opt_len();

  constexpr int32_t const& __get_opt_len() const;

  constexpr void __set_opt_len(int32_t value);

  constexpr int32_t& __get_static_len();

  constexpr int32_t const& __get_static_len() const;

  constexpr void __set_static_len(int32_t value);

  constexpr int32_t& __get_matches();

  constexpr int32_t const& __get_matches() const;

  constexpr void __set_matches(int32_t value);

  constexpr int32_t& __get_last_eob_len();

  constexpr int32_t const& __get_last_eob_len() const;

  constexpr void __set_last_eob_len(int32_t value);

  constexpr uint32_t& __get_bi_buf();

  constexpr uint32_t const& __get_bi_buf() const;

  constexpr void __set_bi_buf(uint32_t value);

  constexpr int32_t& __get_bi_valid();

  constexpr int32_t const& __get_bi_valid() const;

  constexpr void __set_bi_valid(int32_t value);

  static inline void setStaticF_config_table(::ArrayW<::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config*, ::Array<::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config*>*> value);

  static inline ::ArrayW<::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config*, ::Array<::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config*>*> getStaticF_config_table();

  static inline void setStaticF_z_errmsg(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_z_errmsg();

  static inline ::Org::BouncyCastle::Utilities::Zlib::Deflate* New_ctor();

  /// @brief Method .ctor addr 0x1161538 size 0x148 virtual false final false
  inline void _ctor();

  /// @brief Method lm_init addr 0x1161680 size 0x114 virtual false final false
  inline void lm_init();

  /// @brief Method tr_init addr 0x1161794 size 0xbc virtual false final false
  inline void tr_init();

  /// @brief Method init_block addr 0x1161850 size 0xb4 virtual false final false
  inline void init_block();

  /// @brief Method pqdownheap addr 0x1161904 size 0x1b4 virtual false final false
  inline void pqdownheap(::ArrayW<int16_t, ::Array<int16_t>*> tree, int32_t k);

  /// @brief Method smaller addr 0x1161ab8 size 0x8c virtual false final false
  static inline bool smaller(::ArrayW<int16_t, ::Array<int16_t>*> tree, int32_t n, int32_t m, ::ArrayW<uint8_t, ::Array<uint8_t>*> depth);

  /// @brief Method scan_tree addr 0x1161b44 size 0x194 virtual false final false
  inline void scan_tree(::ArrayW<int16_t, ::Array<int16_t>*> tree, int32_t max_code);

  /// @brief Method build_bl_tree addr 0x1161cd8 size 0x11c virtual false final false
  inline int32_t build_bl_tree();

  /// @brief Method send_all_trees addr 0x1161df4 size 0x130 virtual false final false
  inline void send_all_trees(int32_t lcodes, int32_t dcodes, int32_t blcodes);

  /// @brief Method send_tree addr 0x1161fdc size 0x1a0 virtual false final false
  inline void send_tree(::ArrayW<int16_t, ::Array<int16_t>*> tree, int32_t max_code);

  /// @brief Method put_byte addr 0x11621c0 size 0x48 virtual false final false
  inline void put_byte(::ArrayW<uint8_t, ::Array<uint8_t>*> p, int32_t start, int32_t len);

  /// @brief Method put_byte addr 0x1162208 size 0x3c virtual false final false
  inline void put_byte(uint8_t c);

  /// @brief Method put_short addr 0x1162244 size 0x68 virtual false final false
  inline void put_short(int32_t w);

  /// @brief Method putShortMSB addr 0x11622ac size 0x68 virtual false final false
  inline void putShortMSB(int32_t b);

  /// @brief Method send_code addr 0x116217c size 0x44 virtual false final false
  inline void send_code(int32_t c, ::ArrayW<int16_t, ::Array<int16_t>*> tree);

  /// @brief Method send_bits addr 0x1161f24 size 0xb8 virtual false final false
  inline void send_bits(int32_t val, int32_t length);

  /// @brief Method _tr_align addr 0x1162314 size 0xe0 virtual false final false
  inline void _tr_align();

  /// @brief Method _tr_tally addr 0x11624c8 size 0x2a4 virtual false final false
  inline bool _tr_tally(int32_t dist, int32_t lc);

  /// @brief Method compress_block addr 0x116276c size 0x274 virtual false final false
  inline void compress_block(::ArrayW<int16_t, ::Array<int16_t>*> ltree, ::ArrayW<int16_t, ::Array<int16_t>*> dtree);

  /// @brief Method set_data_type addr 0x11629e0 size 0xb0 virtual false final false
  inline void set_data_type();

  /// @brief Method bi_flush addr 0x11623f4 size 0xd4 virtual false final false
  inline void bi_flush();

  /// @brief Method bi_windup addr 0x1162a90 size 0xb0 virtual false final false
  inline void bi_windup();

  /// @brief Method copy_block addr 0x1162b40 size 0x80 virtual false final false
  inline void copy_block(int32_t buf, int32_t len, bool header);

  /// @brief Method flush_block_only addr 0x1162bc0 size 0x4c virtual false final false
  inline void flush_block_only(bool eof);

  /// @brief Method deflate_stored addr 0x1162dc4 size 0x164 virtual false final false
  inline int32_t deflate_stored(int32_t flush);

  /// @brief Method _tr_stored_block addr 0x11630f0 size 0x44 virtual false final false
  inline void _tr_stored_block(int32_t buf, int32_t stored_len, bool eof);

  /// @brief Method _tr_flush_block addr 0x1162c0c size 0x1b8 virtual false final false
  inline void _tr_flush_block(int32_t buf, int32_t stored_len, bool eof);

  /// @brief Method fill_window addr 0x1162f28 size 0x1c8 virtual false final false
  inline void fill_window();

  /// @brief Method deflate_fast addr 0x1163134 size 0x31c virtual false final false
  inline int32_t deflate_fast(int32_t flush);

  /// @brief Method deflate_slow addr 0x11637fc size 0x3b4 virtual false final false
  inline int32_t deflate_slow(int32_t flush);

  /// @brief Method longest_match addr 0x1163450 size 0x3ac virtual false final false
  inline int32_t longest_match(int32_t cur_match);

  /// @brief Method deflateInit addr 0x1163bb0 size 0x14 virtual false final false
  inline int32_t deflateInit(::Org::BouncyCastle::Utilities::Zlib::ZStream* strm, int32_t level, int32_t bits);

  /// @brief Method deflateInit addr 0x1163d64 size 0x14 virtual false final false
  inline int32_t deflateInit(::Org::BouncyCastle::Utilities::Zlib::ZStream* strm, int32_t level);

  /// @brief Method deflateInit2 addr 0x1163bc4 size 0x1a0 virtual false final false
  inline int32_t deflateInit2(::Org::BouncyCastle::Utilities::Zlib::ZStream* strm, int32_t level, int32_t method, int32_t windowBits, int32_t memLevel, int32_t strategy);

  /// @brief Method deflateReset addr 0x1163d78 size 0x74 virtual false final false
  inline int32_t deflateReset(::Org::BouncyCastle::Utilities::Zlib::ZStream* strm);

  /// @brief Method deflateEnd addr 0x1163dec size 0x44 virtual false final false
  inline int32_t deflateEnd();

  /// @brief Method deflateParams addr 0x1163e30 size 0x184 virtual false final false
  inline int32_t deflateParams(::Org::BouncyCastle::Utilities::Zlib::ZStream* strm, int32_t _level, int32_t _strategy);

  /// @brief Method deflateSetDictionary addr 0x1163fb4 size 0x178 virtual false final false
  inline int32_t deflateSetDictionary(::Org::BouncyCastle::Utilities::Zlib::ZStream* strm, ::ArrayW<uint8_t, ::Array<uint8_t>*> dictionary, int32_t dictLength);

  /// @brief Method deflate addr 0x116412c size 0x3d8 virtual false final false
  inline int32_t deflate(::Org::BouncyCastle::Utilities::Zlib::ZStream* strm, int32_t flush);

  // Ctor Parameters [CppParam { name: "", ty: "Deflate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Deflate(Deflate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Deflate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Deflate(Deflate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Deflate();

public:
  /// @brief Field strm, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Zlib::ZStream* ___strm;

  /// @brief Field status, offset: 0x18, size: 0x4, def value: None
  int32_t ___status;

  /// @brief Field pending_buf, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___pending_buf;

  /// @brief Field pending_out, offset: 0x28, size: 0x4, def value: None
  int32_t ___pending_out;

  /// @brief Field pending, offset: 0x2c, size: 0x4, def value: None
  int32_t ___pending;

  /// @brief Field noheader, offset: 0x30, size: 0x4, def value: None
  int32_t ___noheader;

  /// @brief Field data_type, offset: 0x34, size: 0x1, def value: None
  uint8_t ___data_type;

  /// @brief Field method, offset: 0x35, size: 0x1, def value: None
  uint8_t ___method;

  /// @brief Field last_flush, offset: 0x38, size: 0x4, def value: None
  int32_t ___last_flush;

  /// @brief Field w_size, offset: 0x3c, size: 0x4, def value: None
  int32_t ___w_size;

  /// @brief Field w_bits, offset: 0x40, size: 0x4, def value: None
  int32_t ___w_bits;

  /// @brief Field w_mask, offset: 0x44, size: 0x4, def value: None
  int32_t ___w_mask;

  /// @brief Field window, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___window;

  /// @brief Field window_size, offset: 0x50, size: 0x4, def value: None
  int32_t ___window_size;

  /// @brief Field prev, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<int16_t, ::Array<int16_t>*> ___prev;

  /// @brief Field head, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<int16_t, ::Array<int16_t>*> ___head;

  /// @brief Field ins_h, offset: 0x68, size: 0x4, def value: None
  int32_t ___ins_h;

  /// @brief Field hash_size, offset: 0x6c, size: 0x4, def value: None
  int32_t ___hash_size;

  /// @brief Field hash_bits, offset: 0x70, size: 0x4, def value: None
  int32_t ___hash_bits;

  /// @brief Field hash_mask, offset: 0x74, size: 0x4, def value: None
  int32_t ___hash_mask;

  /// @brief Field hash_shift, offset: 0x78, size: 0x4, def value: None
  int32_t ___hash_shift;

  /// @brief Field block_start, offset: 0x7c, size: 0x4, def value: None
  int32_t ___block_start;

  /// @brief Field match_length, offset: 0x80, size: 0x4, def value: None
  int32_t ___match_length;

  /// @brief Field prev_match, offset: 0x84, size: 0x4, def value: None
  int32_t ___prev_match;

  /// @brief Field match_available, offset: 0x88, size: 0x4, def value: None
  int32_t ___match_available;

  /// @brief Field strstart, offset: 0x8c, size: 0x4, def value: None
  int32_t ___strstart;

  /// @brief Field match_start, offset: 0x90, size: 0x4, def value: None
  int32_t ___match_start;

  /// @brief Field lookahead, offset: 0x94, size: 0x4, def value: None
  int32_t ___lookahead;

  /// @brief Field prev_length, offset: 0x98, size: 0x4, def value: None
  int32_t ___prev_length;

  /// @brief Field max_chain_length, offset: 0x9c, size: 0x4, def value: None
  int32_t ___max_chain_length;

  /// @brief Field max_lazy_match, offset: 0xa0, size: 0x4, def value: None
  int32_t ___max_lazy_match;

  /// @brief Field level, offset: 0xa4, size: 0x4, def value: None
  int32_t ___level;

  /// @brief Field strategy, offset: 0xa8, size: 0x4, def value: None
  int32_t ___strategy;

  /// @brief Field good_match, offset: 0xac, size: 0x4, def value: None
  int32_t ___good_match;

  /// @brief Field nice_match, offset: 0xb0, size: 0x4, def value: None
  int32_t ___nice_match;

  /// @brief Field dyn_ltree, offset: 0xb8, size: 0x8, def value: None
  ::ArrayW<int16_t, ::Array<int16_t>*> ___dyn_ltree;

  /// @brief Field dyn_dtree, offset: 0xc0, size: 0x8, def value: None
  ::ArrayW<int16_t, ::Array<int16_t>*> ___dyn_dtree;

  /// @brief Field bl_tree, offset: 0xc8, size: 0x8, def value: None
  ::ArrayW<int16_t, ::Array<int16_t>*> ___bl_tree;

  /// @brief Field l_desc, offset: 0xd0, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Zlib::Tree* ___l_desc;

  /// @brief Field d_desc, offset: 0xd8, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Zlib::Tree* ___d_desc;

  /// @brief Field bl_desc, offset: 0xe0, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Zlib::Tree* ___bl_desc;

  /// @brief Field bl_count, offset: 0xe8, size: 0x8, def value: None
  ::ArrayW<int16_t, ::Array<int16_t>*> ___bl_count;

  /// @brief Field heap, offset: 0xf0, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___heap;

  /// @brief Field heap_len, offset: 0xf8, size: 0x4, def value: None
  int32_t ___heap_len;

  /// @brief Field heap_max, offset: 0xfc, size: 0x4, def value: None
  int32_t ___heap_max;

  /// @brief Field depth, offset: 0x100, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___depth;

  /// @brief Field l_buf, offset: 0x108, size: 0x4, def value: None
  int32_t ___l_buf;

  /// @brief Field lit_bufsize, offset: 0x10c, size: 0x4, def value: None
  int32_t ___lit_bufsize;

  /// @brief Field last_lit, offset: 0x110, size: 0x4, def value: None
  int32_t ___last_lit;

  /// @brief Field d_buf, offset: 0x114, size: 0x4, def value: None
  int32_t ___d_buf;

  /// @brief Field opt_len, offset: 0x118, size: 0x4, def value: None
  int32_t ___opt_len;

  /// @brief Field static_len, offset: 0x11c, size: 0x4, def value: None
  int32_t ___static_len;

  /// @brief Field matches, offset: 0x120, size: 0x4, def value: None
  int32_t ___matches;

  /// @brief Field last_eob_len, offset: 0x124, size: 0x4, def value: None
  int32_t ___last_eob_len;

  /// @brief Field bi_buf, offset: 0x128, size: 0x4, def value: None
  uint32_t ___bi_buf;

  /// @brief Field bi_valid, offset: 0x12c, size: 0x4, def value: None
  int32_t ___bi_valid;

  /// @brief Field MAX_MEM_LEVEL offset 0xffffffff size 0x4
  static constexpr int32_t MAX_MEM_LEVEL{ static_cast<int32_t>(0x9) };

  /// @brief Field Z_DEFAULT_COMPRESSION offset 0xffffffff size 0x4
  static constexpr int32_t Z_DEFAULT_COMPRESSION{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field MAX_WBITS offset 0xffffffff size 0x4
  static constexpr int32_t MAX_WBITS{ static_cast<int32_t>(0xf) };

  /// @brief Field DEF_MEM_LEVEL offset 0xffffffff size 0x4
  static constexpr int32_t DEF_MEM_LEVEL{ static_cast<int32_t>(0x8) };

  /// @brief Field STORED offset 0xffffffff size 0x4
  static constexpr int32_t STORED{ static_cast<int32_t>(0x0) };

  /// @brief Field FAST offset 0xffffffff size 0x4
  static constexpr int32_t FAST{ static_cast<int32_t>(0x1) };

  /// @brief Field SLOW offset 0xffffffff size 0x4
  static constexpr int32_t SLOW{ static_cast<int32_t>(0x2) };

  /// @brief Field NeedMore offset 0xffffffff size 0x4
  static constexpr int32_t NeedMore{ static_cast<int32_t>(0x0) };

  /// @brief Field BlockDone offset 0xffffffff size 0x4
  static constexpr int32_t BlockDone{ static_cast<int32_t>(0x1) };

  /// @brief Field FinishStarted offset 0xffffffff size 0x4
  static constexpr int32_t FinishStarted{ static_cast<int32_t>(0x2) };

  /// @brief Field FinishDone offset 0xffffffff size 0x4
  static constexpr int32_t FinishDone{ static_cast<int32_t>(0x3) };

  /// @brief Field PRESET_DICT offset 0xffffffff size 0x4
  static constexpr int32_t PRESET_DICT{ static_cast<int32_t>(0x20) };

  /// @brief Field Z_FILTERED offset 0xffffffff size 0x4
  static constexpr int32_t Z_FILTERED{ static_cast<int32_t>(0x1) };

  /// @brief Field Z_HUFFMAN_ONLY offset 0xffffffff size 0x4
  static constexpr int32_t Z_HUFFMAN_ONLY{ static_cast<int32_t>(0x2) };

  /// @brief Field Z_DEFAULT_STRATEGY offset 0xffffffff size 0x4
  static constexpr int32_t Z_DEFAULT_STRATEGY{ static_cast<int32_t>(0x0) };

  /// @brief Field Z_NO_FLUSH offset 0xffffffff size 0x4
  static constexpr int32_t Z_NO_FLUSH{ static_cast<int32_t>(0x0) };

  /// @brief Field Z_PARTIAL_FLUSH offset 0xffffffff size 0x4
  static constexpr int32_t Z_PARTIAL_FLUSH{ static_cast<int32_t>(0x1) };

  /// @brief Field Z_SYNC_FLUSH offset 0xffffffff size 0x4
  static constexpr int32_t Z_SYNC_FLUSH{ static_cast<int32_t>(0x2) };

  /// @brief Field Z_FULL_FLUSH offset 0xffffffff size 0x4
  static constexpr int32_t Z_FULL_FLUSH{ static_cast<int32_t>(0x3) };

  /// @brief Field Z_FINISH offset 0xffffffff size 0x4
  static constexpr int32_t Z_FINISH{ static_cast<int32_t>(0x4) };

  /// @brief Field Z_OK offset 0xffffffff size 0x4
  static constexpr int32_t Z_OK{ static_cast<int32_t>(0x0) };

  /// @brief Field Z_STREAM_END offset 0xffffffff size 0x4
  static constexpr int32_t Z_STREAM_END{ static_cast<int32_t>(0x1) };

  /// @brief Field Z_NEED_DICT offset 0xffffffff size 0x4
  static constexpr int32_t Z_NEED_DICT{ static_cast<int32_t>(0x2) };

  /// @brief Field Z_ERRNO offset 0xffffffff size 0x4
  static constexpr int32_t Z_ERRNO{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field Z_STREAM_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_STREAM_ERROR{ static_cast<int32_t>(0xfffffffe) };

  /// @brief Field Z_DATA_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_DATA_ERROR{ static_cast<int32_t>(0xfffffffd) };

  /// @brief Field Z_MEM_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_MEM_ERROR{ static_cast<int32_t>(0xfffffffc) };

  /// @brief Field Z_BUF_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_BUF_ERROR{ static_cast<int32_t>(0xfffffffb) };

  /// @brief Field Z_VERSION_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_VERSION_ERROR{ static_cast<int32_t>(0xfffffffa) };

  /// @brief Field INIT_STATE offset 0xffffffff size 0x4
  static constexpr int32_t INIT_STATE{ static_cast<int32_t>(0x2a) };

  /// @brief Field BUSY_STATE offset 0xffffffff size 0x4
  static constexpr int32_t BUSY_STATE{ static_cast<int32_t>(0x71) };

  /// @brief Field FINISH_STATE offset 0xffffffff size 0x4
  static constexpr int32_t FINISH_STATE{ static_cast<int32_t>(0x29a) };

  /// @brief Field Z_DEFLATED offset 0xffffffff size 0x4
  static constexpr int32_t Z_DEFLATED{ static_cast<int32_t>(0x8) };

  /// @brief Field STORED_BLOCK offset 0xffffffff size 0x4
  static constexpr int32_t STORED_BLOCK{ static_cast<int32_t>(0x0) };

  /// @brief Field STATIC_TREES offset 0xffffffff size 0x4
  static constexpr int32_t STATIC_TREES{ static_cast<int32_t>(0x1) };

  /// @brief Field DYN_TREES offset 0xffffffff size 0x4
  static constexpr int32_t DYN_TREES{ static_cast<int32_t>(0x2) };

  /// @brief Field Z_BINARY offset 0xffffffff size 0x4
  static constexpr int32_t Z_BINARY{ static_cast<int32_t>(0x0) };

  /// @brief Field Z_ASCII offset 0xffffffff size 0x4
  static constexpr int32_t Z_ASCII{ static_cast<int32_t>(0x1) };

  /// @brief Field Z_UNKNOWN offset 0xffffffff size 0x4
  static constexpr int32_t Z_UNKNOWN{ static_cast<int32_t>(0x2) };

  /// @brief Field Buf_size offset 0xffffffff size 0x4
  static constexpr int32_t Buf_size{ static_cast<int32_t>(0x10) };

  /// @brief Field REP_3_6 offset 0xffffffff size 0x4
  static constexpr int32_t REP_3_6{ static_cast<int32_t>(0x10) };

  /// @brief Field REPZ_3_10 offset 0xffffffff size 0x4
  static constexpr int32_t REPZ_3_10{ static_cast<int32_t>(0x11) };

  /// @brief Field REPZ_11_138 offset 0xffffffff size 0x4
  static constexpr int32_t REPZ_11_138{ static_cast<int32_t>(0x12) };

  /// @brief Field MIN_MATCH offset 0xffffffff size 0x4
  static constexpr int32_t MIN_MATCH{ static_cast<int32_t>(0x3) };

  /// @brief Field MAX_MATCH offset 0xffffffff size 0x4
  static constexpr int32_t MAX_MATCH{ static_cast<int32_t>(0x102) };

  /// @brief Field MIN_LOOKAHEAD offset 0xffffffff size 0x4
  static constexpr int32_t MIN_LOOKAHEAD{ static_cast<int32_t>(0x106) };

  /// @brief Field MAX_BITS offset 0xffffffff size 0x4
  static constexpr int32_t MAX_BITS{ static_cast<int32_t>(0xf) };

  /// @brief Field D_CODES offset 0xffffffff size 0x4
  static constexpr int32_t D_CODES{ static_cast<int32_t>(0x1e) };

  /// @brief Field BL_CODES offset 0xffffffff size 0x4
  static constexpr int32_t BL_CODES{ static_cast<int32_t>(0x13) };

  /// @brief Field LENGTH_CODES offset 0xffffffff size 0x4
  static constexpr int32_t LENGTH_CODES{ static_cast<int32_t>(0x1d) };

  /// @brief Field LITERALS offset 0xffffffff size 0x4
  static constexpr int32_t LITERALS{ static_cast<int32_t>(0x100) };

  /// @brief Field L_CODES offset 0xffffffff size 0x4
  static constexpr int32_t L_CODES{ static_cast<int32_t>(0x11e) };

  /// @brief Field HEAP_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t HEAP_SIZE{ static_cast<int32_t>(0x23d) };

  /// @brief Field END_BLOCK offset 0xffffffff size 0x4
  static constexpr int32_t END_BLOCK{ static_cast<int32_t>(0x100) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Zlib::Deflate, 0x130>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Zlib::Deflate);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Zlib::Deflate*, "Org.BouncyCastle.Utilities.Zlib", "Deflate");
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config*, "Org.BouncyCastle.Utilities.Zlib", "Deflate/Config");
