#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InfTree)
namespace Org::BouncyCastle::Utilities::Zlib {
class ZStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class InfTree;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Zlib::InfTree);
// Type: Org.BouncyCastle.Utilities.Zlib::InfTree
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1823))
// CS Name: ::Org.BouncyCastle.Utilities.Zlib::InfTree*
class CORDL_TYPE InfTree : public ::System::Object {
public:
  // Declarations
  /// @brief Field hn, offset 0x10, size 0x8
  __declspec(property(get = __get_hn, put = __set_hn))::ArrayW<int32_t, ::Array<int32_t>*> hn;

  /// @brief Field v, offset 0x18, size 0x8
  __declspec(property(get = __get_v, put = __set_v))::ArrayW<int32_t, ::Array<int32_t>*> v;

  /// @brief Field c, offset 0x20, size 0x8
  __declspec(property(get = __get_c, put = __set_c))::ArrayW<int32_t, ::Array<int32_t>*> c;

  /// @brief Field r, offset 0x28, size 0x8
  __declspec(property(get = __get_r, put = __set_r))::ArrayW<int32_t, ::Array<int32_t>*> r;

  /// @brief Field u, offset 0x30, size 0x8
  __declspec(property(get = __get_u, put = __set_u))::ArrayW<int32_t, ::Array<int32_t>*> u;

  /// @brief Field x, offset 0x38, size 0x8
  __declspec(property(get = __get_x, put = __set_x))::ArrayW<int32_t, ::Array<int32_t>*> x;

  /// @brief Field fixed_tl, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_fixed_tl, put = setStaticF_fixed_tl))::ArrayW<int32_t, ::Array<int32_t>*> fixed_tl;

  /// @brief Field fixed_td, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_fixed_td, put = setStaticF_fixed_td))::ArrayW<int32_t, ::Array<int32_t>*> fixed_td;

  /// @brief Field cplens, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cplens, put = setStaticF_cplens))::ArrayW<int32_t, ::Array<int32_t>*> cplens;

  /// @brief Field cplext, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cplext, put = setStaticF_cplext))::ArrayW<int32_t, ::Array<int32_t>*> cplext;

  /// @brief Field cpdist, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cpdist, put = setStaticF_cpdist))::ArrayW<int32_t, ::Array<int32_t>*> cpdist;

  /// @brief Field cpdext, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cpdext, put = setStaticF_cpdext))::ArrayW<int32_t, ::Array<int32_t>*> cpdext;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_hn();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_hn() const;

  constexpr void __set_hn(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_v();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_v() const;

  constexpr void __set_v(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_c();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_c() const;

  constexpr void __set_c(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_r();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_r() const;

  constexpr void __set_r(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_u();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_u() const;

  constexpr void __set_u(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_x();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_x() const;

  constexpr void __set_x(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_fixed_tl(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_fixed_tl();

  static inline void setStaticF_fixed_td(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_fixed_td();

  static inline void setStaticF_cplens(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_cplens();

  static inline void setStaticF_cplext(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_cplext();

  static inline void setStaticF_cpdist(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_cpdist();

  static inline void setStaticF_cpdext(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_cpdext();

  /// @brief Method huft_build addr 0x1167dbc size 0x750 virtual false final false
  inline int32_t huft_build(::ArrayW<int32_t, ::Array<int32_t>*> b, int32_t bindex, int32_t n, int32_t s, ::ArrayW<int32_t, ::Array<int32_t>*> d, ::ArrayW<int32_t, ::Array<int32_t>*> e,
                            ::ArrayW<int32_t, ::Array<int32_t>*> t, ::ArrayW<int32_t, ::Array<int32_t>*> m, ::ArrayW<int32_t, ::Array<int32_t>*> hp, ::ArrayW<int32_t, ::Array<int32_t>*> hn,
                            ::ArrayW<int32_t, ::Array<int32_t>*> v);

  /// @brief Method inflate_trees_bits addr 0x1165ab0 size 0x114 virtual false final false
  inline int32_t inflate_trees_bits(::ArrayW<int32_t, ::Array<int32_t>*> c, ::ArrayW<int32_t, ::Array<int32_t>*> bb, ::ArrayW<int32_t, ::Array<int32_t>*> tb, ::ArrayW<int32_t, ::Array<int32_t>*> hp,
                                    ::Org::BouncyCastle::Utilities::Zlib::ZStream* z);

  /// @brief Method inflate_trees_dynamic addr 0x1165bc4 size 0x24c virtual false final false
  inline int32_t inflate_trees_dynamic(int32_t nl, int32_t nd, ::ArrayW<int32_t, ::Array<int32_t>*> c, ::ArrayW<int32_t, ::Array<int32_t>*> bl, ::ArrayW<int32_t, ::Array<int32_t>*> bd,
                                       ::ArrayW<int32_t, ::Array<int32_t>*> tl, ::ArrayW<int32_t, ::Array<int32_t>*> td, ::ArrayW<int32_t, ::Array<int32_t>*> hp,
                                       ::Org::BouncyCastle::Utilities::Zlib::ZStream* z);

  /// @brief Method inflate_trees_fixed addr 0x1165980 size 0x10c virtual false final false
  static inline int32_t inflate_trees_fixed(::ArrayW<int32_t, ::Array<int32_t>*> bl, ::ArrayW<int32_t, ::Array<int32_t>*> bd,
                                            ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> tl,
                                            ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> td, ::Org::BouncyCastle::Utilities::Zlib::ZStream* z);

  /// @brief Method initWorkArea addr 0x116850c size 0x194 virtual false final false
  inline void initWorkArea(int32_t vsize);

  static inline ::Org::BouncyCastle::Utilities::Zlib::InfTree* New_ctor();

  /// @brief Method .ctor addr 0x11646a8 size 0x14 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "InfTree", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InfTree(InfTree&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InfTree", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InfTree(InfTree const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InfTree();

public:
  /// @brief Field hn, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___hn;

  /// @brief Field v, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___v;

  /// @brief Field c, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___c;

  /// @brief Field r, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___r;

  /// @brief Field u, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___u;

  /// @brief Field x, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___x;

  /// @brief Field MANY offset 0xffffffff size 0x4
  static constexpr int32_t MANY{ static_cast<int32_t>(0x5a0) };

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

  /// @brief Field fixed_bl offset 0xffffffff size 0x4
  static constexpr int32_t fixed_bl{ static_cast<int32_t>(0x9) };

  /// @brief Field fixed_bd offset 0xffffffff size 0x4
  static constexpr int32_t fixed_bd{ static_cast<int32_t>(0x5) };

  /// @brief Field BMAX offset 0xffffffff size 0x4
  static constexpr int32_t BMAX{ static_cast<int32_t>(0xf) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Zlib::InfTree, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Zlib::InfTree);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Zlib::InfTree*, "Org.BouncyCastle.Utilities.Zlib", "InfTree");
