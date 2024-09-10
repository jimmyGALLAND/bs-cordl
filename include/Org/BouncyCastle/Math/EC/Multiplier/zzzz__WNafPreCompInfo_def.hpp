#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Multiplier/WNafPreCompInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WNafPreCompInfo)
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class WNafPreCompInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo);
// Type: Org.BouncyCastle.Math.EC.Multiplier::WNafPreCompInfo
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Multiplier::WNafPreCompInfo*
class CORDL_TYPE WNafPreCompInfo : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ConfWidth, put=set_ConfWidth)) int32_t  ConfWidth;

 __declspec(property(get=get_IsPromoted)) bool  IsPromoted;

 __declspec(property(get=get_PreComp, put=set_PreComp)) ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*,::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>  PreComp;

 __declspec(property(get=get_PreCompNeg, put=set_PreCompNeg)) ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*,::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>  PreCompNeg;

 __declspec(property(get=get_PromotionCountdown, put=set_PromotionCountdown)) int32_t  PromotionCountdown;

 __declspec(property(get=get_Twice, put=set_Twice)) ::Org::BouncyCastle::Math::EC::ECPoint*  Twice;

 __declspec(property(get=get_Width, put=set_Width)) int32_t  Width;

/// @brief Field m_confWidth, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_confWidth, put=__cordl_internal_set_m_confWidth)) int32_t  m_confWidth;

/// @brief Field m_preComp, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_preComp, put=__cordl_internal_set_m_preComp)) ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*,::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>  m_preComp;

/// @brief Field m_preCompNeg, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_preCompNeg, put=__cordl_internal_set_m_preCompNeg)) ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*,::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>  m_preCompNeg;

/// @brief Field m_promotionCountdown, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_promotionCountdown, put=__cordl_internal_set_m_promotionCountdown)) int32_t  m_promotionCountdown;

/// @brief Field m_twice, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_twice, put=__cordl_internal_set_m_twice)) ::Org::BouncyCastle::Math::EC::ECPoint*  m_twice;

/// @brief Field m_width, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_width, put=__cordl_internal_set_m_width)) int32_t  m_width;

/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo"
constexpr operator  ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*() noexcept;

/// @brief Method DecrementPromotionCountdown, addr 0x246d85c, size 0x38, virtual false, abstract: false, final false
inline int32_t DecrementPromotionCountdown() ;

static inline ::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_m_confWidth() const;

constexpr int32_t& __cordl_internal_get_m_confWidth() ;

constexpr ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*,::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> const& __cordl_internal_get_m_preComp() const;

constexpr ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*,::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>& __cordl_internal_get_m_preComp() ;

constexpr ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*,::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> const& __cordl_internal_get_m_preCompNeg() const;

constexpr ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*,::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>& __cordl_internal_get_m_preCompNeg() ;

constexpr int32_t const& __cordl_internal_get_m_promotionCountdown() const;

constexpr int32_t& __cordl_internal_get_m_promotionCountdown() ;

constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __cordl_internal_get_m_twice() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> const& __cordl_internal_get_m_twice() const;

constexpr int32_t const& __cordl_internal_get_m_width() const;

constexpr int32_t& __cordl_internal_get_m_width() ;

constexpr void __cordl_internal_set_m_confWidth(int32_t  value) ;

constexpr void __cordl_internal_set_m_preComp(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*,::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>  value) ;

constexpr void __cordl_internal_set_m_preCompNeg(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*,::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>  value) ;

constexpr void __cordl_internal_set_m_promotionCountdown(int32_t  value) ;

constexpr void __cordl_internal_set_m_twice(::Org::BouncyCastle::Math::EC::ECPoint*  value) ;

constexpr void __cordl_internal_set_m_width(int32_t  value) ;

/// @brief Method .ctor, addr 0x246d93c, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ConfWidth, addr 0x246d8ec, size 0x8, virtual true, abstract: false, final false
inline int32_t get_ConfWidth() ;

/// @brief Method get_IsPromoted, addr 0x246d8d0, size 0x1c, virtual true, abstract: false, final false
inline bool get_IsPromoted() ;

/// @brief Method get_PreComp, addr 0x246d8fc, size 0x8, virtual true, abstract: false, final false
inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*,::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> get_PreComp() ;

/// @brief Method get_PreCompNeg, addr 0x246d90c, size 0x8, virtual true, abstract: false, final false
inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*,::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> get_PreCompNeg() ;

/// @brief Method get_PromotionCountdown, addr 0x246d894, size 0x18, virtual false, abstract: false, final false
inline int32_t get_PromotionCountdown() ;

/// @brief Method get_Twice, addr 0x246d91c, size 0x8, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* get_Twice() ;

/// @brief Method get_Width, addr 0x246d92c, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Width() ;

/// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo"
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* i___Org__BouncyCastle__Math__EC__Multiplier__PreCompInfo() noexcept;

/// @brief Method set_ConfWidth, addr 0x246d8f4, size 0x8, virtual true, abstract: false, final false
inline void set_ConfWidth(int32_t  value) ;

/// @brief Method set_PreComp, addr 0x246d904, size 0x8, virtual true, abstract: false, final false
inline void set_PreComp(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*,::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>  value) ;

/// @brief Method set_PreCompNeg, addr 0x246d914, size 0x8, virtual true, abstract: false, final false
inline void set_PreCompNeg(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*,::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>  value) ;

/// @brief Method set_PromotionCountdown, addr 0x246d8ac, size 0x24, virtual false, abstract: false, final false
inline void set_PromotionCountdown(int32_t  value) ;

/// @brief Method set_Twice, addr 0x246d924, size 0x8, virtual true, abstract: false, final false
inline void set_Twice(::Org::BouncyCastle::Math::EC::ECPoint*  value) ;

/// @brief Method set_Width, addr 0x246d934, size 0x8, virtual true, abstract: false, final false
inline void set_Width(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WNafPreCompInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WNafPreCompInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WNafPreCompInfo(WNafPreCompInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WNafPreCompInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WNafPreCompInfo(WNafPreCompInfo const& ) = delete;

/// @brief Field m_promotionCountdown, offset: 0x10, size: 0x4, def value: None
 int32_t  ___m_promotionCountdown;

/// @brief Field m_confWidth, offset: 0x14, size: 0x4, def value: None
 int32_t  ___m_confWidth;

/// @brief Field m_preComp, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*,::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>  ___m_preComp;

/// @brief Field m_preCompNeg, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*,::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>  ___m_preCompNeg;

/// @brief Field m_twice, offset: 0x28, size: 0x8, def value: None
 ::Org::BouncyCastle::Math::EC::ECPoint*  ___m_twice;

/// @brief Field m_width, offset: 0x30, size: 0x4, def value: None
 int32_t  ___m_width;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo, ___m_promotionCountdown) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo, ___m_confWidth) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo, ___m_preComp) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo, ___m_preCompNeg) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo, ___m_twice) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo, ___m_width) == 0x30, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*, "Org.BouncyCastle.Math.EC.Multiplier", "WNafPreCompInfo");
