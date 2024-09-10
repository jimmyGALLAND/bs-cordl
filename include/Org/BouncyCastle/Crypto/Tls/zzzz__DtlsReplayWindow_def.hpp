#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DtlsReplayWindow.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DtlsReplayWindow)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsReplayWindow;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow);
// Type: Org.BouncyCastle.Crypto.Tls::DtlsReplayWindow
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DtlsReplayWindow*
class CORDL_TYPE DtlsReplayWindow : public ::System::Object {
public:
// Declarations
/// @brief Field mBitmap, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_mBitmap, put=__cordl_internal_set_mBitmap)) int64_t  mBitmap;

/// @brief Field mLatestConfirmedSeq, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mLatestConfirmedSeq, put=__cordl_internal_set_mLatestConfirmedSeq)) int64_t  mLatestConfirmedSeq;

static inline ::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow* New_ctor() ;

/// @brief Method ReportAuthenticated, addr 0x23a924c, size 0xc8, virtual false, abstract: false, final false
inline void ReportAuthenticated(int64_t  seq) ;

/// @brief Method Reset, addr 0x23aac4c, size 0x10, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ShouldDiscard, addr 0x23a920c, size 0x38, virtual false, abstract: false, final false
inline bool ShouldDiscard(int64_t  seq) ;

constexpr int64_t const& __cordl_internal_get_mBitmap() const;

constexpr int64_t& __cordl_internal_get_mBitmap() ;

constexpr int64_t const& __cordl_internal_get_mLatestConfirmedSeq() const;

constexpr int64_t& __cordl_internal_get_mLatestConfirmedSeq() ;

constexpr void __cordl_internal_set_mBitmap(int64_t  value) ;

constexpr void __cordl_internal_set_mLatestConfirmedSeq(int64_t  value) ;

/// @brief Method .ctor, addr 0x23a6f24, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DtlsReplayWindow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DtlsReplayWindow", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DtlsReplayWindow(DtlsReplayWindow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DtlsReplayWindow", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DtlsReplayWindow(DtlsReplayWindow const& ) = delete;

/// @brief Field mLatestConfirmedSeq, offset: 0x10, size: 0x8, def value: None
 int64_t  ___mLatestConfirmedSeq;

/// @brief Field mBitmap, offset: 0x18, size: 0x8, def value: None
 int64_t  ___mBitmap;

/// @brief Field VALID_SEQ_MASK offset 0xffffffff size 0x8
static constexpr int64_t  VALID_SEQ_MASK{static_cast<int64_t>(0xffffffffffff)};

/// @brief Field WINDOW_SIZE offset 0xffffffff size 0x8
static constexpr int64_t  WINDOW_SIZE{static_cast<int64_t>(0x40)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow, ___mLatestConfirmedSeq) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow, ___mBitmap) == 0x18, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow*, "Org.BouncyCastle.Crypto.Tls", "DtlsReplayWindow");
