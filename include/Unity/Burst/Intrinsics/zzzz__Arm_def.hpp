#pragma once
// IWYU pragma private; include "Unity/Burst/Intrinsics/Arm.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Arm)
namespace Unity::Burst::Intrinsics {
class __Arm__Neon;
}
namespace Unity::Burst::Intrinsics {
struct v128;
}
namespace Unity::Burst::Intrinsics {
struct v64;
}
// Forward declare root types
namespace Unity::Burst::Intrinsics {
class Arm;
}
namespace Unity::Burst::Intrinsics {
class __Arm__Neon;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::Arm);
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::__Arm__Neon);
// Type: ::Neon
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::Arm::Neon*
class CORDL_TYPE __Arm__Neon : public ::System::Object {
public:
// Declarations
static inline ::Unity::Burst::Intrinsics::__Arm__Neon* New_ctor() ;

/// @brief Method __crc32b, addr 0x4493d48, size 0x38, virtual false, abstract: false, final false
static inline uint32_t __crc32b(uint32_t  a0, uint8_t  a1) ;

/// @brief Method __crc32cb, addr 0x4493e28, size 0x38, virtual false, abstract: false, final false
static inline uint32_t __crc32cb(uint32_t  a0, uint8_t  a1) ;

/// @brief Method __crc32cd, addr 0x4493ed0, size 0x38, virtual false, abstract: false, final false
static inline uint32_t __crc32cd(uint32_t  a0, uint64_t  a1) ;

/// @brief Method __crc32ch, addr 0x4493e60, size 0x38, virtual false, abstract: false, final false
static inline uint32_t __crc32ch(uint32_t  a0, uint16_t  a1) ;

/// @brief Method __crc32cw, addr 0x4493e98, size 0x38, virtual false, abstract: false, final false
static inline uint32_t __crc32cw(uint32_t  a0, uint32_t  a1) ;

/// @brief Method __crc32d, addr 0x4493df0, size 0x38, virtual false, abstract: false, final false
static inline uint32_t __crc32d(uint32_t  a0, uint64_t  a1) ;

/// @brief Method __crc32h, addr 0x4493d80, size 0x38, virtual false, abstract: false, final false
static inline uint32_t __crc32h(uint32_t  a0, uint16_t  a1) ;

/// @brief Method __crc32w, addr 0x4493db8, size 0x38, virtual false, abstract: false, final false
static inline uint32_t __crc32w(uint32_t  a0, uint32_t  a1) ;

/// @brief Method .ctor, addr 0x4495984, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsNeonArmv82FeaturesSupported, addr 0x4485d84, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsNeonArmv82FeaturesSupported() ;

/// @brief Method get_IsNeonCryptoSupported, addr 0x4493b10, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsNeonCryptoSupported() ;

/// @brief Method get_IsNeonDotProdSupported, addr 0x4493fe8, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsNeonDotProdSupported() ;

/// @brief Method get_IsNeonRDMASupported, addr 0x4494290, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsNeonRDMASupported() ;

/// @brief Method get_IsNeonSupported, addr 0x4479754, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsNeonSupported() ;

/// @brief Method vaba_s16, addr 0x447d74c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaba_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vaba_s32, addr 0x447d7bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaba_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vaba_s8, addr 0x447d6dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaba_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vaba_u16, addr 0x447d89c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaba_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vaba_u32, addr 0x447d90c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaba_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vaba_u8, addr 0x447d82c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaba_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vabal_high_s16, addr 0x448a584, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabal_high_s32, addr 0x448a5bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabal_high_s8, addr 0x448a54c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabal_high_u16, addr 0x448a62c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabal_high_u32, addr 0x448a664, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabal_high_u8, addr 0x448a5f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabal_s16, addr 0x447d9b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vabal_s32, addr 0x447d9ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vabal_s8, addr 0x447d97c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vabal_u16, addr 0x447da5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vabal_u32, addr 0x447da94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vabal_u8, addr 0x447da24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabal_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vabaq_s16, addr 0x447d784, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabaq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabaq_s32, addr 0x447d7f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabaq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabaq_s8, addr 0x447d714, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabaq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabaq_u16, addr 0x447d8d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabaq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabaq_u32, addr 0x447d944, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabaq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabaq_u8, addr 0x447d864, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabaq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vabd_f32, addr 0x447d51c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabd_f64, addr 0x448a31c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabd_s16, addr 0x447d2ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabd_s32, addr 0x447d35c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabd_s8, addr 0x447d27c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabd_u16, addr 0x447d43c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabd_u32, addr 0x447d4ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabd_u8, addr 0x447d3cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabd_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabdd_f64, addr 0x448a3c4, size 0x38, virtual false, abstract: false, final false
static inline double_t vabdd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vabdl_high_s16, addr 0x448a434, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdl_high_s32, addr 0x448a46c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdl_high_s8, addr 0x448a3fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdl_high_u16, addr 0x448a4dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdl_high_u32, addr 0x448a514, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdl_high_u8, addr 0x448a4a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdl_s16, addr 0x447d5c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabdl_s32, addr 0x447d5fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabdl_s8, addr 0x447d58c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabdl_u16, addr 0x447d66c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabdl_u32, addr 0x447d6a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabdl_u8, addr 0x447d634, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vabdq_f32, addr 0x447d554, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdq_f64, addr 0x448a354, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdq_s16, addr 0x447d324, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdq_s32, addr 0x447d394, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdq_s8, addr 0x447d2b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdq_u16, addr 0x447d474, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdq_u32, addr 0x447d4e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabdq_u8, addr 0x447d404, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabdq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vabds_f32, addr 0x448a38c, size 0x38, virtual false, abstract: false, final false
static inline float_t vabds_f32(float_t  a0, float_t  a1) ;

/// @brief Method vabs_f32, addr 0x44830dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabs_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vabs_f64, addr 0x448fb90, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabs_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vabs_s16, addr 0x4482ffc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabs_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vabs_s32, addr 0x448306c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabs_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vabs_s64, addr 0x448fae8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabs_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vabs_s8, addr 0x4482f8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vabs_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vabsd_s64, addr 0x448fb20, size 0x38, virtual false, abstract: false, final false
static inline int64_t vabsd_s64(int64_t  a0) ;

/// @brief Method vabsq_f32, addr 0x4483114, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabsq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vabsq_f64, addr 0x448fbc8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabsq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vabsq_s16, addr 0x4483034, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabsq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vabsq_s32, addr 0x44830a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabsq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vabsq_s64, addr 0x448fb58, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabsq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vabsq_s8, addr 0x4482fc4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vabsq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vadd_f32, addr 0x447995c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_f64, addr 0x4485d8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_s16, addr 0x44797cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_s32, addr 0x447983c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_s64, addr 0x44798ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_s8, addr 0x447975c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_u16, addr 0x447992c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_u32, addr 0x447993c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_u64, addr 0x447994c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vadd_u8, addr 0x447991c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vadd_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddd_s64, addr 0x4485dfc, size 0x38, virtual false, abstract: false, final false
static inline int64_t vaddd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vaddd_u64, addr 0x4485e34, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vaddd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vaddhn_high_s16, addr 0x448680c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vaddhn_high_s32, addr 0x4486844, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vaddhn_high_s64, addr 0x448687c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vaddhn_high_u16, addr 0x44868b4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vaddhn_high_u32, addr 0x44868bc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vaddhn_high_u64, addr 0x44868c4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddhn_high_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vaddhn_s16, addr 0x447a52c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaddhn_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddhn_s32, addr 0x447a564, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaddhn_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddhn_s64, addr 0x447a59c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaddhn_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddhn_u16, addr 0x447a5d4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaddhn_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddhn_u32, addr 0x447a5dc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaddhn_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddhn_u64, addr 0x447a5e4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vaddhn_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddl_high_s16, addr 0x4485ea4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddl_high_s32, addr 0x4485edc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddl_high_s8, addr 0x4485e6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddl_high_u16, addr 0x4485f4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddl_high_u32, addr 0x4485f84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddl_high_u8, addr 0x4485f14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddl_s16, addr 0x4479a04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddl_s32, addr 0x4479a3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddl_s8, addr 0x44799cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddl_u16, addr 0x4479aac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddl_u32, addr 0x4479ae4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddl_u8, addr 0x4479a74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddlv_s16, addr 0x449225c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vaddlv_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddlv_s32, addr 0x44922cc, size 0x38, virtual false, abstract: false, final false
static inline int64_t vaddlv_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddlv_s8, addr 0x44921ec, size 0x38, virtual false, abstract: false, final false
static inline int16_t vaddlv_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddlv_u16, addr 0x44923ac, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vaddlv_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddlv_u32, addr 0x449241c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vaddlv_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddlv_u8, addr 0x449233c, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vaddlv_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddlvq_s16, addr 0x4492294, size 0x38, virtual false, abstract: false, final false
static inline int32_t vaddlvq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddlvq_s32, addr 0x4492304, size 0x38, virtual false, abstract: false, final false
static inline int64_t vaddlvq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddlvq_s8, addr 0x4492224, size 0x38, virtual false, abstract: false, final false
static inline int16_t vaddlvq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddlvq_u16, addr 0x44923e4, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vaddlvq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddlvq_u32, addr 0x4492454, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vaddlvq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddlvq_u8, addr 0x4492374, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vaddlvq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddq_f32, addr 0x4479994, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_f64, addr 0x4485dc4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_s16, addr 0x4479804, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_s32, addr 0x4479874, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_s64, addr 0x44798e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_s8, addr 0x4479794, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_u16, addr 0x4479934, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_u32, addr 0x4479944, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_u64, addr 0x4479954, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddq_u8, addr 0x4479924, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddv_f32, addr 0x4492144, size 0x38, virtual false, abstract: false, final false
static inline float_t vaddv_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddv_s16, addr 0x4491ea4, size 0x38, virtual false, abstract: false, final false
static inline int16_t vaddv_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddv_s32, addr 0x4491f14, size 0x38, virtual false, abstract: false, final false
static inline int32_t vaddv_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddv_s8, addr 0x4491e34, size 0x38, virtual false, abstract: false, final false
static inline int8_t vaddv_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddv_u16, addr 0x449202c, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vaddv_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddv_u32, addr 0x449209c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vaddv_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddv_u8, addr 0x4491fbc, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vaddv_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vaddvq_f32, addr 0x449217c, size 0x38, virtual false, abstract: false, final false
static inline float_t vaddvq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_f64, addr 0x44921b4, size 0x38, virtual false, abstract: false, final false
static inline double_t vaddvq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_s16, addr 0x4491edc, size 0x38, virtual false, abstract: false, final false
static inline int16_t vaddvq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_s32, addr 0x4491f4c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vaddvq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_s64, addr 0x4491f84, size 0x38, virtual false, abstract: false, final false
static inline int64_t vaddvq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_s8, addr 0x4491e6c, size 0x38, virtual false, abstract: false, final false
static inline int8_t vaddvq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_u16, addr 0x4492064, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vaddvq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_u32, addr 0x44920d4, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vaddvq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_u64, addr 0x449210c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vaddvq_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddvq_u8, addr 0x4491ff4, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vaddvq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaddw_high_s16, addr 0x4485ff4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddw_high_s32, addr 0x448602c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddw_high_s8, addr 0x4485fbc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddw_high_u16, addr 0x448609c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddw_high_u32, addr 0x44860d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddw_high_u8, addr 0x4486064, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaddw_s16, addr 0x4479b54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddw_s32, addr 0x4479b8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddw_s8, addr 0x4479b1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddw_u16, addr 0x4479bfc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddw_u32, addr 0x4479c34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaddw_u8, addr 0x4479bc4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaddw_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vaesdq_u8, addr 0x4493f40, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaesdq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaeseq_u8, addr 0x4493f08, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaeseq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vaesimcq_u8, addr 0x4493fb0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaesimcq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vaesmcq_u8, addr 0x4493f78, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vaesmcq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vand_s16, addr 0x4483ccc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vand_s32, addr 0x4483cdc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vand_s64, addr 0x4483cec, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vand_s8, addr 0x4483c5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vand_u16, addr 0x4483d0c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vand_u32, addr 0x4483d1c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vand_u64, addr 0x4483d2c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vand_u8, addr 0x4483cfc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vand_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vandq_s16, addr 0x4483cd4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vandq_s32, addr 0x4483ce4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vandq_s64, addr 0x4483cf4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vandq_s8, addr 0x4483c94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vandq_u16, addr 0x4483d14, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vandq_u32, addr 0x4483d24, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vandq_u64, addr 0x4483d34, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vandq_u8, addr 0x4483d04, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vandq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbic_s16, addr 0x4483f6c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbic_s32, addr 0x4483f7c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbic_s64, addr 0x4483f8c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbic_s8, addr 0x4483efc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbic_u16, addr 0x4483fac, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbic_u32, addr 0x4483fbc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbic_u64, addr 0x4483fcc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbic_u8, addr 0x4483f9c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbic_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vbicq_s16, addr 0x4483f74, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbicq_s32, addr 0x4483f84, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbicq_s64, addr 0x4483f94, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbicq_s8, addr 0x4483f34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbicq_u16, addr 0x4483fb4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbicq_u32, addr 0x4483fc4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbicq_u64, addr 0x4483fd4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbicq_u8, addr 0x4483fa4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbicq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vbsl_f32, addr 0x448419c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_f64, addr 0x4490418, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_s16, addr 0x448412c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_s32, addr 0x448413c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_s64, addr 0x448414c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_s8, addr 0x44840bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_u16, addr 0x448416c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_u32, addr 0x448417c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_u64, addr 0x448418c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbsl_u8, addr 0x448415c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vbsl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vbslq_f32, addr 0x44841a4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_f64, addr 0x4490420, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_s16, addr 0x4484134, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_s32, addr 0x4484144, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_s64, addr 0x4484154, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_s8, addr 0x44840f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_u16, addr 0x4484174, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_u32, addr 0x4484184, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_u64, addr 0x4484194, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vbslq_u8, addr 0x4484164, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vbslq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vcage_f32, addr 0x447cf3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcage_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcage_f64, addr 0x4489eac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcage_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcaged_f64, addr 0x4489f54, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcaged_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcageq_f32, addr 0x447cf74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcageq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcageq_f64, addr 0x4489ee4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcageq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcages_f32, addr 0x4489f1c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcages_f32(float_t  a0, float_t  a1) ;

/// @brief Method vcagt_f32, addr 0x447d01c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcagt_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcagt_f64, addr 0x448a06c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcagt_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcagtd_f64, addr 0x448a114, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcagtd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcagtq_f32, addr 0x447d054, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcagtq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcagtq_f64, addr 0x448a0a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcagtq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcagts_f32, addr 0x448a0dc, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcagts_f32(float_t  a0, float_t  a1) ;

/// @brief Method vcale_f32, addr 0x447cfac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcale_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcale_f64, addr 0x4489f8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcale_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcaled_f64, addr 0x448a034, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcaled_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcaleq_f32, addr 0x447cfe4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcaleq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcaleq_f64, addr 0x4489fc4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcaleq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcales_f32, addr 0x4489ffc, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcales_f32(float_t  a0, float_t  a1) ;

/// @brief Method vcalt_f32, addr 0x447d08c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcalt_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcalt_f64, addr 0x448a14c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcalt_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcaltd_f64, addr 0x448a1f4, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcaltd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcaltq_f32, addr 0x447d0c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcaltq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcaltq_f64, addr 0x448a184, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcaltq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcalts_f32, addr 0x448a1bc, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcalts_f32(float_t  a0, float_t  a1) ;

/// @brief Method vceq_f32, addr 0x447c28c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_f64, addr 0x44883bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_s16, addr 0x447c17c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_s32, addr 0x447c1ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_s64, addr 0x448833c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_s8, addr 0x447c10c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_u16, addr 0x447c26c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_u32, addr 0x447c27c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_u64, addr 0x44883ac, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceq_u8, addr 0x447c25c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceq_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vceqd_f64, addr 0x44884d4, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vceqd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vceqd_s64, addr 0x448842c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vceqd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vceqd_u64, addr 0x4488464, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vceqd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vceqq_f32, addr 0x447c2c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_f64, addr 0x44883f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_s16, addr 0x447c1b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_s32, addr 0x447c224, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_s64, addr 0x4488374, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_s8, addr 0x447c144, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_u16, addr 0x447c274, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_u32, addr 0x447c284, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_u64, addr 0x44883b4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqq_u8, addr 0x447c264, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vceqs_f32, addr 0x448849c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vceqs_f32(float_t  a0, float_t  a1) ;

/// @brief Method vceqz_f32, addr 0x448868c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_f64, addr 0x448877c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_s16, addr 0x448857c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_s32, addr 0x44885ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_s64, addr 0x44886fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_s8, addr 0x448850c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_u16, addr 0x448866c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_u32, addr 0x448867c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_u64, addr 0x448876c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_u64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqz_u8, addr 0x448865c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vceqz_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vceqzd_f64, addr 0x4488894, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vceqzd_f64(double_t  a0) ;

/// @brief Method vceqzd_s64, addr 0x44887ec, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vceqzd_s64(int64_t  a0) ;

/// @brief Method vceqzd_u64, addr 0x4488824, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vceqzd_u64(uint64_t  a0) ;

/// @brief Method vceqzq_f32, addr 0x44886c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_f64, addr 0x44887b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_s16, addr 0x44885b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_s32, addr 0x4488624, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_s64, addr 0x4488734, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_s8, addr 0x4488544, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_u16, addr 0x4488674, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_u32, addr 0x4488684, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_u64, addr 0x4488774, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzq_u8, addr 0x4488664, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vceqzq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vceqzs_f32, addr 0x448885c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vceqzs_f32(float_t  a0) ;

/// @brief Method vcge_f32, addr 0x447c59c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_f64, addr 0x44889ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_s16, addr 0x447c36c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_s32, addr 0x447c3dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_s64, addr 0x44888cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_s8, addr 0x447c2fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_u16, addr 0x447c4bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_u32, addr 0x447c52c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_u64, addr 0x448893c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcge_u8, addr 0x447c44c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcge_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcged_f64, addr 0x4488ac4, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcged_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcged_s64, addr 0x4488a1c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcged_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vcged_u64, addr 0x4488a54, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcged_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vcgeq_f32, addr 0x447c5d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_f64, addr 0x44889e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_s16, addr 0x447c3a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_s32, addr 0x447c414, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_s64, addr 0x4488904, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_s8, addr 0x447c334, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_u16, addr 0x447c4f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_u32, addr 0x447c564, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_u64, addr 0x4488974, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgeq_u8, addr 0x447c484, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgeq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcges_f32, addr 0x4488a8c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcges_f32(float_t  a0, float_t  a1) ;

/// @brief Method vcgez_f32, addr 0x4488cbc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgez_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgez_f64, addr 0x4488d2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgez_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgez_s16, addr 0x4488b6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgez_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgez_s32, addr 0x4488bdc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgez_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgez_s64, addr 0x4488c4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgez_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgez_s8, addr 0x4488afc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgez_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgezd_f64, addr 0x4488e0c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcgezd_f64(double_t  a0) ;

/// @brief Method vcgezd_s64, addr 0x4488d9c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcgezd_s64(int64_t  a0) ;

/// @brief Method vcgezq_f32, addr 0x4488cf4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgezq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgezq_f64, addr 0x4488d64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgezq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgezq_s16, addr 0x4488ba4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgezq_s32, addr 0x4488c14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgezq_s64, addr 0x4488c84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgezq_s8, addr 0x4488b34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgezq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgezs_f32, addr 0x4488dd4, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcgezs_f32(float_t  a0) ;

/// @brief Method vcgt_f32, addr 0x447cbbc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_f64, addr 0x448949c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_s16, addr 0x447c98c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_s32, addr 0x447c9fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_s64, addr 0x44893bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_s8, addr 0x447c91c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_u16, addr 0x447cadc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_u32, addr 0x447cb4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_u64, addr 0x448942c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgt_u8, addr 0x447ca6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgt_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcgtd_f64, addr 0x44895b4, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcgtd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcgtd_s64, addr 0x448950c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcgtd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vcgtd_u64, addr 0x4489544, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcgtd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vcgtq_f32, addr 0x447cbf4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_f64, addr 0x44894d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_s16, addr 0x447c9c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_s32, addr 0x447ca34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_s64, addr 0x44893f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_s8, addr 0x447c954, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_u16, addr 0x447cb14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_u32, addr 0x447cb84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_u64, addr 0x4489464, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgtq_u8, addr 0x447caa4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcgts_f32, addr 0x448957c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcgts_f32(float_t  a0, float_t  a1) ;

/// @brief Method vcgtz_f32, addr 0x44897ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgtz_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgtz_f64, addr 0x448981c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgtz_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgtz_s16, addr 0x448965c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgtz_s32, addr 0x44896cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgtz_s64, addr 0x448973c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgtz_s8, addr 0x44895ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcgtz_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcgtzd_f64, addr 0x44898fc, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcgtzd_f64(double_t  a0) ;

/// @brief Method vcgtzd_s64, addr 0x448988c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcgtzd_s64(int64_t  a0) ;

/// @brief Method vcgtzq_f32, addr 0x44897e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgtzq_f64, addr 0x4489854, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgtzq_s16, addr 0x4489694, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgtzq_s32, addr 0x4489704, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgtzq_s64, addr 0x4489774, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgtzq_s8, addr 0x4489624, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcgtzq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcgtzs_f32, addr 0x44898c4, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcgtzs_f32(float_t  a0) ;

/// @brief Method vcle_f32, addr 0x447c8ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_f64, addr 0x4488f24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_s16, addr 0x447c67c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_s32, addr 0x447c6ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_s64, addr 0x4488e44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_s8, addr 0x447c60c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_u16, addr 0x447c7cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_u32, addr 0x447c83c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_u64, addr 0x4488eb4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcle_u8, addr 0x447c75c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcle_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcled_f64, addr 0x448903c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcled_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcled_s64, addr 0x4488f94, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcled_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vcled_u64, addr 0x4488fcc, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcled_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vcleq_f32, addr 0x447c8e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_f64, addr 0x4488f5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_s16, addr 0x447c6b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_s32, addr 0x447c724, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_s64, addr 0x4488e7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_s8, addr 0x447c644, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_u16, addr 0x447c804, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_u32, addr 0x447c874, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_u64, addr 0x4488eec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcleq_u8, addr 0x447c794, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcleq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcles_f32, addr 0x4489004, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcles_f32(float_t  a0, float_t  a1) ;

/// @brief Method vclez_f32, addr 0x4489234, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclez_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclez_f64, addr 0x44892a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclez_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclez_s16, addr 0x44890e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclez_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclez_s32, addr 0x4489154, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclez_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclez_s64, addr 0x44891c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclez_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclez_s8, addr 0x4489074, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclez_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclezd_f64, addr 0x4489384, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vclezd_f64(double_t  a0) ;

/// @brief Method vclezd_s64, addr 0x4489314, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vclezd_s64(int64_t  a0) ;

/// @brief Method vclezq_f32, addr 0x448926c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclezq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclezq_f64, addr 0x44892dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclezq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclezq_s16, addr 0x448911c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclezq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclezq_s32, addr 0x448918c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclezq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclezq_s64, addr 0x44891fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclezq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclezq_s8, addr 0x44890ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclezq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclezs_f32, addr 0x448934c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vclezs_f32(float_t  a0) ;

/// @brief Method vcls_s16, addr 0x448361c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcls_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcls_s32, addr 0x448368c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcls_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcls_s8, addr 0x44835ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcls_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclsq_s16, addr 0x4483654, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclsq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclsq_s32, addr 0x44836c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclsq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclsq_s8, addr 0x44835e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclsq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclt_f32, addr 0x447cecc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_f64, addr 0x4489a14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_s16, addr 0x447cc9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_s32, addr 0x447cd0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_s64, addr 0x4489934, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_s8, addr 0x447cc2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_u16, addr 0x447cdec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_u32, addr 0x447ce5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_u64, addr 0x44899a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vclt_u8, addr 0x447cd7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclt_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcltd_f64, addr 0x4489b2c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcltd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vcltd_s64, addr 0x4489a84, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcltd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vcltd_u64, addr 0x4489abc, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcltd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vcltq_f32, addr 0x447cf04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_f64, addr 0x4489a4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_s16, addr 0x447ccd4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_s32, addr 0x447cd44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_s64, addr 0x448996c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_s8, addr 0x447cc64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_u16, addr 0x447ce24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_u32, addr 0x447ce94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_u64, addr 0x44899dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcltq_u8, addr 0x447cdb4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vclts_f32, addr 0x4489af4, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vclts_f32(float_t  a0, float_t  a1) ;

/// @brief Method vcltz_f32, addr 0x4489d24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcltz_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcltz_f64, addr 0x4489d94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcltz_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcltz_s16, addr 0x4489bd4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcltz_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcltz_s32, addr 0x4489c44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcltz_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcltz_s64, addr 0x4489cb4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcltz_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcltz_s8, addr 0x4489b64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcltz_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcltzd_f64, addr 0x4489e74, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcltzd_f64(double_t  a0) ;

/// @brief Method vcltzd_s64, addr 0x4489e04, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcltzd_s64(int64_t  a0) ;

/// @brief Method vcltzq_f32, addr 0x4489d5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltzq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcltzq_f64, addr 0x4489dcc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltzq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcltzq_s16, addr 0x4489c0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcltzq_s32, addr 0x4489c7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcltzq_s64, addr 0x4489cec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcltzq_s8, addr 0x4489b9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcltzq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcltzs_f32, addr 0x4489e3c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcltzs_f32(float_t  a0) ;

/// @brief Method vclz_s16, addr 0x448376c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclz_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclz_s32, addr 0x44837dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclz_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclz_s8, addr 0x44836fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclz_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclz_u16, addr 0x448385c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclz_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclz_u32, addr 0x448386c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclz_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclz_u8, addr 0x448384c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vclz_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vclzq_s16, addr 0x44837a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclzq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclzq_s32, addr 0x4483814, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclzq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclzq_s8, addr 0x4483734, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclzq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclzq_u16, addr 0x4483864, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclzq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclzq_u32, addr 0x4483874, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclzq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vclzq_u8, addr 0x4483854, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vclzq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcnt_s8, addr 0x448387c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcnt_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcnt_u8, addr 0x44838ec, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcnt_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcntq_s8, addr 0x44838b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcntq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcntq_u8, addr 0x44838f4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcntq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcombine_f16, addr 0x44956b4, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_f16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_f32, addr 0x4495704, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_f64, addr 0x4495754, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_s16, addr 0x4495484, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_s32, addr 0x44954d4, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_s64, addr 0x4495524, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_s8, addr 0x4495434, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_u16, addr 0x44955c4, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_u32, addr 0x4495614, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_u64, addr 0x4495664, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcombine_u8, addr 0x4495574, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcombine_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vcopy_lane_f32, addr 0x4490748, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_f64, addr 0x44907b8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_s16, addr 0x4490498, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_s32, addr 0x4490508, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_s64, addr 0x4490578, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_s8, addr 0x4490428, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_u16, addr 0x4490628, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_u32, addr 0x4490698, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_u64, addr 0x4490708, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_lane_u8, addr 0x44905b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_lane_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_f32, addr 0x4490b78, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_f64, addr 0x4490be8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_s16, addr 0x4490868, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_s32, addr 0x44908d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_s64, addr 0x4490948, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_s8, addr 0x44907f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_u16, addr 0x4490a28, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_u32, addr 0x4490a98, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_u64, addr 0x4490b08, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopy_laneq_u8, addr 0x44909b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcopy_laneq_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_f32, addr 0x4490780, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_f64, addr 0x44907c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_s16, addr 0x44904d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_s32, addr 0x4490540, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_s64, addr 0x4490580, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_s8, addr 0x4490460, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_u16, addr 0x4490660, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_u32, addr 0x44906d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_u64, addr 0x4490710, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_lane_u8, addr 0x44905f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_lane_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_f32, addr 0x4490bb0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_f64, addr 0x4490c20, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_s16, addr 0x44908a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_s32, addr 0x4490910, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_s64, addr 0x4490980, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_s8, addr 0x4490830, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_u16, addr 0x4490a60, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_u32, addr 0x4490ad0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_u64, addr 0x4490b40, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcopyq_laneq_u8, addr 0x44909f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcopyq_laneq_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vcreate_f16, addr 0x4494b28, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_f16(uint64_t  a0) ;

/// @brief Method vcreate_f32, addr 0x4494b4c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_f32(uint64_t  a0) ;

/// @brief Method vcreate_f64, addr 0x4494b70, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_f64(uint64_t  a0) ;

/// @brief Method vcreate_s16, addr 0x4494a2c, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_s16(uint64_t  a0) ;

/// @brief Method vcreate_s32, addr 0x4494a50, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_s32(uint64_t  a0) ;

/// @brief Method vcreate_s64, addr 0x4494a74, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_s64(uint64_t  a0) ;

/// @brief Method vcreate_s8, addr 0x4494a08, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_s8(uint64_t  a0) ;

/// @brief Method vcreate_u16, addr 0x4494abc, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_u16(uint64_t  a0) ;

/// @brief Method vcreate_u32, addr 0x4494ae0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_u32(uint64_t  a0) ;

/// @brief Method vcreate_u64, addr 0x4494b04, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_u64(uint64_t  a0) ;

/// @brief Method vcreate_u8, addr 0x4494a98, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcreate_u8(uint64_t  a0) ;

/// @brief Method vcvt_f32_f64, addr 0x448cf84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_f32_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvt_f32_s32, addr 0x4481084, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_f32_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_f32_u32, addr 0x44810f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_f32_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_f64_f32, addr 0x448cff4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvt_f64_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_f64_s64, addr 0x448cc74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_f64_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_f64_u64, addr 0x448cce4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_f64_u64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_high_f32_f64, addr 0x448cfbc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvt_high_f32_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcvt_high_f64_f32, addr 0x448d02c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvt_high_f64_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvt_n_f32_s32, addr 0x4481164, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f32_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_n_f32_u32, addr 0x44811d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f32_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_n_f64_s64, addr 0x448ce34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f64_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_n_f64_u64, addr 0x448cea4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_f64_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_n_s32_f32, addr 0x4480fa4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_s32_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_n_s64_f64, addr 0x448cab4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_s64_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_n_u32_f32, addr 0x4481014, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_u32_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_n_u64_f64, addr 0x448cb24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_n_u64_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vcvt_s32_f32, addr 0x4480ec4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_s32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_s64_f64, addr 0x448c3b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_s64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_u32_f32, addr 0x4480f34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_u32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvt_u64_f64, addr 0x448c424, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvt_u64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvta_s32_f32, addr 0x448c0a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvta_s32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvta_s64_f64, addr 0x448c734, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvta_s64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvta_u32_f32, addr 0x448c114, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvta_u32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvta_u64_f64, addr 0x448c7a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvta_u64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtad_s64_f64, addr 0x448c9d4, size 0x38, virtual false, abstract: false, final false
static inline int64_t vcvtad_s64_f64(double_t  a0) ;

/// @brief Method vcvtad_u64_f64, addr 0x448ca0c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcvtad_u64_f64(double_t  a0) ;

/// @brief Method vcvtaq_s32_f32, addr 0x448c0dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_s32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtaq_s64_f64, addr 0x448c76c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_s64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtaq_u32_f32, addr 0x448c14c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_u32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtaq_u64_f64, addr 0x448c7dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtaq_u64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtas_s32_f32, addr 0x448c344, size 0x38, virtual false, abstract: false, final false
static inline int32_t vcvtas_s32_f32(float_t  a0) ;

/// @brief Method vcvtas_u32_f32, addr 0x448c37c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcvtas_u32_f32(float_t  a0) ;

/// @brief Method vcvtd_f64_s64, addr 0x448cd54, size 0x38, virtual false, abstract: false, final false
static inline double_t vcvtd_f64_s64(int64_t  a0) ;

/// @brief Method vcvtd_f64_u64, addr 0x448cd8c, size 0x38, virtual false, abstract: false, final false
static inline double_t vcvtd_f64_u64(uint64_t  a0) ;

/// @brief Method vcvtd_n_f64_s64, addr 0x448cf14, size 0x38, virtual false, abstract: false, final false
static inline double_t vcvtd_n_f64_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vcvtd_n_f64_u64, addr 0x448cf4c, size 0x38, virtual false, abstract: false, final false
static inline double_t vcvtd_n_f64_u64(uint64_t  a0, int32_t  a1) ;

/// @brief Method vcvtd_n_s64_f64, addr 0x448cb94, size 0x38, virtual false, abstract: false, final false
static inline int64_t vcvtd_n_s64_f64(double_t  a0, int32_t  a1) ;

/// @brief Method vcvtd_n_u64_f64, addr 0x448cbcc, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcvtd_n_u64_f64(double_t  a0, int32_t  a1) ;

/// @brief Method vcvtd_s64_f64, addr 0x448c814, size 0x38, virtual false, abstract: false, final false
static inline int64_t vcvtd_s64_f64(double_t  a0) ;

/// @brief Method vcvtd_u64_f64, addr 0x448c84c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcvtd_u64_f64(double_t  a0) ;

/// @brief Method vcvtm_s32_f32, addr 0x448bee4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtm_s32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtm_s64_f64, addr 0x448c574, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtm_s64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtm_u32_f32, addr 0x448bf54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtm_u32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtm_u64_f64, addr 0x448c5e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtm_u64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtmd_s64_f64, addr 0x448c8f4, size 0x38, virtual false, abstract: false, final false
static inline int64_t vcvtmd_s64_f64(double_t  a0) ;

/// @brief Method vcvtmd_u64_f64, addr 0x448c92c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcvtmd_u64_f64(double_t  a0) ;

/// @brief Method vcvtmq_s32_f32, addr 0x448bf1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_s32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtmq_s64_f64, addr 0x448c5ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_s64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtmq_u32_f32, addr 0x448bf8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_u32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtmq_u64_f64, addr 0x448c61c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtmq_u64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtms_s32_f32, addr 0x448c264, size 0x38, virtual false, abstract: false, final false
static inline int32_t vcvtms_s32_f32(float_t  a0) ;

/// @brief Method vcvtms_u32_f32, addr 0x448c29c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcvtms_u32_f32(float_t  a0) ;

/// @brief Method vcvtn_s32_f32, addr 0x448be04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtn_s32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtn_s64_f64, addr 0x448c494, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtn_s64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtn_u32_f32, addr 0x448be74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtn_u32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtn_u64_f64, addr 0x448c504, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtn_u64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtnd_s64_f64, addr 0x448c884, size 0x38, virtual false, abstract: false, final false
static inline int64_t vcvtnd_s64_f64(double_t  a0) ;

/// @brief Method vcvtnd_u64_f64, addr 0x448c8bc, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcvtnd_u64_f64(double_t  a0) ;

/// @brief Method vcvtnq_s32_f32, addr 0x448be3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_s32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtnq_s64_f64, addr 0x448c4cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_s64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtnq_u32_f32, addr 0x448beac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_u32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtnq_u64_f64, addr 0x448c53c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtnq_u64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtns_s32_f32, addr 0x448c1f4, size 0x38, virtual false, abstract: false, final false
static inline int32_t vcvtns_s32_f32(float_t  a0) ;

/// @brief Method vcvtns_u32_f32, addr 0x448c22c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcvtns_u32_f32(float_t  a0) ;

/// @brief Method vcvtp_s32_f32, addr 0x448bfc4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtp_s32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtp_s64_f64, addr 0x448c654, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtp_s64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtp_u32_f32, addr 0x448c034, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtp_u32_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtp_u64_f64, addr 0x448c6c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtp_u64_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vcvtpd_s64_f64, addr 0x448c964, size 0x38, virtual false, abstract: false, final false
static inline int64_t vcvtpd_s64_f64(double_t  a0) ;

/// @brief Method vcvtpd_u64_f64, addr 0x448c99c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vcvtpd_u64_f64(double_t  a0) ;

/// @brief Method vcvtpq_s32_f32, addr 0x448bffc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_s32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtpq_s64_f64, addr 0x448c68c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_s64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtpq_u32_f32, addr 0x448c06c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_u32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtpq_u64_f64, addr 0x448c6fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtpq_u64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtps_s32_f32, addr 0x448c2d4, size 0x38, virtual false, abstract: false, final false
static inline int32_t vcvtps_s32_f32(float_t  a0) ;

/// @brief Method vcvtps_u32_f32, addr 0x448c30c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcvtps_u32_f32(float_t  a0) ;

/// @brief Method vcvtq_f32_s32, addr 0x44810bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f32_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtq_f32_u32, addr 0x448112c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f32_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtq_f64_s64, addr 0x448ccac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f64_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtq_f64_u64, addr 0x448cd1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_f64_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtq_n_f32_s32, addr 0x448119c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f32_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_n_f32_u32, addr 0x448120c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f32_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_n_f64_s64, addr 0x448ce6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f64_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_n_f64_u64, addr 0x448cedc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_f64_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_n_s32_f32, addr 0x4480fdc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_s32_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_n_s64_f64, addr 0x448caec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_s64_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_n_u32_f32, addr 0x448104c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_u32_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_n_u64_f64, addr 0x448cb5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_n_u64_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vcvtq_s32_f32, addr 0x4480efc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_s32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtq_s64_f64, addr 0x448c3ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_s64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtq_u32_f32, addr 0x4480f6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_u32_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtq_u64_f64, addr 0x448c45c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtq_u64_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvts_f32_s32, addr 0x448cc04, size 0x38, virtual false, abstract: false, final false
static inline float_t vcvts_f32_s32(int32_t  a0) ;

/// @brief Method vcvts_f32_u32, addr 0x448cc3c, size 0x38, virtual false, abstract: false, final false
static inline float_t vcvts_f32_u32(uint32_t  a0) ;

/// @brief Method vcvts_n_f32_s32, addr 0x448cdc4, size 0x38, virtual false, abstract: false, final false
static inline float_t vcvts_n_f32_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vcvts_n_f32_u32, addr 0x448cdfc, size 0x38, virtual false, abstract: false, final false
static inline float_t vcvts_n_f32_u32(uint32_t  a0, int32_t  a1) ;

/// @brief Method vcvts_n_s32_f32, addr 0x448ca44, size 0x38, virtual false, abstract: false, final false
static inline int32_t vcvts_n_s32_f32(float_t  a0, int32_t  a1) ;

/// @brief Method vcvts_n_u32_f32, addr 0x448ca7c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcvts_n_u32_f32(float_t  a0, int32_t  a1) ;

/// @brief Method vcvts_s32_f32, addr 0x448c184, size 0x38, virtual false, abstract: false, final false
static inline int32_t vcvts_s32_f32(float_t  a0) ;

/// @brief Method vcvts_u32_f32, addr 0x448c1bc, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vcvts_u32_f32(float_t  a0) ;

/// @brief Method vcvtx_f32_f64, addr 0x448d064, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vcvtx_f32_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vcvtx_high_f32_f64, addr 0x448d0d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vcvtx_high_f32_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vcvtxd_f32_f64, addr 0x448d09c, size 0x38, virtual false, abstract: false, final false
static inline float_t vcvtxd_f32_f64(double_t  a0) ;

/// @brief Method vdiv_f32, addr 0x4486d8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdiv_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vdiv_f64, addr 0x4486dfc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdiv_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vdivq_f32, addr 0x4486dc4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdivq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vdivq_f64, addr 0x4486e34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdivq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vdot_lane_s32, addr 0x4494108, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdot_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vdot_lane_u32, addr 0x44940d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdot_lane_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vdot_laneq_s32, addr 0x44941e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdot_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vdot_laneq_u32, addr 0x44941b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdot_laneq_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vdot_s32, addr 0x4494028, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdot_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vdot_u32, addr 0x4493ff0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdot_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vdotq_lane_s32, addr 0x4494258, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdotq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vdotq_lane_u32, addr 0x4494220, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdotq_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vdotq_laneq_s32, addr 0x4494178, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdotq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vdotq_laneq_u32, addr 0x4494140, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdotq_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vdotq_s32, addr 0x4494098, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdotq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vdotq_u32, addr 0x4494060, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdotq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vdup_lane_f32, addr 0x44844f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_f64, addr 0x4490cd8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_s16, addr 0x448421c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_s32, addr 0x448428c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_s64, addr 0x44842fc, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_s8, addr 0x44841ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_u16, addr 0x44843c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_u32, addr 0x4484430, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_u64, addr 0x44844a0, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_lane_u8, addr 0x4484350, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_lane_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_f32, addr 0x44910ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_f64, addr 0x449111c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_s16, addr 0x4490d9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_s32, addr 0x4490e0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_s64, addr 0x4490e7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_s8, addr 0x4490d2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_u16, addr 0x4490f5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_u32, addr 0x4490fcc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_u64, addr 0x449103c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_laneq_u8, addr 0x4490eec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_laneq_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdup_n_f32, addr 0x4494f14, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_f32(float_t  a0) ;

/// @brief Method vdup_n_f64, addr 0x4494f7c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_f64(double_t  a0) ;

/// @brief Method vdup_n_s16, addr 0x4494c04, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s16(int16_t  a0) ;

/// @brief Method vdup_n_s32, addr 0x4494c74, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s32(int32_t  a0) ;

/// @brief Method vdup_n_s64, addr 0x4494ce4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s64(int64_t  a0) ;

/// @brief Method vdup_n_s8, addr 0x4494b94, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_s8(int8_t  a0) ;

/// @brief Method vdup_n_u16, addr 0x4494dc4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u16(uint16_t  a0) ;

/// @brief Method vdup_n_u32, addr 0x4494e34, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u32(uint32_t  a0) ;

/// @brief Method vdup_n_u64, addr 0x4494ea4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u64(uint64_t  a0) ;

/// @brief Method vdup_n_u8, addr 0x4494d54, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vdup_n_u8(uint8_t  a0) ;

/// @brief Method vdupb_lane_s8, addr 0x449118c, size 0x38, virtual false, abstract: false, final false
static inline int8_t vdupb_lane_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupb_lane_u8, addr 0x4491238, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vdupb_lane_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupb_laneq_s8, addr 0x4491324, size 0x38, virtual false, abstract: false, final false
static inline int8_t vdupb_laneq_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupb_laneq_u8, addr 0x4491404, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vdupb_laneq_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupd_lane_f64, addr 0x449131c, size 0x8, virtual false, abstract: false, final false
static inline double_t vdupd_lane_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupd_lane_s64, addr 0x4491234, size 0x4, virtual false, abstract: false, final false
static inline int64_t vdupd_lane_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupd_lane_u64, addr 0x44912e0, size 0x4, virtual false, abstract: false, final false
static inline uint64_t vdupd_lane_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupd_laneq_f64, addr 0x449151c, size 0x38, virtual false, abstract: false, final false
static inline double_t vdupd_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupd_laneq_s64, addr 0x44913cc, size 0x38, virtual false, abstract: false, final false
static inline int64_t vdupd_laneq_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupd_laneq_u64, addr 0x44914ac, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vdupd_laneq_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vduph_lane_s16, addr 0x44911c4, size 0x38, virtual false, abstract: false, final false
static inline int16_t vduph_lane_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vduph_lane_u16, addr 0x4491270, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vduph_lane_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vduph_laneq_s16, addr 0x449135c, size 0x38, virtual false, abstract: false, final false
static inline int16_t vduph_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vduph_laneq_u16, addr 0x449143c, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vduph_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_f32, addr 0x448452c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_f64, addr 0x4490cdc, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_s16, addr 0x4484254, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_s32, addr 0x44842c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_s64, addr 0x4484300, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_s8, addr 0x44841e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_u16, addr 0x44843f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_u32, addr 0x4484468, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_u64, addr 0x44844a4, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_lane_u8, addr 0x4484388, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_lane_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_f32, addr 0x44910e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_f64, addr 0x4491154, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_s16, addr 0x4490dd4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_s32, addr 0x4490e44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_s64, addr 0x4490eb4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_s8, addr 0x4490d64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_u16, addr 0x4490f94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_u32, addr 0x4491004, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_u64, addr 0x4491074, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_laneq_u8, addr 0x4490f24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_laneq_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdupq_n_f32, addr 0x4494f34, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_f32(float_t  a0) ;

/// @brief Method vdupq_n_f64, addr 0x4494f9c, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_f64(double_t  a0) ;

/// @brief Method vdupq_n_s16, addr 0x4494c28, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s16(int16_t  a0) ;

/// @brief Method vdupq_n_s32, addr 0x4494c98, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s32(int32_t  a0) ;

/// @brief Method vdupq_n_s64, addr 0x4494d08, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s64(int64_t  a0) ;

/// @brief Method vdupq_n_s8, addr 0x4494bb8, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_s8(int8_t  a0) ;

/// @brief Method vdupq_n_u16, addr 0x4494de8, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u16(uint16_t  a0) ;

/// @brief Method vdupq_n_u32, addr 0x4494e58, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u32(uint32_t  a0) ;

/// @brief Method vdupq_n_u64, addr 0x4494ec8, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u64(uint64_t  a0) ;

/// @brief Method vdupq_n_u8, addr 0x4494d78, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vdupq_n_u8(uint8_t  a0) ;

/// @brief Method vdups_lane_f32, addr 0x44912e4, size 0x38, virtual false, abstract: false, final false
static inline float_t vdups_lane_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdups_lane_s32, addr 0x44911fc, size 0x38, virtual false, abstract: false, final false
static inline int32_t vdups_lane_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdups_lane_u32, addr 0x44912a8, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vdups_lane_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vdups_laneq_f32, addr 0x44914e4, size 0x38, virtual false, abstract: false, final false
static inline float_t vdups_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdups_laneq_s32, addr 0x4491394, size 0x38, virtual false, abstract: false, final false
static inline int32_t vdups_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vdups_laneq_u32, addr 0x4491474, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vdups_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method veor_s16, addr 0x4483e8c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veor_s32, addr 0x4483e9c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veor_s64, addr 0x4483eac, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veor_s8, addr 0x4483e1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veor_u16, addr 0x4483ecc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veor_u32, addr 0x4483edc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veor_u64, addr 0x4483eec, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veor_u8, addr 0x4483ebc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 veor_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method veorq_s16, addr 0x4483e94, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method veorq_s32, addr 0x4483ea4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method veorq_s64, addr 0x4483eb4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method veorq_s8, addr 0x4483e54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method veorq_u16, addr 0x4483ed4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method veorq_u32, addr 0x4483ee4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method veorq_u64, addr 0x4483ef4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method veorq_u8, addr 0x4483ec4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 veorq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vext_f32, addr 0x44851c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_f64, addr 0x4492c6c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_s16, addr 0x4484f1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_s32, addr 0x4484f8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_s64, addr 0x4484ffc, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_s8, addr 0x4484eac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_u16, addr 0x44850a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_u32, addr 0x4485118, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_u64, addr 0x4485188, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vext_u8, addr 0x4485038, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vext_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vextq_f32, addr 0x44851fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_f64, addr 0x4492c70, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_s16, addr 0x4484f54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_s32, addr 0x4484fc4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_s64, addr 0x4485000, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_s8, addr 0x4484ee4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_u16, addr 0x44850e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_u32, addr 0x4485150, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_u64, addr 0x448518c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vextq_u8, addr 0x4485070, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vextq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vfma_f32, addr 0x447af1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vfma_f64, addr 0x44871ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vfma_lane_f32, addr 0x448725c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_lane_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfma_lane_f64, addr 0x44872cc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_lane_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfma_laneq_f32, addr 0x448737c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_laneq_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfma_laneq_f64, addr 0x44873ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_laneq_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfma_n_f32, addr 0x4485d14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_n_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, float_t  a2) ;

/// @brief Method vfma_n_f64, addr 0x4493a30, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfma_n_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, double_t  a2) ;

/// @brief Method vfmad_lane_f64, addr 0x4487344, size 0x38, virtual false, abstract: false, final false
static inline double_t vfmad_lane_f64(double_t  a0, double_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmad_laneq_f64, addr 0x4487494, size 0x38, virtual false, abstract: false, final false
static inline double_t vfmad_laneq_f64(double_t  a0, double_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfmaq_f32, addr 0x447af54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vfmaq_f64, addr 0x4487224, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vfmaq_lane_f32, addr 0x4487294, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmaq_lane_f64, addr 0x44872d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_lane_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmaq_laneq_f32, addr 0x44873b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfmaq_laneq_f64, addr 0x4487424, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfmaq_n_f32, addr 0x4485d4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_n_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, float_t  a2) ;

/// @brief Method vfmaq_n_f64, addr 0x4493a68, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmaq_n_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, double_t  a2) ;

/// @brief Method vfmas_lane_f32, addr 0x448730c, size 0x38, virtual false, abstract: false, final false
static inline float_t vfmas_lane_f32(float_t  a0, float_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmas_laneq_f32, addr 0x448745c, size 0x38, virtual false, abstract: false, final false
static inline float_t vfmas_laneq_f32(float_t  a0, float_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfms_f32, addr 0x447af8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vfms_f64, addr 0x44874cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vfms_lane_f32, addr 0x448753c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_lane_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfms_lane_f64, addr 0x44875ac, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_lane_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfms_laneq_f32, addr 0x448765c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_laneq_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfms_laneq_f64, addr 0x44876cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_laneq_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfms_n_f32, addr 0x44939c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_n_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, float_t  a2) ;

/// @brief Method vfms_n_f64, addr 0x4493aa0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vfms_n_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, double_t  a2) ;

/// @brief Method vfmsd_lane_f64, addr 0x4487624, size 0x38, virtual false, abstract: false, final false
static inline double_t vfmsd_lane_f64(double_t  a0, double_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmsd_laneq_f64, addr 0x4487774, size 0x38, virtual false, abstract: false, final false
static inline double_t vfmsd_laneq_f64(double_t  a0, double_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfmsq_f32, addr 0x447afc4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vfmsq_f64, addr 0x4487504, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vfmsq_lane_f32, addr 0x4487574, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmsq_lane_f64, addr 0x44875b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_lane_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmsq_laneq_f32, addr 0x4487694, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfmsq_laneq_f64, addr 0x4487704, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vfmsq_n_f32, addr 0x44939f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_n_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, float_t  a2) ;

/// @brief Method vfmsq_n_f64, addr 0x4493ad8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vfmsq_n_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, double_t  a2) ;

/// @brief Method vfmss_lane_f32, addr 0x44875ec, size 0x38, virtual false, abstract: false, final false
static inline float_t vfmss_lane_f32(float_t  a0, float_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vfmss_laneq_f32, addr 0x448773c, size 0x38, virtual false, abstract: false, final false
static inline float_t vfmss_laneq_f32(float_t  a0, float_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vget_high_f32, addr 0x44957e4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_f64, addr 0x44957ec, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_s16, addr 0x44957ac, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_s32, addr 0x44957b4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_s64, addr 0x44957bc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_s8, addr 0x44957a4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_u16, addr 0x44957cc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_u32, addr 0x44957d4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_u64, addr 0x44957dc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_high_u8, addr 0x44957c4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_high_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_lane_f32, addr 0x448571c, size 0x38, virtual false, abstract: false, final false
static inline float_t vget_lane_f32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_f64, addr 0x44938b8, size 0x8, virtual false, abstract: false, final false
static inline double_t vget_lane_f64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_s16, addr 0x44856a8, size 0x38, virtual false, abstract: false, final false
static inline int16_t vget_lane_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_s32, addr 0x44856e0, size 0x38, virtual false, abstract: false, final false
static inline int32_t vget_lane_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_s64, addr 0x4485718, size 0x4, virtual false, abstract: false, final false
static inline int64_t vget_lane_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_s8, addr 0x4485670, size 0x38, virtual false, abstract: false, final false
static inline int8_t vget_lane_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_u16, addr 0x44855fc, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vget_lane_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_u32, addr 0x4485634, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vget_lane_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_u64, addr 0x448566c, size 0x4, virtual false, abstract: false, final false
static inline uint64_t vget_lane_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_lane_u8, addr 0x44855c4, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vget_lane_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vget_low_f32, addr 0x4495814, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_f64, addr 0x4495818, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_s16, addr 0x44957f8, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_s32, addr 0x44957fc, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_s64, addr 0x4495800, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_s8, addr 0x44957f4, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_u16, addr 0x4495808, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_u32, addr 0x449580c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_u64, addr 0x4495810, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vget_low_u8, addr 0x4495804, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vget_low_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vgetq_lane_f32, addr 0x4485914, size 0x38, virtual false, abstract: false, final false
static inline float_t vgetq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_f64, addr 0x44938c0, size 0x38, virtual false, abstract: false, final false
static inline double_t vgetq_lane_f64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_s16, addr 0x448586c, size 0x38, virtual false, abstract: false, final false
static inline int16_t vgetq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_s32, addr 0x44858a4, size 0x38, virtual false, abstract: false, final false
static inline int32_t vgetq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_s64, addr 0x44858dc, size 0x38, virtual false, abstract: false, final false
static inline int64_t vgetq_lane_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_s8, addr 0x4485834, size 0x38, virtual false, abstract: false, final false
static inline int8_t vgetq_lane_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_u16, addr 0x448578c, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vgetq_lane_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_u32, addr 0x44857c4, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vgetq_lane_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_u64, addr 0x44857fc, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vgetq_lane_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vgetq_lane_u8, addr 0x4485754, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vgetq_lane_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vhadd_s16, addr 0x4479cdc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhadd_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhadd_s32, addr 0x4479d4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhadd_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhadd_s8, addr 0x4479c6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhadd_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhadd_u16, addr 0x4479e2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhadd_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhadd_u32, addr 0x4479e9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhadd_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhadd_u8, addr 0x4479dbc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhadd_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhaddq_s16, addr 0x4479d14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhaddq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhaddq_s32, addr 0x4479d84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhaddq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhaddq_s8, addr 0x4479ca4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhaddq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhaddq_u16, addr 0x4479e64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhaddq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhaddq_u32, addr 0x4479ed4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhaddq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhaddq_u8, addr 0x4479df4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhaddq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhsub_s16, addr 0x447b9dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhsub_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhsub_s32, addr 0x447ba4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhsub_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhsub_s8, addr 0x447b96c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhsub_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhsub_u16, addr 0x447bb2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhsub_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhsub_u32, addr 0x447bb9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhsub_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhsub_u8, addr 0x447babc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vhsub_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vhsubq_s16, addr 0x447ba14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhsubq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhsubq_s32, addr 0x447ba84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhsubq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhsubq_s8, addr 0x447b9a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhsubq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhsubq_u16, addr 0x447bb64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhsubq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhsubq_u32, addr 0x447bbd4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhsubq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vhsubq_u8, addr 0x447baf4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vhsubq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vld1_f32, addr 0x44958bc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_f32(::cordl_internals::Ptr<float_t>  a0) ;

/// @brief Method vld1_f64, addr 0x44958d0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_f64(::cordl_internals::Ptr<double_t>  a0) ;

/// @brief Method vld1_s16, addr 0x4495830, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_s16(::cordl_internals::Ptr<int16_t>  a0) ;

/// @brief Method vld1_s32, addr 0x4495844, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_s32(::cordl_internals::Ptr<int32_t>  a0) ;

/// @brief Method vld1_s64, addr 0x4495858, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_s64(::cordl_internals::Ptr<int64_t>  a0) ;

/// @brief Method vld1_s8, addr 0x449581c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_s8(::cordl_internals::Ptr<int8_t>  a0) ;

/// @brief Method vld1_u16, addr 0x4495880, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_u16(::cordl_internals::Ptr<uint16_t>  a0) ;

/// @brief Method vld1_u32, addr 0x4495894, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_u32(::cordl_internals::Ptr<uint32_t>  a0) ;

/// @brief Method vld1_u64, addr 0x44958a8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_u64(::cordl_internals::Ptr<uint64_t>  a0) ;

/// @brief Method vld1_u8, addr 0x449586c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vld1_u8(::cordl_internals::Ptr<uint8_t>  a0) ;

/// @brief Method vld1q_f32, addr 0x44958c4, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_f32(::cordl_internals::Ptr<float_t>  a0) ;

/// @brief Method vld1q_f64, addr 0x44958d8, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_f64(::cordl_internals::Ptr<double_t>  a0) ;

/// @brief Method vld1q_s16, addr 0x4495838, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_s16(::cordl_internals::Ptr<int16_t>  a0) ;

/// @brief Method vld1q_s32, addr 0x449584c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_s32(::cordl_internals::Ptr<int32_t>  a0) ;

/// @brief Method vld1q_s64, addr 0x4495860, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_s64(::cordl_internals::Ptr<int64_t>  a0) ;

/// @brief Method vld1q_s8, addr 0x4495824, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_s8(::cordl_internals::Ptr<int8_t>  a0) ;

/// @brief Method vld1q_u16, addr 0x4495888, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_u16(::cordl_internals::Ptr<uint16_t>  a0) ;

/// @brief Method vld1q_u32, addr 0x449589c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_u32(::cordl_internals::Ptr<uint32_t>  a0) ;

/// @brief Method vld1q_u64, addr 0x44958b0, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_u64(::cordl_internals::Ptr<uint64_t>  a0) ;

/// @brief Method vld1q_u8, addr 0x4495874, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vld1q_u8(::cordl_internals::Ptr<uint8_t>  a0) ;

/// @brief Method vmax_f32, addr 0x447dd6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmax_f64, addr 0x448a69c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmax_s16, addr 0x447db3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmax_s32, addr 0x447dbac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmax_s8, addr 0x447dacc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmax_u16, addr 0x447dc8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmax_u32, addr 0x447dcfc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmax_u8, addr 0x447dc1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmax_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmaxnm_f32, addr 0x448a77c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmaxnm_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmaxnm_f64, addr 0x448a7ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmaxnm_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmaxnmq_f32, addr 0x448a7b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxnmq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxnmq_f64, addr 0x448a824, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxnmq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxnmv_f32, addr 0x4492b1c, size 0x38, virtual false, abstract: false, final false
static inline float_t vmaxnmv_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxnmvq_f32, addr 0x4492b54, size 0x38, virtual false, abstract: false, final false
static inline float_t vmaxnmvq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxnmvq_f64, addr 0x4492b8c, size 0x38, virtual false, abstract: false, final false
static inline double_t vmaxnmvq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxq_f32, addr 0x447dda4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxq_f64, addr 0x448a6d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxq_s16, addr 0x447db74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxq_s32, addr 0x447dbe4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxq_s8, addr 0x447db04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxq_u16, addr 0x447dcc4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxq_u32, addr 0x447dd34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxq_u8, addr 0x447dc54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmaxq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmaxv_f32, addr 0x449272c, size 0x38, virtual false, abstract: false, final false
static inline float_t vmaxv_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxv_s16, addr 0x44924fc, size 0x38, virtual false, abstract: false, final false
static inline int16_t vmaxv_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxv_s32, addr 0x449256c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vmaxv_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxv_s8, addr 0x449248c, size 0x38, virtual false, abstract: false, final false
static inline int8_t vmaxv_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxv_u16, addr 0x449264c, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vmaxv_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxv_u32, addr 0x44926bc, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vmaxv_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxv_u8, addr 0x44925dc, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vmaxv_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmaxvq_f32, addr 0x4492764, size 0x38, virtual false, abstract: false, final false
static inline float_t vmaxvq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxvq_f64, addr 0x449279c, size 0x38, virtual false, abstract: false, final false
static inline double_t vmaxvq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxvq_s16, addr 0x4492534, size 0x38, virtual false, abstract: false, final false
static inline int16_t vmaxvq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxvq_s32, addr 0x44925a4, size 0x38, virtual false, abstract: false, final false
static inline int32_t vmaxvq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxvq_s8, addr 0x44924c4, size 0x38, virtual false, abstract: false, final false
static inline int8_t vmaxvq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxvq_u16, addr 0x4492684, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vmaxvq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxvq_u32, addr 0x44926f4, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vmaxvq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmaxvq_u8, addr 0x4492614, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vmaxvq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmin_f32, addr 0x447e07c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmin_f64, addr 0x448a70c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmin_s16, addr 0x447de4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmin_s32, addr 0x447debc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmin_s8, addr 0x447dddc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmin_u16, addr 0x447df9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmin_u32, addr 0x447e00c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmin_u8, addr 0x447df2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmin_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vminnm_f32, addr 0x448a85c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vminnm_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vminnm_f64, addr 0x448a8cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vminnm_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vminnmq_f32, addr 0x448a894, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminnmq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminnmq_f64, addr 0x448a904, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminnmq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminnmv_f32, addr 0x4492bc4, size 0x38, virtual false, abstract: false, final false
static inline float_t vminnmv_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminnmvq_f32, addr 0x4492bfc, size 0x38, virtual false, abstract: false, final false
static inline float_t vminnmvq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminnmvq_f64, addr 0x4492c34, size 0x38, virtual false, abstract: false, final false
static inline double_t vminnmvq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminq_f32, addr 0x447e0b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminq_f64, addr 0x448a744, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminq_s16, addr 0x447de84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminq_s32, addr 0x447def4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminq_s8, addr 0x447de14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminq_u16, addr 0x447dfd4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminq_u32, addr 0x447e044, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminq_u8, addr 0x447df64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vminq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vminv_f32, addr 0x4492a74, size 0x38, virtual false, abstract: false, final false
static inline float_t vminv_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminv_s16, addr 0x4492844, size 0x38, virtual false, abstract: false, final false
static inline int16_t vminv_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminv_s32, addr 0x44928b4, size 0x38, virtual false, abstract: false, final false
static inline int32_t vminv_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminv_s8, addr 0x44927d4, size 0x38, virtual false, abstract: false, final false
static inline int8_t vminv_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminv_u16, addr 0x4492994, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vminv_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminv_u32, addr 0x4492a04, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vminv_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminv_u8, addr 0x4492924, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vminv_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vminvq_f32, addr 0x4492aac, size 0x38, virtual false, abstract: false, final false
static inline float_t vminvq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminvq_f64, addr 0x4492ae4, size 0x38, virtual false, abstract: false, final false
static inline double_t vminvq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminvq_s16, addr 0x449287c, size 0x38, virtual false, abstract: false, final false
static inline int16_t vminvq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminvq_s32, addr 0x44928ec, size 0x38, virtual false, abstract: false, final false
static inline int32_t vminvq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminvq_s8, addr 0x449280c, size 0x38, virtual false, abstract: false, final false
static inline int8_t vminvq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminvq_u16, addr 0x44929cc, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vminvq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminvq_u32, addr 0x4492a3c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vminvq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vminvq_u8, addr 0x449295c, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vminvq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmla_f32, addr 0x447aa1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmla_f64, addr 0x4486e6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmla_lane_f32, addr 0x44818cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmla_lane_s16, addr 0x448170c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmla_lane_s32, addr 0x448177c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmla_lane_u16, addr 0x44817ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmla_lane_u32, addr 0x448185c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_lane_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmla_laneq_f32, addr 0x448de64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmla_laneq_s16, addr 0x448dca4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmla_laneq_s32, addr 0x448dd14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmla_laneq_u16, addr 0x448dd84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmla_laneq_u32, addr 0x448ddf4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_laneq_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmla_n_f32, addr 0x4482a4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_n_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, float_t  a2) ;

/// @brief Method vmla_n_s16, addr 0x448288c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int16_t  a2) ;

/// @brief Method vmla_n_s32, addr 0x44828fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmla_n_u16, addr 0x448296c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, uint16_t  a2) ;

/// @brief Method vmla_n_u32, addr 0x44829dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, uint32_t  a2) ;

/// @brief Method vmla_s16, addr 0x447a90c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmla_s32, addr 0x447a97c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmla_s8, addr 0x447a89c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmla_u16, addr 0x447a9fc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmla_u32, addr 0x447aa0c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmla_u8, addr 0x447a9ec, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmla_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlal_high_lane_s16, addr 0x448ded4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_high_lane_s32, addr 0x448df0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_high_lane_u16, addr 0x448df44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_high_lane_u32, addr 0x448df7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_high_laneq_s16, addr 0x448e094, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_high_laneq_s32, addr 0x448e0cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_high_laneq_u16, addr 0x448e104, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_high_laneq_u32, addr 0x448e13c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_high_n_s16, addr 0x448f848, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int16_t  a2) ;

/// @brief Method vmlal_high_n_s32, addr 0x448f880, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmlal_high_n_u16, addr 0x448f8b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint16_t  a2) ;

/// @brief Method vmlal_high_n_u32, addr 0x448f8f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint32_t  a2) ;

/// @brief Method vmlal_high_s16, addr 0x4486f14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlal_high_s32, addr 0x4486f4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlal_high_s8, addr 0x4486edc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlal_high_u16, addr 0x4486fbc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlal_high_u32, addr 0x4486ff4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlal_high_u8, addr 0x4486f84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlal_lane_s16, addr 0x448193c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_lane_s32, addr 0x4481974, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_lane_u16, addr 0x44819ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_lane_u32, addr 0x44819e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlal_laneq_s16, addr 0x448dfb4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_laneq_s32, addr 0x448dfec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_laneq_u16, addr 0x448e024, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_laneq_u32, addr 0x448e05c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlal_n_s16, addr 0x4482abc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int16_t  a2) ;

/// @brief Method vmlal_n_s32, addr 0x4482af4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmlal_n_u16, addr 0x4482b2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, uint16_t  a2) ;

/// @brief Method vmlal_n_u32, addr 0x4482b64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, uint32_t  a2) ;

/// @brief Method vmlal_s16, addr 0x447aac4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlal_s32, addr 0x447aafc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlal_s8, addr 0x447aa8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlal_u16, addr 0x447ab6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlal_u32, addr 0x447aba4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlal_u8, addr 0x447ab34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlal_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlaq_f32, addr 0x447aa54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlaq_f64, addr 0x4486ea4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlaq_lane_f32, addr 0x4481904, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlaq_lane_s16, addr 0x4481744, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlaq_lane_s32, addr 0x44817b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlaq_lane_u16, addr 0x4481824, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlaq_lane_u32, addr 0x4481894, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlaq_laneq_f32, addr 0x448de9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlaq_laneq_s16, addr 0x448dcdc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlaq_laneq_s32, addr 0x448dd4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlaq_laneq_u16, addr 0x448ddbc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlaq_laneq_u32, addr 0x448de2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlaq_n_f32, addr 0x4482a84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, float_t  a2) ;

/// @brief Method vmlaq_n_s16, addr 0x44828c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int16_t  a2) ;

/// @brief Method vmlaq_n_s32, addr 0x4482934, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmlaq_n_u16, addr 0x44829a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint16_t  a2) ;

/// @brief Method vmlaq_n_u32, addr 0x4482a14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint32_t  a2) ;

/// @brief Method vmlaq_s16, addr 0x447a944, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlaq_s32, addr 0x447a9b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlaq_s8, addr 0x447a8d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlaq_u16, addr 0x447aa04, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlaq_u32, addr 0x447aa14, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlaq_u8, addr 0x447a9f4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlaq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmls_f32, addr 0x447ad5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmls_f64, addr 0x448702c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmls_lane_f32, addr 0x4481c4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmls_lane_s16, addr 0x4481a8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmls_lane_s32, addr 0x4481afc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmls_lane_u16, addr 0x4481b6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmls_lane_u32, addr 0x4481bdc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_lane_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmls_laneq_f32, addr 0x448e564, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmls_laneq_s16, addr 0x448e3a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmls_laneq_s32, addr 0x448e414, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmls_laneq_u16, addr 0x448e484, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmls_laneq_u32, addr 0x448e4f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_laneq_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmls_n_f32, addr 0x4482dcc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_n_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, float_t  a2) ;

/// @brief Method vmls_n_s16, addr 0x4482c0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int16_t  a2) ;

/// @brief Method vmls_n_s32, addr 0x4482c7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmls_n_u16, addr 0x4482cec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, uint16_t  a2) ;

/// @brief Method vmls_n_u32, addr 0x4482d5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, uint32_t  a2) ;

/// @brief Method vmls_s16, addr 0x447ac4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmls_s32, addr 0x447acbc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmls_s8, addr 0x447abdc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmls_u16, addr 0x447ad3c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmls_u32, addr 0x447ad4c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmls_u8, addr 0x447ad2c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmls_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlsl_high_lane_s16, addr 0x448e5d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_lane_s32, addr 0x448e60c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_lane_u16, addr 0x448e644, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_lane_u32, addr 0x448e67c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_laneq_s16, addr 0x448e794, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_laneq_s32, addr 0x448e7cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_laneq_u16, addr 0x448e804, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_laneq_u32, addr 0x448e83c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_high_n_s16, addr 0x448f998, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int16_t  a2) ;

/// @brief Method vmlsl_high_n_s32, addr 0x448f9d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmlsl_high_n_u16, addr 0x448fa08, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint16_t  a2) ;

/// @brief Method vmlsl_high_n_u32, addr 0x448fa40, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint32_t  a2) ;

/// @brief Method vmlsl_high_s16, addr 0x44870d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsl_high_s32, addr 0x448710c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsl_high_s8, addr 0x448709c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsl_high_u16, addr 0x448717c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsl_high_u32, addr 0x44871b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsl_high_u8, addr 0x4487144, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsl_lane_s16, addr 0x4481cbc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_lane_s32, addr 0x4481cf4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_lane_u16, addr 0x4481d2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_lane_u32, addr 0x4481d64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsl_laneq_s16, addr 0x448e6b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_laneq_s32, addr 0x448e6ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_laneq_u16, addr 0x448e724, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_laneq_u32, addr 0x448e75c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsl_n_s16, addr 0x4482e3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int16_t  a2) ;

/// @brief Method vmlsl_n_s32, addr 0x4482e74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmlsl_n_u16, addr 0x4482eac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, uint16_t  a2) ;

/// @brief Method vmlsl_n_u32, addr 0x4482ee4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, uint32_t  a2) ;

/// @brief Method vmlsl_s16, addr 0x447ae04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlsl_s32, addr 0x447ae3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlsl_s8, addr 0x447adcc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlsl_u16, addr 0x447aeac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlsl_u32, addr 0x447aee4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlsl_u8, addr 0x447ae74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsl_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vmlsq_f32, addr 0x447ad94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsq_f64, addr 0x4487064, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsq_lane_f32, addr 0x4481c84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsq_lane_s16, addr 0x4481ac4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsq_lane_s32, addr 0x4481b34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsq_lane_u16, addr 0x4481ba4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsq_lane_u32, addr 0x4481c14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vmlsq_laneq_f32, addr 0x448e59c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsq_laneq_s16, addr 0x448e3dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsq_laneq_s32, addr 0x448e44c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsq_laneq_u16, addr 0x448e4bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsq_laneq_u32, addr 0x448e52c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vmlsq_n_f32, addr 0x4482e04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, float_t  a2) ;

/// @brief Method vmlsq_n_s16, addr 0x4482c44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int16_t  a2) ;

/// @brief Method vmlsq_n_s32, addr 0x4482cb4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmlsq_n_u16, addr 0x4482d24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint16_t  a2) ;

/// @brief Method vmlsq_n_u32, addr 0x4482d94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, uint32_t  a2) ;

/// @brief Method vmlsq_s16, addr 0x447ac84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsq_s32, addr 0x447acf4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsq_s8, addr 0x447ac14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsq_u16, addr 0x447ad44, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsq_u32, addr 0x447ad54, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmlsq_u8, addr 0x447ad34, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmlsq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vmov_n_f32, addr 0x4495364, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_f32(float_t  a0) ;

/// @brief Method vmov_n_f64, addr 0x44953cc, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_f64(double_t  a0) ;

/// @brief Method vmov_n_s16, addr 0x4495054, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s16(int16_t  a0) ;

/// @brief Method vmov_n_s32, addr 0x44950c4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s32(int32_t  a0) ;

/// @brief Method vmov_n_s64, addr 0x4495134, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s64(int64_t  a0) ;

/// @brief Method vmov_n_s8, addr 0x4494fe4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_s8(int8_t  a0) ;

/// @brief Method vmov_n_u16, addr 0x4495214, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u16(uint16_t  a0) ;

/// @brief Method vmov_n_u32, addr 0x4495284, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u32(uint32_t  a0) ;

/// @brief Method vmov_n_u64, addr 0x44952f4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u64(uint64_t  a0) ;

/// @brief Method vmov_n_u8, addr 0x44951a4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmov_n_u8(uint8_t  a0) ;

/// @brief Method vmovl_high_s16, addr 0x448d79c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovl_high_s32, addr 0x448d7d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovl_high_s8, addr 0x448d764, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovl_high_u16, addr 0x448d844, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovl_high_u32, addr 0x448d87c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovl_high_u8, addr 0x448d80c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_high_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovl_s16, addr 0x44813fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmovl_s32, addr 0x4481434, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmovl_s8, addr 0x44813c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmovl_u16, addr 0x44814a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmovl_u32, addr 0x44814dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmovl_u8, addr 0x448146c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovl_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmovn_high_s16, addr 0x4481304, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmovn_high_s32, addr 0x448133c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmovn_high_s64, addr 0x4481374, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmovn_high_u16, addr 0x44813ac, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmovn_high_u32, addr 0x44813b4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmovn_high_u64, addr 0x44813bc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovn_high_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmovn_s16, addr 0x4481244, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmovn_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovn_s32, addr 0x448127c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmovn_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovn_s64, addr 0x44812b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmovn_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovn_u16, addr 0x44812ec, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmovn_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovn_u32, addr 0x44812f4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmovn_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovn_u64, addr 0x44812fc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmovn_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmovq_n_f32, addr 0x4495384, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_f32(float_t  a0) ;

/// @brief Method vmovq_n_f64, addr 0x44953ec, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_f64(double_t  a0) ;

/// @brief Method vmovq_n_s16, addr 0x4495078, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s16(int16_t  a0) ;

/// @brief Method vmovq_n_s32, addr 0x44950e8, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s32(int32_t  a0) ;

/// @brief Method vmovq_n_s64, addr 0x4495158, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s64(int64_t  a0) ;

/// @brief Method vmovq_n_s8, addr 0x4495008, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_s8(int8_t  a0) ;

/// @brief Method vmovq_n_u16, addr 0x4495238, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u16(uint16_t  a0) ;

/// @brief Method vmovq_n_u32, addr 0x44952a8, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u32(uint32_t  a0) ;

/// @brief Method vmovq_n_u64, addr 0x4495318, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u64(uint64_t  a0) ;

/// @brief Method vmovq_n_u8, addr 0x44951c8, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmovq_n_u8(uint8_t  a0) ;

/// @brief Method vmul_f32, addr 0x447a82c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmul_f64, addr 0x448698c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmul_lane_f32, addr 0x44821fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmul_lane_f64, addr 0x448eb14, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmul_lane_s16, addr 0x448203c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmul_lane_s32, addr 0x44820ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmul_lane_u16, addr 0x448211c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmul_lane_u32, addr 0x448218c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_lane_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmul_laneq_f32, addr 0x448ed58, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmul_laneq_f64, addr 0x448edc8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmul_laneq_s16, addr 0x448eb98, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmul_laneq_s32, addr 0x448ec08, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmul_laneq_u16, addr 0x448ec78, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmul_laneq_u32, addr 0x448ece8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_laneq_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmul_n_f32, addr 0x4481fcc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_n_f32(::Unity::Burst::Intrinsics::v64  a0, float_t  a1) ;

/// @brief Method vmul_n_f64, addr 0x448eaa4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_n_f64(::Unity::Burst::Intrinsics::v64  a0, double_t  a1) ;

/// @brief Method vmul_n_s16, addr 0x4481e0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_n_s16(::Unity::Burst::Intrinsics::v64  a0, int16_t  a1) ;

/// @brief Method vmul_n_s32, addr 0x4481e7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vmul_n_u16, addr 0x4481eec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_n_u16(::Unity::Burst::Intrinsics::v64  a0, uint16_t  a1) ;

/// @brief Method vmul_n_u32, addr 0x4481f5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_n_u32(::Unity::Burst::Intrinsics::v64  a0, uint32_t  a1) ;

/// @brief Method vmul_s16, addr 0x447a71c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmul_s32, addr 0x447a78c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmul_s8, addr 0x447a6ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmul_u16, addr 0x447a80c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmul_u32, addr 0x447a81c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmul_u8, addr 0x447a7fc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmul_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmuld_lane_f64, addr 0x448eb8c, size 0xc, virtual false, abstract: false, final false
static inline double_t vmuld_lane_f64(double_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmuld_laneq_f64, addr 0x448ee70, size 0x38, virtual false, abstract: false, final false
static inline double_t vmuld_laneq_f64(double_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_high_lane_s16, addr 0x448ef88, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_high_lane_s32, addr 0x448efc0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_high_lane_u16, addr 0x448eff8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_high_lane_u32, addr 0x448f030, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_high_laneq_s16, addr 0x448f148, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_high_laneq_s32, addr 0x448f180, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_high_laneq_u16, addr 0x448f1b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_high_laneq_u32, addr 0x448f1f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_high_n_s16, addr 0x448eea8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_s16(::Unity::Burst::Intrinsics::v128  a0, int16_t  a1) ;

/// @brief Method vmull_high_n_s32, addr 0x448eee0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vmull_high_n_u16, addr 0x448ef18, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_u16(::Unity::Burst::Intrinsics::v128  a0, uint16_t  a1) ;

/// @brief Method vmull_high_n_u32, addr 0x448ef50, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_n_u32(::Unity::Burst::Intrinsics::v128  a0, uint32_t  a1) ;

/// @brief Method vmull_high_s16, addr 0x4487a84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmull_high_s32, addr 0x4487abc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmull_high_s8, addr 0x4487a4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmull_high_u16, addr 0x4487b2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmull_high_u32, addr 0x4487b64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmull_high_u8, addr 0x4487af4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmull_lane_s16, addr 0x448234c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_lane_s32, addr 0x4482384, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_lane_u16, addr 0x44823bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_lane_u32, addr 0x44823f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_lane_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmull_laneq_s16, addr 0x448f068, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_laneq_s32, addr 0x448f0a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_laneq_u16, addr 0x448f0d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_laneq_u32, addr 0x448f110, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_laneq_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmull_n_s16, addr 0x448226c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_n_s16(::Unity::Burst::Intrinsics::v64  a0, int16_t  a1) ;

/// @brief Method vmull_n_s32, addr 0x44822a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vmull_n_u16, addr 0x44822dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_n_u16(::Unity::Burst::Intrinsics::v64  a0, uint16_t  a1) ;

/// @brief Method vmull_n_u32, addr 0x4482314, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_n_u32(::Unity::Burst::Intrinsics::v64  a0, uint32_t  a1) ;

/// @brief Method vmull_s16, addr 0x447b2d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmull_s32, addr 0x447b30c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmull_s8, addr 0x447b29c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmull_u16, addr 0x447b37c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmull_u32, addr 0x447b3b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmull_u8, addr 0x447b344, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmull_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmulq_f32, addr 0x447a864, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulq_f64, addr 0x44869c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulq_lane_f32, addr 0x4482234, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulq_lane_f64, addr 0x448eb1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulq_lane_s16, addr 0x4482074, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulq_lane_s32, addr 0x44820e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulq_lane_u16, addr 0x4482154, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulq_lane_u32, addr 0x44821c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_lane_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulq_laneq_f32, addr 0x448ed90, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulq_laneq_f64, addr 0x448ee00, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulq_laneq_s16, addr 0x448ebd0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulq_laneq_s32, addr 0x448ec40, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulq_laneq_u16, addr 0x448ecb0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulq_laneq_u32, addr 0x448ed20, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_laneq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulq_n_f32, addr 0x4482004, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_f32(::Unity::Burst::Intrinsics::v128  a0, float_t  a1) ;

/// @brief Method vmulq_n_f64, addr 0x448eadc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_f64(::Unity::Burst::Intrinsics::v128  a0, double_t  a1) ;

/// @brief Method vmulq_n_s16, addr 0x4481e44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int16_t  a1) ;

/// @brief Method vmulq_n_s32, addr 0x4481eb4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vmulq_n_u16, addr 0x4481f24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_u16(::Unity::Burst::Intrinsics::v128  a0, uint16_t  a1) ;

/// @brief Method vmulq_n_u32, addr 0x4481f94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_n_u32(::Unity::Burst::Intrinsics::v128  a0, uint32_t  a1) ;

/// @brief Method vmulq_s16, addr 0x447a754, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulq_s32, addr 0x447a7c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulq_s8, addr 0x447a6e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulq_u16, addr 0x447a814, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulq_u32, addr 0x447a824, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulq_u8, addr 0x447a804, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmuls_lane_f32, addr 0x448eb54, size 0x38, virtual false, abstract: false, final false
static inline float_t vmuls_lane_f32(float_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmuls_laneq_f32, addr 0x448ee38, size 0x38, virtual false, abstract: false, final false
static inline float_t vmuls_laneq_f32(float_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulx_f32, addr 0x44869fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmulx_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmulx_f64, addr 0x4486a6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmulx_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vmulx_lane_f32, addr 0x4486b4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmulx_lane_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulx_lane_f64, addr 0x4486bbc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmulx_lane_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulx_laneq_f32, addr 0x4486c3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmulx_laneq_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulx_laneq_f64, addr 0x4486cac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmulx_laneq_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulxd_f64, addr 0x4486b14, size 0x38, virtual false, abstract: false, final false
static inline double_t vmulxd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vmulxd_lane_f64, addr 0x4486c34, size 0x8, virtual false, abstract: false, final false
static inline double_t vmulxd_lane_f64(double_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulxd_laneq_f64, addr 0x4486d54, size 0x38, virtual false, abstract: false, final false
static inline double_t vmulxd_laneq_f64(double_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulxq_f32, addr 0x4486a34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulxq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulxq_f64, addr 0x4486aa4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulxq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vmulxq_lane_f32, addr 0x4486b84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulxq_lane_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulxq_lane_f64, addr 0x4486bc4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulxq_lane_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulxq_laneq_f32, addr 0x4486c74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulxq_laneq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulxq_laneq_f64, addr 0x4486ce4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmulxq_laneq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmulxs_f32, addr 0x4486adc, size 0x38, virtual false, abstract: false, final false
static inline float_t vmulxs_f32(float_t  a0, float_t  a1) ;

/// @brief Method vmulxs_lane_f32, addr 0x4486bfc, size 0x38, virtual false, abstract: false, final false
static inline float_t vmulxs_lane_f32(float_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vmulxs_laneq_f32, addr 0x4486d1c, size 0x38, virtual false, abstract: false, final false
static inline float_t vmulxs_laneq_f32(float_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vmvn_s16, addr 0x4483c0c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmvn_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmvn_s32, addr 0x4483c1c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmvn_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmvn_s8, addr 0x4483b9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmvn_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmvn_u16, addr 0x4483c3c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmvn_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmvn_u32, addr 0x4483c4c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmvn_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmvn_u8, addr 0x4483c2c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vmvn_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vmvnq_s16, addr 0x4483c14, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmvnq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmvnq_s32, addr 0x4483c24, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmvnq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmvnq_s8, addr 0x4483bd4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmvnq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmvnq_u16, addr 0x4483c44, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmvnq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmvnq_u32, addr 0x4483c54, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmvnq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vmvnq_u8, addr 0x4483c34, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vmvnq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vneg_f32, addr 0x44833ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vneg_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vneg_f64, addr 0x448fdf8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vneg_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vneg_s16, addr 0x448330c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vneg_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vneg_s32, addr 0x448337c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vneg_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vneg_s64, addr 0x448fd50, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vneg_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vneg_s8, addr 0x448329c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vneg_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vnegd_s64, addr 0x448fd88, size 0x38, virtual false, abstract: false, final false
static inline int64_t vnegd_s64(int64_t  a0) ;

/// @brief Method vnegq_f32, addr 0x4483424, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vnegq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vnegq_f64, addr 0x448fe30, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vnegq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vnegq_s16, addr 0x4483344, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vnegq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vnegq_s32, addr 0x44833b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vnegq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vnegq_s64, addr 0x448fdc0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vnegq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vnegq_s8, addr 0x44832d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vnegq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vorn_s16, addr 0x448404c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorn_s32, addr 0x448405c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorn_s64, addr 0x448406c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorn_s8, addr 0x4483fdc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorn_u16, addr 0x448408c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorn_u32, addr 0x448409c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorn_u64, addr 0x44840ac, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorn_u8, addr 0x448407c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorn_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vornq_s16, addr 0x4484054, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vornq_s32, addr 0x4484064, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vornq_s64, addr 0x4484074, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vornq_s8, addr 0x4484014, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vornq_u16, addr 0x4484094, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vornq_u32, addr 0x44840a4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vornq_u64, addr 0x44840b4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vornq_u8, addr 0x4484084, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vornq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorr_s16, addr 0x4483dac, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorr_s32, addr 0x4483dbc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorr_s64, addr 0x4483dcc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorr_s8, addr 0x4483d3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorr_u16, addr 0x4483dec, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorr_u32, addr 0x4483dfc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorr_u64, addr 0x4483e0c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorr_u8, addr 0x4483ddc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vorr_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vorrq_s16, addr 0x4483db4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorrq_s32, addr 0x4483dc4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorrq_s64, addr 0x4483dd4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorrq_s8, addr 0x4483d74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorrq_u16, addr 0x4483df4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorrq_u32, addr 0x4483e04, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorrq_u64, addr 0x4483e14, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vorrq_u8, addr 0x4483de4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vorrq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadal_s16, addr 0x448496c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadal_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadal_s32, addr 0x44849dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadal_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadal_s8, addr 0x44848fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadal_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadal_u16, addr 0x4484abc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadal_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadal_u32, addr 0x4484b2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadal_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadal_u8, addr 0x4484a4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadal_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadalq_s16, addr 0x44849a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpadalq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadalq_s32, addr 0x4484a14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpadalq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadalq_s8, addr 0x4484934, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpadalq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadalq_u16, addr 0x4484af4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpadalq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadalq_u32, addr 0x4484b64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpadalq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadalq_u8, addr 0x4484a84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpadalq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadd_f32, addr 0x4484624, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadd_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadd_s16, addr 0x448459c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadd_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadd_s32, addr 0x44845d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadd_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadd_s8, addr 0x4484564, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadd_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadd_u16, addr 0x4484614, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadd_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadd_u32, addr 0x448461c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadd_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpadd_u8, addr 0x448460c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpadd_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpaddd_f64, addr 0x4491c3c, size 0x38, virtual false, abstract: false, final false
static inline double_t vpaddd_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddd_s64, addr 0x4491b94, size 0x38, virtual false, abstract: false, final false
static inline int64_t vpaddd_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddd_u64, addr 0x4491bcc, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vpaddd_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddl_s16, addr 0x44846cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpaddl_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpaddl_s32, addr 0x448473c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpaddl_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpaddl_s8, addr 0x448465c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpaddl_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpaddl_u16, addr 0x448481c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpaddl_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpaddl_u32, addr 0x448488c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpaddl_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpaddl_u8, addr 0x44847ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpaddl_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpaddlq_s16, addr 0x4484704, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddlq_s32, addr 0x4484774, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddlq_s8, addr 0x4484694, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddlq_u16, addr 0x4484854, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddlq_u32, addr 0x44848c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddlq_u8, addr 0x44847e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddlq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpaddq_f32, addr 0x4491654, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_f64, addr 0x449168c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_s16, addr 0x449158c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_s32, addr 0x44915c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_s64, addr 0x44915fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_s8, addr 0x4491554, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_u16, addr 0x449163c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_u32, addr 0x4491644, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_u64, addr 0x449164c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpaddq_u8, addr 0x4491634, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpaddq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpadds_f32, addr 0x4491c04, size 0x38, virtual false, abstract: false, final false
static inline float_t vpadds_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpmax_f32, addr 0x4484cec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmax_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmax_s16, addr 0x4484bd4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmax_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmax_s32, addr 0x4484c0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmax_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmax_s8, addr 0x4484b9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmax_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmax_u16, addr 0x4484c7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmax_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmax_u32, addr 0x4484cb4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmax_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmax_u8, addr 0x4484c44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmax_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmaxnm_f32, addr 0x4491a44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmaxnm_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmaxnmq_f32, addr 0x4491a7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxnmq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxnmq_f64, addr 0x4491ab4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxnmq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxnmqd_f64, addr 0x4491d8c, size 0x38, virtual false, abstract: false, final false
static inline double_t vpmaxnmqd_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpmaxnms_f32, addr 0x4491d54, size 0x38, virtual false, abstract: false, final false
static inline float_t vpmaxnms_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpmaxq_f32, addr 0x4491814, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxq_f64, addr 0x449184c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxq_s16, addr 0x44916fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxq_s32, addr 0x4491734, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxq_s8, addr 0x44916c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxq_u16, addr 0x44917a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxq_u32, addr 0x44917dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxq_u8, addr 0x449176c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpmaxq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpmaxqd_f64, addr 0x4491cac, size 0x38, virtual false, abstract: false, final false
static inline double_t vpmaxqd_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpmaxs_f32, addr 0x4491c74, size 0x38, virtual false, abstract: false, final false
static inline float_t vpmaxs_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpmin_f32, addr 0x4484e74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmin_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmin_s16, addr 0x4484d5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmin_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmin_s32, addr 0x4484d94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmin_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmin_s8, addr 0x4484d24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmin_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmin_u16, addr 0x4484e04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmin_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmin_u32, addr 0x4484e3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmin_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpmin_u8, addr 0x4484dcc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpmin_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpminnm_f32, addr 0x4491aec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vpminnm_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vpminnmq_f32, addr 0x4491b24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminnmq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminnmq_f64, addr 0x4491b5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminnmq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminnmqd_f64, addr 0x4491dfc, size 0x38, virtual false, abstract: false, final false
static inline double_t vpminnmqd_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpminnms_f32, addr 0x4491dc4, size 0x38, virtual false, abstract: false, final false
static inline float_t vpminnms_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vpminq_f32, addr 0x44919d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminq_f64, addr 0x4491a0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminq_s16, addr 0x44918bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminq_s32, addr 0x44918f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminq_s8, addr 0x4491884, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminq_u16, addr 0x4491964, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminq_u32, addr 0x449199c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminq_u8, addr 0x449192c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vpminq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vpminqd_f64, addr 0x4491d1c, size 0x38, virtual false, abstract: false, final false
static inline double_t vpminqd_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vpmins_f32, addr 0x4491ce4, size 0x38, virtual false, abstract: false, final false
static inline float_t vpmins_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqabs_s16, addr 0x44831bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqabs_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqabs_s32, addr 0x448322c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqabs_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqabs_s64, addr 0x448fc00, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqabs_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqabs_s8, addr 0x448314c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqabs_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqabsb_s8, addr 0x448fc70, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqabsb_s8(int8_t  a0) ;

/// @brief Method vqabsd_s64, addr 0x448fd18, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqabsd_s64(int64_t  a0) ;

/// @brief Method vqabsh_s16, addr 0x448fca8, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqabsh_s16(int16_t  a0) ;

/// @brief Method vqabsq_s16, addr 0x44831f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqabsq_s32, addr 0x4483264, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqabsq_s64, addr 0x448fc38, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqabsq_s8, addr 0x4483184, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqabsq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqabss_s32, addr 0x448fce0, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqabss_s32(int32_t  a0) ;

/// @brief Method vqadd_s16, addr 0x447a21c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqadd_s32, addr 0x447a28c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqadd_s64, addr 0x447a2fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqadd_s8, addr 0x447a1ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqadd_u16, addr 0x447a3dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqadd_u32, addr 0x447a44c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqadd_u64, addr 0x447a4bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqadd_u8, addr 0x447a36c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqadd_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqaddb_s8, addr 0x448610c, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqaddb_s8(int8_t  a0, int8_t  a1) ;

/// @brief Method vqaddb_u8, addr 0x44861ec, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqaddb_u8(uint8_t  a0, uint8_t  a1) ;

/// @brief Method vqaddd_s64, addr 0x44861b4, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqaddd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vqaddd_u64, addr 0x4486294, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vqaddd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vqaddh_s16, addr 0x4486144, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqaddh_s16(int16_t  a0, int16_t  a1) ;

/// @brief Method vqaddh_u16, addr 0x4486224, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqaddh_u16(uint16_t  a0, uint16_t  a1) ;

/// @brief Method vqaddq_s16, addr 0x447a254, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqaddq_s32, addr 0x447a2c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqaddq_s64, addr 0x447a334, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqaddq_s8, addr 0x447a1e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqaddq_u16, addr 0x447a414, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqaddq_u32, addr 0x447a484, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqaddq_u64, addr 0x447a4f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqaddq_u8, addr 0x447a3a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqaddq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqadds_s32, addr 0x448617c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqadds_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqadds_u32, addr 0x448625c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqadds_u32(uint32_t  a0, uint32_t  a1) ;

/// @brief Method vqdmlal_high_lane_s16, addr 0x448e1e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlal_high_lane_s32, addr 0x448e21c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlal_high_laneq_s16, addr 0x448e334, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlal_high_laneq_s32, addr 0x448e36c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlal_high_n_s16, addr 0x448f928, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int16_t  a2) ;

/// @brief Method vqdmlal_high_n_s32, addr 0x448f960, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmlal_high_s16, addr 0x44878fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqdmlal_high_s32, addr 0x4487934, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqdmlal_lane_s16, addr 0x4481a1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlal_lane_s32, addr 0x4481a54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlal_laneq_s16, addr 0x448e254, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlal_laneq_s32, addr 0x448e28c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlal_n_s16, addr 0x4482b9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int16_t  a2) ;

/// @brief Method vqdmlal_n_s32, addr 0x4482bd4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmlal_s16, addr 0x447b1bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqdmlal_s32, addr 0x447b1f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlal_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqdmlalh_lane_s16, addr 0x448e174, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmlalh_lane_s16(int32_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlalh_laneq_s16, addr 0x448e2c4, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmlalh_laneq_s16(int32_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlalh_s16, addr 0x448788c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmlalh_s16(int32_t  a0, int16_t  a1, int16_t  a2) ;

/// @brief Method vqdmlals_lane_s32, addr 0x448e1ac, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqdmlals_lane_s32(int64_t  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlals_laneq_s32, addr 0x448e2fc, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqdmlals_laneq_s32(int64_t  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlals_s32, addr 0x44878c4, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqdmlals_s32(int64_t  a0, int32_t  a1, int32_t  a2) ;

/// @brief Method vqdmlsl_high_lane_s16, addr 0x448e8e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_high_lane_s32, addr 0x448e91c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_high_laneq_s16, addr 0x448ea34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_high_laneq_s32, addr 0x448ea6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_high_n_s16, addr 0x448fa78, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int16_t  a2) ;

/// @brief Method vqdmlsl_high_n_s32, addr 0x448fab0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmlsl_high_s16, addr 0x44879dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqdmlsl_high_s32, addr 0x4487a14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqdmlsl_lane_s16, addr 0x4481d9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_lane_s32, addr 0x4481dd4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_laneq_s16, addr 0x448e954, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_laneq_s32, addr 0x448e98c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlsl_n_s16, addr 0x4482f1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int16_t  a2) ;

/// @brief Method vqdmlsl_n_s32, addr 0x4482f54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmlsl_s16, addr 0x447b22c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqdmlsl_s32, addr 0x447b264, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmlsl_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqdmlslh_lane_s16, addr 0x448e874, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmlslh_lane_s16(int32_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlslh_laneq_s16, addr 0x448e9c4, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmlslh_laneq_s16(int32_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlslh_s16, addr 0x448796c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmlslh_s16(int32_t  a0, int16_t  a1, int16_t  a2) ;

/// @brief Method vqdmlsls_lane_s32, addr 0x448e8ac, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqdmlsls_lane_s32(int64_t  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqdmlsls_laneq_s32, addr 0x448e9fc, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqdmlsls_laneq_s32(int64_t  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqdmlsls_s32, addr 0x44879a4, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqdmlsls_s32(int64_t  a0, int32_t  a1, int32_t  a2) ;

/// @brief Method vqdmulh_lane_s16, addr 0x44825ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmulh_lane_s32, addr 0x448265c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmulh_laneq_s16, addr 0x448f538, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmulh_laneq_s32, addr 0x448f5a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmulh_n_s16, addr 0x448250c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_n_s16(::Unity::Burst::Intrinsics::v64  a0, int16_t  a1) ;

/// @brief Method vqdmulh_n_s32, addr 0x448257c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqdmulh_s16, addr 0x447affc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqdmulh_s32, addr 0x447b06c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqdmulh_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqdmulhh_lane_s16, addr 0x448f4c8, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqdmulhh_lane_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmulhh_laneq_s16, addr 0x448f618, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqdmulhh_laneq_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmulhh_s16, addr 0x44877ac, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqdmulhh_s16(int16_t  a0, int16_t  a1) ;

/// @brief Method vqdmulhq_lane_s16, addr 0x4482624, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmulhq_lane_s32, addr 0x4482694, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmulhq_laneq_s16, addr 0x448f570, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmulhq_laneq_s32, addr 0x448f5e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmulhq_n_s16, addr 0x4482544, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int16_t  a1) ;

/// @brief Method vqdmulhq_n_s32, addr 0x44825b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqdmulhq_s16, addr 0x447b034, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqdmulhq_s32, addr 0x447b0a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmulhq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqdmulhs_lane_s32, addr 0x448f500, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmulhs_lane_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmulhs_laneq_s32, addr 0x448f650, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmulhs_laneq_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmulhs_s32, addr 0x44877e4, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmulhs_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqdmull_high_lane_s16, addr 0x448f308, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmull_high_lane_s32, addr 0x448f340, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmull_high_laneq_s16, addr 0x448f458, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmull_high_laneq_s32, addr 0x448f490, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmull_high_n_s16, addr 0x448f228, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_n_s16(::Unity::Burst::Intrinsics::v128  a0, int16_t  a1) ;

/// @brief Method vqdmull_high_n_s32, addr 0x448f260, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqdmull_high_s16, addr 0x4487c0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqdmull_high_s32, addr 0x4487c44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqdmull_lane_s16, addr 0x448249c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmull_lane_s32, addr 0x44824d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmull_laneq_s16, addr 0x448f378, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmull_laneq_s32, addr 0x448f3b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmull_n_s16, addr 0x448242c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_n_s16(::Unity::Burst::Intrinsics::v64  a0, int16_t  a1) ;

/// @brief Method vqdmull_n_s32, addr 0x4482464, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqdmull_s16, addr 0x447b3ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqdmull_s32, addr 0x447b424, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqdmull_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqdmullh_lane_s16, addr 0x448f298, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmullh_lane_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmullh_laneq_s16, addr 0x448f3e8, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmullh_laneq_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmullh_s16, addr 0x4487b9c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqdmullh_s16(int16_t  a0, int16_t  a1) ;

/// @brief Method vqdmulls_lane_s32, addr 0x448f2d0, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqdmulls_lane_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqdmulls_laneq_s32, addr 0x448f420, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqdmulls_laneq_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqdmulls_s32, addr 0x4487bd4, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqdmulls_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqmovn_high_s16, addr 0x448da04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovn_high_s32, addr 0x448da3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovn_high_s64, addr 0x448da74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovn_high_u16, addr 0x448daac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovn_high_u32, addr 0x448dae4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovn_high_u64, addr 0x448db1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovn_high_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovn_s16, addr 0x4481514, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovn_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovn_s32, addr 0x448154c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovn_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovn_s64, addr 0x4481584, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovn_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovn_u16, addr 0x44815bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovn_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovn_u32, addr 0x44815f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovn_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovn_u64, addr 0x448162c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovn_u64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovnd_s64, addr 0x448d924, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqmovnd_s64(int64_t  a0) ;

/// @brief Method vqmovnd_u64, addr 0x448d9cc, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqmovnd_u64(uint64_t  a0) ;

/// @brief Method vqmovnh_s16, addr 0x448d8b4, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqmovnh_s16(int16_t  a0) ;

/// @brief Method vqmovnh_u16, addr 0x448d95c, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqmovnh_u16(uint16_t  a0) ;

/// @brief Method vqmovns_s32, addr 0x448d8ec, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqmovns_s32(int32_t  a0) ;

/// @brief Method vqmovns_u32, addr 0x448d994, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqmovns_u32(uint32_t  a0) ;

/// @brief Method vqmovun_high_s16, addr 0x448dbfc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovun_high_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovun_high_s32, addr 0x448dc34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovun_high_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovun_high_s64, addr 0x448dc6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqmovun_high_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqmovun_s16, addr 0x4481664, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovun_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovun_s32, addr 0x448169c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovun_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovun_s64, addr 0x44816d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqmovun_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqmovund_s64, addr 0x448dbc4, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqmovund_s64(int64_t  a0) ;

/// @brief Method vqmovunh_s16, addr 0x448db54, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqmovunh_s16(int16_t  a0) ;

/// @brief Method vqmovuns_s32, addr 0x448db8c, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqmovuns_s32(int32_t  a0) ;

/// @brief Method vqneg_s16, addr 0x44834cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqneg_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqneg_s32, addr 0x448353c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqneg_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqneg_s64, addr 0x448fe68, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqneg_s64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqneg_s8, addr 0x448345c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqneg_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vqnegb_s8, addr 0x448fed8, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqnegb_s8(int8_t  a0) ;

/// @brief Method vqnegd_s64, addr 0x448ff80, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqnegd_s64(int64_t  a0) ;

/// @brief Method vqnegh_s16, addr 0x448ff10, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqnegh_s16(int16_t  a0) ;

/// @brief Method vqnegq_s16, addr 0x4483504, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqnegq_s32, addr 0x4483574, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqnegq_s64, addr 0x448fea0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqnegq_s8, addr 0x4483494, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqnegq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vqnegs_s32, addr 0x448ff48, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqnegs_s32(int32_t  a0) ;

/// @brief Method vqrdmlah_lane_s16, addr 0x4494458, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlah_lane_s32, addr 0x4494538, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlah_laneq_s16, addr 0x44944c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlah_laneq_s32, addr 0x44945a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlah_s16, addr 0x4494298, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqrdmlah_s32, addr 0x44942d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlah_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqrdmlahh_lane_s16, addr 0x44948b8, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrdmlahh_lane_s16(int16_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlahh_laneq_s16, addr 0x44948f0, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrdmlahh_laneq_s16(int16_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlahh_s16, addr 0x44947d8, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrdmlahh_s16(int16_t  a0, int16_t  a1, int16_t  a2) ;

/// @brief Method vqrdmlahq_lane_s16, addr 0x4494490, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlahq_lane_s32, addr 0x4494570, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlahq_laneq_s16, addr 0x4494500, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlahq_laneq_s32, addr 0x44945e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlahq_s16, addr 0x4494308, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqrdmlahq_s32, addr 0x4494340, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlahq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqrdmlahs_lane_s32, addr 0x4494928, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqrdmlahs_lane_s32(int32_t  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlahs_s32, addr 0x4494810, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqrdmlahs_s32(int32_t  a0, int32_t  a1, int32_t  a2) ;

/// @brief Method vqrdmlsh_lane_s16, addr 0x4494618, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlsh_lane_s32, addr 0x44946f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlsh_laneq_s16, addr 0x4494688, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlsh_laneq_s32, addr 0x4494768, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlsh_s16, addr 0x4494378, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqrdmlsh_s32, addr 0x44943b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmlsh_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqrdmlshh_lane_s16, addr 0x4494960, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrdmlshh_lane_s16(int16_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlshh_laneq_s16, addr 0x4494998, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrdmlshh_laneq_s16(int16_t  a0, int16_t  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlshh_s16, addr 0x4494848, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrdmlshh_s16(int16_t  a0, int16_t  a1, int16_t  a2) ;

/// @brief Method vqrdmlshq_lane_s16, addr 0x4494650, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlshq_lane_s32, addr 0x4494730, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlshq_laneq_s16, addr 0x44946c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlshq_laneq_s32, addr 0x44947a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2, int32_t  a3) ;

/// @brief Method vqrdmlshq_s16, addr 0x44943e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqrdmlshq_s32, addr 0x4494420, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmlshq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqrdmlshs_lane_s32, addr 0x44949d0, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqrdmlshs_lane_s32(int32_t  a0, int32_t  a1, ::Unity::Burst::Intrinsics::v64  a2, int32_t  a3) ;

/// @brief Method vqrdmlshs_s32, addr 0x4494880, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqrdmlshs_s32(int32_t  a0, int32_t  a1, int32_t  a2) ;

/// @brief Method vqrdmulh_lane_s16, addr 0x44827ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_lane_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqrdmulh_lane_s32, addr 0x448281c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_lane_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqrdmulh_laneq_s16, addr 0x448f6f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_laneq_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrdmulh_laneq_s32, addr 0x448f768, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_laneq_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrdmulh_n_s16, addr 0x44826cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_n_s16(::Unity::Burst::Intrinsics::v64  a0, int16_t  a1) ;

/// @brief Method vqrdmulh_n_s32, addr 0x448273c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqrdmulh_s16, addr 0x447b0dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrdmulh_s32, addr 0x447b14c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrdmulh_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrdmulhh_lane_s16, addr 0x448f688, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrdmulhh_lane_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqrdmulhh_laneq_s16, addr 0x448f7d8, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrdmulhh_laneq_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrdmulhh_s16, addr 0x448781c, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrdmulhh_s16(int16_t  a0, int16_t  a1) ;

/// @brief Method vqrdmulhq_lane_s16, addr 0x44827e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_lane_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqrdmulhq_lane_s32, addr 0x4482854, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_lane_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqrdmulhq_laneq_s16, addr 0x448f730, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_laneq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrdmulhq_laneq_s32, addr 0x448f7a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_laneq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrdmulhq_n_s16, addr 0x4482704, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int16_t  a1) ;

/// @brief Method vqrdmulhq_n_s32, addr 0x4482774, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrdmulhq_s16, addr 0x447b114, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrdmulhq_s32, addr 0x447b184, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrdmulhq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrdmulhs_lane_s32, addr 0x448f6c0, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqrdmulhs_lane_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vqrdmulhs_laneq_s32, addr 0x448f810, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqrdmulhs_laneq_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrdmulhs_s32, addr 0x4487854, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqrdmulhs_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqrshl_s16, addr 0x447ebdc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshl_s32, addr 0x447ec4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshl_s64, addr 0x447ecbc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshl_s8, addr 0x447eb6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshl_u16, addr 0x447ed9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshl_u32, addr 0x447ee0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshl_u64, addr 0x447ee7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshl_u8, addr 0x447ed2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqrshlb_s8, addr 0x448abdc, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqrshlb_s8(int8_t  a0, int8_t  a1) ;

/// @brief Method vqrshlb_u8, addr 0x448acbc, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqrshlb_u8(uint8_t  a0, int8_t  a1) ;

/// @brief Method vqrshld_s64, addr 0x448ac84, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqrshld_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vqrshld_u64, addr 0x448ad64, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vqrshld_u64(uint64_t  a0, int64_t  a1) ;

/// @brief Method vqrshlh_s16, addr 0x448ac14, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrshlh_s16(int16_t  a0, int16_t  a1) ;

/// @brief Method vqrshlh_u16, addr 0x448acf4, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqrshlh_u16(uint16_t  a0, int16_t  a1) ;

/// @brief Method vqrshlq_s16, addr 0x447ec14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshlq_s32, addr 0x447ec84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshlq_s64, addr 0x447ecf4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshlq_s8, addr 0x447eba4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshlq_u16, addr 0x447edd4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshlq_u32, addr 0x447ee44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshlq_u64, addr 0x447eeb4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshlq_u8, addr 0x447ed64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshlq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqrshls_s32, addr 0x448ac4c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqrshls_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqrshls_u32, addr 0x448ad2c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqrshls_u32(uint32_t  a0, int32_t  a1) ;

/// @brief Method vqrshrn_high_n_s16, addr 0x448ba84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrn_high_n_s32, addr 0x448babc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrn_high_n_s64, addr 0x448baf4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrn_high_n_u16, addr 0x448bb2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrn_high_n_u32, addr 0x448bb64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrn_high_n_u64, addr 0x448bb9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrn_high_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrn_n_s16, addr 0x4480524, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrn_n_s32, addr 0x448055c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrn_n_s64, addr 0x4480594, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrn_n_u16, addr 0x44805cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrn_n_u32, addr 0x4480604, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrn_n_u64, addr 0x448063c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrn_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrnd_n_s64, addr 0x448b9a4, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqrshrnd_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vqrshrnd_n_u64, addr 0x448ba4c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqrshrnd_n_u64(uint64_t  a0, int32_t  a1) ;

/// @brief Method vqrshrnh_n_s16, addr 0x448b934, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqrshrnh_n_s16(int16_t  a0, int32_t  a1) ;

/// @brief Method vqrshrnh_n_u16, addr 0x448b9dc, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqrshrnh_n_u16(uint16_t  a0, int32_t  a1) ;

/// @brief Method vqrshrns_n_s32, addr 0x448b96c, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqrshrns_n_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqrshrns_n_u32, addr 0x448ba14, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqrshrns_n_u32(uint32_t  a0, int32_t  a1) ;

/// @brief Method vqrshrun_high_n_s16, addr 0x448b49c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrun_high_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrun_high_n_s32, addr 0x448b4d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrun_high_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrun_high_n_s64, addr 0x448b50c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqrshrun_high_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqrshrun_n_s16, addr 0x44801dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrun_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrun_n_s32, addr 0x4480214, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrun_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrun_n_s64, addr 0x448024c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqrshrun_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqrshrund_n_s64, addr 0x448b464, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqrshrund_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vqrshrunh_n_s16, addr 0x448b3f4, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqrshrunh_n_s16(int16_t  a0, int32_t  a1) ;

/// @brief Method vqrshruns_n_s32, addr 0x448b42c, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqrshruns_n_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqshl_n_s16, addr 0x447fc94, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_n_s32, addr 0x447fccc, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_n_s64, addr 0x447fd04, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_n_s8, addr 0x447fc5c, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_n_u16, addr 0x447fd78, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_n_u32, addr 0x447fdb0, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_n_u64, addr 0x447fde8, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_n_u8, addr 0x447fd40, size 0x18, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_n_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshl_s16, addr 0x447e4dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshl_s32, addr 0x447e54c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshl_s64, addr 0x447e5bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshl_s8, addr 0x447e46c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshl_u16, addr 0x447e69c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshl_u32, addr 0x447e70c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshl_u64, addr 0x447e77c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshl_u8, addr 0x447e62c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqshlb_n_s8, addr 0x448aeb4, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqshlb_n_s8(int8_t  a0, int32_t  a1) ;

/// @brief Method vqshlb_n_u8, addr 0x448af94, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqshlb_n_u8(uint8_t  a0, int32_t  a1) ;

/// @brief Method vqshlb_s8, addr 0x448a9ac, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqshlb_s8(int8_t  a0, int8_t  a1) ;

/// @brief Method vqshlb_u8, addr 0x448aa8c, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqshlb_u8(uint8_t  a0, int8_t  a1) ;

/// @brief Method vqshld_n_s64, addr 0x448af5c, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqshld_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vqshld_n_u64, addr 0x448b03c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vqshld_n_u64(uint64_t  a0, int32_t  a1) ;

/// @brief Method vqshld_s64, addr 0x448aa54, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqshld_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vqshld_u64, addr 0x448ab34, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vqshld_u64(uint64_t  a0, int64_t  a1) ;

/// @brief Method vqshlh_n_s16, addr 0x448aeec, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqshlh_n_s16(int16_t  a0, int32_t  a1) ;

/// @brief Method vqshlh_n_u16, addr 0x448afcc, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqshlh_n_u16(uint16_t  a0, int32_t  a1) ;

/// @brief Method vqshlh_s16, addr 0x448a9e4, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqshlh_s16(int16_t  a0, int16_t  a1) ;

/// @brief Method vqshlh_u16, addr 0x448aac4, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqshlh_u16(uint16_t  a0, int16_t  a1) ;

/// @brief Method vqshlq_n_s16, addr 0x447fcac, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_n_s32, addr 0x447fce4, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_n_s64, addr 0x447fd20, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_n_s8, addr 0x447fc74, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_n_u16, addr 0x447fd90, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_n_u32, addr 0x447fdc8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_n_u64, addr 0x447fe04, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_n_u8, addr 0x447fd58, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_n_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlq_s16, addr 0x447e514, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshlq_s32, addr 0x447e584, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshlq_s64, addr 0x447e5f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshlq_s8, addr 0x447e4a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshlq_u16, addr 0x447e6d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshlq_u32, addr 0x447e744, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshlq_u64, addr 0x447e7b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshlq_u8, addr 0x447e664, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshlq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqshls_n_s32, addr 0x448af24, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqshls_n_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqshls_n_u32, addr 0x448b004, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqshls_n_u32(uint32_t  a0, int32_t  a1) ;

/// @brief Method vqshls_s32, addr 0x448aa1c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqshls_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqshls_u32, addr 0x448aafc, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqshls_u32(uint32_t  a0, int32_t  a1) ;

/// @brief Method vqshlu_n_s16, addr 0x447fe94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshlu_n_s32, addr 0x447ff04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshlu_n_s64, addr 0x447ff74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshlu_n_s8, addr 0x447fe24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshlu_n_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vqshlub_n_s8, addr 0x448b074, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqshlub_n_s8(int8_t  a0, int32_t  a1) ;

/// @brief Method vqshlud_n_s64, addr 0x448b11c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vqshlud_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vqshluh_n_s16, addr 0x448b0ac, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqshluh_n_s16(int16_t  a0, int32_t  a1) ;

/// @brief Method vqshluq_n_s16, addr 0x447fecc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshluq_n_s32, addr 0x447ff3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshluq_n_s64, addr 0x447ffac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshluq_n_s8, addr 0x447fe5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshluq_n_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshlus_n_s32, addr 0x448b0e4, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqshlus_n_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqshrn_high_n_s16, addr 0x448b694, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrn_high_n_s32, addr 0x448b6cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrn_high_n_s64, addr 0x448b704, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrn_high_n_u16, addr 0x448b73c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrn_high_n_u32, addr 0x448b774, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrn_high_n_u64, addr 0x448b7ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrn_high_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrn_n_s16, addr 0x4480284, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrn_n_s32, addr 0x44802bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrn_n_s64, addr 0x44802f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrn_n_u16, addr 0x448032c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrn_n_u32, addr 0x4480364, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrn_n_u64, addr 0x448039c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrn_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrnd_n_s64, addr 0x448b5b4, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqshrnd_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vqshrnd_n_u64, addr 0x448b65c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqshrnd_n_u64(uint64_t  a0, int32_t  a1) ;

/// @brief Method vqshrnh_n_s16, addr 0x448b544, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqshrnh_n_s16(int16_t  a0, int32_t  a1) ;

/// @brief Method vqshrnh_n_u16, addr 0x448b5ec, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqshrnh_n_u16(uint16_t  a0, int32_t  a1) ;

/// @brief Method vqshrns_n_s32, addr 0x448b57c, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqshrns_n_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqshrns_n_u32, addr 0x448b624, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqshrns_n_u32(uint32_t  a0, int32_t  a1) ;

/// @brief Method vqshrun_high_n_s16, addr 0x448b34c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrun_high_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrun_high_n_s32, addr 0x448b384, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrun_high_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrun_high_n_s64, addr 0x448b3bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqshrun_high_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vqshrun_n_s16, addr 0x4480134, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrun_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrun_n_s32, addr 0x448016c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrun_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrun_n_s64, addr 0x44801a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqshrun_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vqshrund_n_s64, addr 0x448b314, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqshrund_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vqshrunh_n_s16, addr 0x448b2a4, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqshrunh_n_s16(int16_t  a0, int32_t  a1) ;

/// @brief Method vqshruns_n_s32, addr 0x448b2dc, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqshruns_n_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqsub_s16, addr 0x447bc7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsub_s32, addr 0x447bcec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsub_s64, addr 0x447bd5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsub_s8, addr 0x447bc0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsub_u16, addr 0x447be3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsub_u32, addr 0x447beac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsub_u64, addr 0x447bf1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsub_u8, addr 0x447bdcc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqsub_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqsubb_s8, addr 0x4487ffc, size 0x38, virtual false, abstract: false, final false
static inline int8_t vqsubb_s8(int8_t  a0, int8_t  a1) ;

/// @brief Method vqsubb_u8, addr 0x44880dc, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vqsubb_u8(uint8_t  a0, uint8_t  a1) ;

/// @brief Method vqsubd_s64, addr 0x44880a4, size 0x38, virtual false, abstract: false, final false
static inline int64_t vqsubd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vqsubd_u64, addr 0x4488184, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vqsubd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vqsubh_s16, addr 0x4488034, size 0x38, virtual false, abstract: false, final false
static inline int16_t vqsubh_s16(int16_t  a0, int16_t  a1) ;

/// @brief Method vqsubh_u16, addr 0x4488114, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vqsubh_u16(uint16_t  a0, uint16_t  a1) ;

/// @brief Method vqsubq_s16, addr 0x447bcb4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubq_s32, addr 0x447bd24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubq_s64, addr 0x447bd94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubq_s8, addr 0x447bc44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubq_u16, addr 0x447be74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubq_u32, addr 0x447bee4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubq_u64, addr 0x447bf54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubq_u8, addr 0x447be04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqsubq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqsubs_s32, addr 0x448806c, size 0x38, virtual false, abstract: false, final false
static inline int32_t vqsubs_s32(int32_t  a0, int32_t  a1) ;

/// @brief Method vqsubs_u32, addr 0x448814c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vqsubs_u32(uint32_t  a0, uint32_t  a1) ;

/// @brief Method vqtbl1_s8, addr 0x44937b8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqtbl1_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqtbl1_u8, addr 0x4493828, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqtbl1_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vqtbl1q_s8, addr 0x44937f0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqtbl1q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqtbl1q_u8, addr 0x4493830, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqtbl1q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vqtbx1_s8, addr 0x4493838, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqtbx1_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqtbx1_u8, addr 0x44938a8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vqtbx1_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vqtbx1q_s8, addr 0x4493870, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqtbx1q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vqtbx1q_u8, addr 0x44938b0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vqtbx1q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vraddhn_high_s16, addr 0x44868cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vraddhn_high_s32, addr 0x4486904, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vraddhn_high_s64, addr 0x448693c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vraddhn_high_u16, addr 0x4486974, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vraddhn_high_u32, addr 0x448697c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vraddhn_high_u64, addr 0x4486984, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vraddhn_high_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vraddhn_s16, addr 0x447a5ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vraddhn_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vraddhn_s32, addr 0x447a624, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vraddhn_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vraddhn_s64, addr 0x447a65c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vraddhn_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vraddhn_u16, addr 0x447a694, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vraddhn_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vraddhn_u32, addr 0x447a69c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vraddhn_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vraddhn_u64, addr 0x447a6a4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vraddhn_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrbit_s8, addr 0x4490c58, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrbit_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrbit_u8, addr 0x4490cc8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrbit_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrbitq_s8, addr 0x4490c90, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrbitq_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrbitq_u8, addr 0x4490cd0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrbitq_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrecpe_f32, addr 0x448396c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrecpe_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrecpe_f64, addr 0x448ffb8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrecpe_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrecpe_u32, addr 0x44838fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrecpe_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrecped_f64, addr 0x4490060, size 0x38, virtual false, abstract: false, final false
static inline double_t vrecped_f64(double_t  a0) ;

/// @brief Method vrecpeq_f32, addr 0x44839a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrecpeq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrecpeq_f64, addr 0x448fff0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrecpeq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrecpeq_u32, addr 0x4483934, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrecpeq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrecpes_f32, addr 0x4490028, size 0x38, virtual false, abstract: false, final false
static inline float_t vrecpes_f32(float_t  a0) ;

/// @brief Method vrecps_f32, addr 0x44839dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrecps_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrecps_f64, addr 0x4490098, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrecps_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrecpsd_f64, addr 0x4490140, size 0x38, virtual false, abstract: false, final false
static inline double_t vrecpsd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vrecpsq_f32, addr 0x4483a14, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrecpsq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrecpsq_f64, addr 0x44900d0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrecpsq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrecpss_f32, addr 0x4490108, size 0x38, virtual false, abstract: false, final false
static inline float_t vrecpss_f32(float_t  a0, float_t  a1) ;

/// @brief Method vrecpxd_f64, addr 0x4493988, size 0x38, virtual false, abstract: false, final false
static inline double_t vrecpxd_f64(double_t  a0) ;

/// @brief Method vrecpxs_f32, addr 0x4493950, size 0x38, virtual false, abstract: false, final false
static inline float_t vrecpxs_f32(float_t  a0) ;

/// @brief Method vrev16_s8, addr 0x44854c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev16_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev16_u8, addr 0x4485534, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev16_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev16q_s8, addr 0x44854fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev16q_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev16q_u8, addr 0x448553c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev16q_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev32_s16, addr 0x4485434, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev32_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev32_s8, addr 0x44853c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev32_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev32_u16, addr 0x44854b4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev32_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev32_u8, addr 0x44854a4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev32_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev32q_s16, addr 0x448546c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev32q_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev32q_s8, addr 0x44853fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev32q_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev32q_u16, addr 0x44854bc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev32q_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev32q_u8, addr 0x44854ac, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev32q_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev64_f32, addr 0x44853b4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev64_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev64_s16, addr 0x44852a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev64_s16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev64_s32, addr 0x4485314, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev64_s32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev64_s8, addr 0x4485234, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev64_s8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev64_u16, addr 0x4485394, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev64_u16(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev64_u32, addr 0x44853a4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev64_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev64_u8, addr 0x4485384, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrev64_u8(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrev64q_f32, addr 0x44853bc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev64q_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev64q_s16, addr 0x44852dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev64q_s16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev64q_s32, addr 0x448534c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev64q_s32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev64q_s8, addr 0x448526c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev64q_s8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev64q_u16, addr 0x448539c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev64q_u16(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev64q_u32, addr 0x44853ac, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev64q_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrev64q_u8, addr 0x448538c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrev64q_u8(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrhadd_s16, addr 0x4479f7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrhadd_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrhadd_s32, addr 0x4479fec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrhadd_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrhadd_s8, addr 0x4479f0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrhadd_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrhadd_u16, addr 0x447a0cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrhadd_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrhadd_u32, addr 0x447a13c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrhadd_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrhadd_u8, addr 0x447a05c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrhadd_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrhaddq_s16, addr 0x4479fb4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrhaddq_s32, addr 0x447a024, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrhaddq_s8, addr 0x4479f44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrhaddq_u16, addr 0x447a104, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrhaddq_u32, addr 0x447a174, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrhaddq_u8, addr 0x447a094, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrhaddq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrnd_f32, addr 0x448d10c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrnd_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrnd_f64, addr 0x448d17c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrnd_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrnda_f32, addr 0x448d4c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrnda_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrnda_f64, addr 0x448d534, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrnda_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndaq_f32, addr 0x448d4fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndaq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndaq_f64, addr 0x448d56c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndaq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndi_f32, addr 0x448d5a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndi_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndi_f64, addr 0x448d614, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndi_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndiq_f32, addr 0x448d5dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndiq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndiq_f64, addr 0x448d64c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndiq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndm_f32, addr 0x448d304, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndm_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndm_f64, addr 0x448d374, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndm_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndmq_f32, addr 0x448d33c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndmq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndmq_f64, addr 0x448d3ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndmq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndn_f32, addr 0x448d1ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndn_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndn_f64, addr 0x448d25c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndn_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndnq_f32, addr 0x448d224, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndnq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndnq_f64, addr 0x448d294, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndnq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndns_f32, addr 0x448d2cc, size 0x38, virtual false, abstract: false, final false
static inline float_t vrndns_f32(float_t  a0) ;

/// @brief Method vrndp_f32, addr 0x448d3e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndp_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndp_f64, addr 0x448d454, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndp_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndpq_f32, addr 0x448d41c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndpq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndpq_f64, addr 0x448d48c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndpq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndq_f32, addr 0x448d144, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndq_f64, addr 0x448d1b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndx_f32, addr 0x448d684, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndx_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndx_f64, addr 0x448d6f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrndx_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrndxq_f32, addr 0x448d6bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndxq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrndxq_f64, addr 0x448d72c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrndxq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrshl_s16, addr 0x447e85c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshl_s32, addr 0x447e8cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshl_s64, addr 0x447e93c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshl_s8, addr 0x447e7ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshl_u16, addr 0x447ea1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshl_u32, addr 0x447ea8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshl_u64, addr 0x447eafc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshl_u8, addr 0x447e9ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrshld_s64, addr 0x448ab6c, size 0x38, virtual false, abstract: false, final false
static inline int64_t vrshld_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vrshld_u64, addr 0x448aba4, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vrshld_u64(uint64_t  a0, int64_t  a1) ;

/// @brief Method vrshlq_s16, addr 0x447e894, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshlq_s32, addr 0x447e904, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshlq_s64, addr 0x447e974, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshlq_s8, addr 0x447e824, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshlq_u16, addr 0x447ea54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshlq_u32, addr 0x447eac4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshlq_u64, addr 0x447eb34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshlq_u8, addr 0x447e9e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshlq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrshr_n_s16, addr 0x447f628, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshr_n_s32, addr 0x447f664, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshr_n_s64, addr 0x447f6a0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshr_n_s8, addr 0x447f5ec, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshr_n_u16, addr 0x447f720, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshr_n_u32, addr 0x447f75c, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshr_n_u64, addr 0x447f798, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshr_n_u8, addr 0x447f6e4, size 0x1c, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshr_n_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vrshrd_n_s64, addr 0x448adbc, size 0x38, virtual false, abstract: false, final false
static inline int64_t vrshrd_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vrshrd_n_u64, addr 0x448adf4, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vrshrd_n_u64(uint64_t  a0, int32_t  a1) ;

/// @brief Method vrshrn_high_n_s16, addr 0x448b7e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrshrn_high_n_s32, addr 0x448b81c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrshrn_high_n_s64, addr 0x448b854, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrshrn_high_n_u16, addr 0x448b88c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrshrn_high_n_u32, addr 0x448b8c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrshrn_high_n_u64, addr 0x448b8fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrn_high_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrshrn_n_s16, addr 0x44803d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrn_n_s32, addr 0x448040c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrn_n_s64, addr 0x4480444, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrn_n_u16, addr 0x448047c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrn_n_u32, addr 0x44804b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrn_n_u64, addr 0x44804ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrshrn_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_s16, addr 0x447f644, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_s32, addr 0x447f680, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_s64, addr 0x447f6c0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_s8, addr 0x447f608, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_u16, addr 0x447f73c, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_u32, addr 0x447f778, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_u64, addr 0x447f7b8, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrshrq_n_u8, addr 0x447f700, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrshrq_n_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vrsqrte_f32, addr 0x4483abc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsqrte_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrsqrte_f64, addr 0x4490258, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsqrte_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrsqrte_u32, addr 0x4483a4c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsqrte_u32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vrsqrted_f64, addr 0x4490300, size 0x38, virtual false, abstract: false, final false
static inline double_t vrsqrted_f64(double_t  a0) ;

/// @brief Method vrsqrteq_f32, addr 0x4483af4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsqrteq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrsqrteq_f64, addr 0x4490290, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsqrteq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrsqrteq_u32, addr 0x4483a84, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsqrteq_u32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vrsqrtes_f32, addr 0x44902c8, size 0x38, virtual false, abstract: false, final false
static inline float_t vrsqrtes_f32(float_t  a0) ;

/// @brief Method vrsqrts_f32, addr 0x4483b2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsqrts_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrsqrts_f64, addr 0x4490338, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsqrts_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vrsqrtsd_f64, addr 0x44903e0, size 0x38, virtual false, abstract: false, final false
static inline double_t vrsqrtsd_f64(double_t  a0, double_t  a1) ;

/// @brief Method vrsqrtsq_f32, addr 0x4483b64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsqrtsq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrsqrtsq_f64, addr 0x4490370, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsqrtsq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrsqrtss_f32, addr 0x44903a8, size 0x38, virtual false, abstract: false, final false
static inline float_t vrsqrtss_f32(float_t  a0, float_t  a1) ;

/// @brief Method vrsra_n_s16, addr 0x447fb7c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsra_n_s32, addr 0x447fb9c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsra_n_s64, addr 0x447fbbc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsra_n_s8, addr 0x447fb5c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsra_n_u16, addr 0x447fbfc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsra_n_u32, addr 0x447fc1c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsra_n_u64, addr 0x447fc3c, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsra_n_u8, addr 0x447fbdc, size 0xc, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsra_n_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vrsrad_n_s64, addr 0x448ae44, size 0x38, virtual false, abstract: false, final false
static inline int64_t vrsrad_n_s64(int64_t  a0, int64_t  a1, int32_t  a2) ;

/// @brief Method vrsrad_n_u64, addr 0x448ae7c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vrsrad_n_u64(uint64_t  a0, uint64_t  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_s16, addr 0x447fb88, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_s32, addr 0x447fba8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_s64, addr 0x447fbc8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_s8, addr 0x447fb68, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_u16, addr 0x447fc08, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_u32, addr 0x447fc28, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_u64, addr 0x447fc48, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsraq_n_u8, addr 0x447fbe8, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsraq_n_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vrsubhn_high_s16, addr 0x448827c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vrsubhn_high_s32, addr 0x44882b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vrsubhn_high_s64, addr 0x44882ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vrsubhn_high_u16, addr 0x4488324, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vrsubhn_high_u32, addr 0x448832c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vrsubhn_high_u64, addr 0x4488334, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vrsubhn_high_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vrsubhn_s16, addr 0x447c04c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrsubhn_s32, addr 0x447c084, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrsubhn_s64, addr 0x447c0bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrsubhn_u16, addr 0x447c0f4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrsubhn_u32, addr 0x447c0fc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vrsubhn_u64, addr 0x447c104, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vrsubhn_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vset_lane_f32, addr 0x4485ae4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_f32(float_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_f64, addr 0x44938f8, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_f64(double_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_s16, addr 0x4485a50, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_s32, addr 0x4485a88, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_s64, addr 0x4485ac0, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s64(int64_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_s8, addr 0x4485a18, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_s8(int8_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_u16, addr 0x4485984, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u16(uint16_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_u32, addr 0x44859bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u32(uint32_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_u64, addr 0x44859f4, size 0x24, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u64(uint64_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vset_lane_u8, addr 0x448594c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vset_lane_u8(uint8_t  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_f32, addr 0x4485cdc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_f32(float_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_f64, addr 0x4493918, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_f64(double_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_s16, addr 0x4485c34, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s16(int16_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_s32, addr 0x4485c6c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s32(int32_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_s64, addr 0x4485ca4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s64(int64_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_s8, addr 0x4485bfc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_s8(int8_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_u16, addr 0x4485b54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u16(uint16_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_u32, addr 0x4485b8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u32(uint32_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_u64, addr 0x4485bc4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u64(uint64_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsetq_lane_u8, addr 0x4485b1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsetq_lane_u8(uint8_t  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsha1cq_u32, addr 0x4493b18, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha1cq_u32(::Unity::Burst::Intrinsics::v128  a0, uint32_t  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsha1h_u32, addr 0x4493bc0, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vsha1h_u32(uint32_t  a0) ;

/// @brief Method vsha1mq_u32, addr 0x4493b88, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha1mq_u32(::Unity::Burst::Intrinsics::v128  a0, uint32_t  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsha1pq_u32, addr 0x4493b50, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha1pq_u32(::Unity::Burst::Intrinsics::v128  a0, uint32_t  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsha1su0q_u32, addr 0x4493bf8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha1su0q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsha1su1q_u32, addr 0x4493c30, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha1su1q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsha256h2q_u32, addr 0x4493ca0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha256h2q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsha256hq_u32, addr 0x4493c68, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha256hq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsha256su0q_u32, addr 0x4493cd8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha256su0q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsha256su1q_u32, addr 0x4493d10, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsha256su1q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vshl_n_s16, addr 0x447f2dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_n_s32, addr 0x447f34c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_n_s64, addr 0x447f3bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_n_s8, addr 0x447f26c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_n_u16, addr 0x447f49c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_n_u32, addr 0x447f50c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_n_u64, addr 0x447f57c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_n_u8, addr 0x447f42c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_n_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshl_s16, addr 0x447e15c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshl_s32, addr 0x447e1cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshl_s64, addr 0x447e23c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshl_s8, addr 0x447e0ec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshl_u16, addr 0x447e31c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshl_u32, addr 0x447e38c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshl_u64, addr 0x447e3fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshl_u8, addr 0x447e2ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vshld_n_s64, addr 0x448adac, size 0x8, virtual false, abstract: false, final false
static inline int64_t vshld_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vshld_n_u64, addr 0x448adb4, size 0x8, virtual false, abstract: false, final false
static inline uint64_t vshld_n_u64(uint64_t  a0, int32_t  a1) ;

/// @brief Method vshld_s64, addr 0x448a93c, size 0x38, virtual false, abstract: false, final false
static inline int64_t vshld_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vshld_u64, addr 0x448a974, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vshld_u64(uint64_t  a0, int64_t  a1) ;

/// @brief Method vshll_high_n_s16, addr 0x448bc0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshll_high_n_s32, addr 0x448bc44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshll_high_n_s8, addr 0x448bbd4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshll_high_n_u16, addr 0x448bcb4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshll_high_n_u32, addr 0x448bcec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshll_high_n_u8, addr 0x448bc7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_high_n_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshll_n_s16, addr 0x44806ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_n_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshll_n_s32, addr 0x44806e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshll_n_s8, addr 0x4480674, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_n_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshll_n_u16, addr 0x4480754, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_n_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshll_n_u32, addr 0x448078c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_n_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshll_n_u8, addr 0x448071c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshll_n_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshlq_n_s16, addr 0x447f314, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_n_s32, addr 0x447f384, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_n_s64, addr 0x447f3f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_n_s8, addr 0x447f2a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_n_u16, addr 0x447f4d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_n_u32, addr 0x447f544, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_n_u64, addr 0x447f5b4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_n_u8, addr 0x447f464, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_n_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshlq_s16, addr 0x447e194, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshlq_s32, addr 0x447e204, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshlq_s64, addr 0x447e274, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshlq_s8, addr 0x447e124, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshlq_u16, addr 0x447e354, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshlq_u32, addr 0x447e3c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshlq_u64, addr 0x447e434, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshlq_u8, addr 0x447e2e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshlq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vshr_n_s16, addr 0x447ef5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshr_n_s32, addr 0x447efcc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshr_n_s64, addr 0x447f03c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshr_n_s8, addr 0x447eeec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_s8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshr_n_u16, addr 0x447f11c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u16(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshr_n_u32, addr 0x447f18c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u32(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshr_n_u64, addr 0x447f1fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u64(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshr_n_u8, addr 0x447f0ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshr_n_u8(::Unity::Burst::Intrinsics::v64  a0, int32_t  a1) ;

/// @brief Method vshrd_n_s64, addr 0x448ad9c, size 0x8, virtual false, abstract: false, final false
static inline int64_t vshrd_n_s64(int64_t  a0, int32_t  a1) ;

/// @brief Method vshrd_n_u64, addr 0x448ada4, size 0x8, virtual false, abstract: false, final false
static inline uint64_t vshrd_n_u64(uint64_t  a0, int32_t  a1) ;

/// @brief Method vshrn_high_n_s16, addr 0x448b154, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vshrn_high_n_s32, addr 0x448b18c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vshrn_high_n_s64, addr 0x448b1c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vshrn_high_n_u16, addr 0x448b1fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vshrn_high_n_u32, addr 0x448b234, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vshrn_high_n_u64, addr 0x448b26c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrn_high_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vshrn_n_s16, addr 0x447ffe4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrn_n_s32, addr 0x448001c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrn_n_s64, addr 0x4480054, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrn_n_u16, addr 0x448008c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrn_n_u32, addr 0x44800c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrn_n_u64, addr 0x44800fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vshrn_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_s16, addr 0x447ef94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_s32, addr 0x447f004, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_s64, addr 0x447f074, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_s8, addr 0x447ef24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_s8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_u16, addr 0x447f154, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u16(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_u32, addr 0x447f1c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u32(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_u64, addr 0x447f234, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u64(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vshrq_n_u8, addr 0x447f0e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vshrq_n_u8(::Unity::Burst::Intrinsics::v128  a0, int32_t  a1) ;

/// @brief Method vsli_n_s16, addr 0x4480bb4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsli_n_s32, addr 0x4480c24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsli_n_s64, addr 0x4480c94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsli_n_s8, addr 0x4480b44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsli_n_u16, addr 0x4480d74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsli_n_u32, addr 0x4480de4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsli_n_u64, addr 0x4480e54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsli_n_u8, addr 0x4480d04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsli_n_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vslid_n_s64, addr 0x448bd94, size 0x38, virtual false, abstract: false, final false
static inline int64_t vslid_n_s64(int64_t  a0, int64_t  a1, int32_t  a2) ;

/// @brief Method vslid_n_u64, addr 0x448bdcc, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vslid_n_u64(uint64_t  a0, uint64_t  a1, int32_t  a2) ;

/// @brief Method vsliq_n_s16, addr 0x4480bec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsliq_n_s32, addr 0x4480c5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsliq_n_s64, addr 0x4480ccc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsliq_n_s8, addr 0x4480b7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsliq_n_u16, addr 0x4480dac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsliq_n_u32, addr 0x4480e1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsliq_n_u64, addr 0x4480e8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsliq_n_u8, addr 0x4480d3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsliq_n_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsqadd_u16, addr 0x44865dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsqadd_u32, addr 0x448664c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsqadd_u64, addr 0x44866bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsqadd_u8, addr 0x448656c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsqadd_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsqaddb_u8, addr 0x448672c, size 0x38, virtual false, abstract: false, final false
static inline uint8_t vsqaddb_u8(uint8_t  a0, int8_t  a1) ;

/// @brief Method vsqaddd_u64, addr 0x44867d4, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vsqaddd_u64(uint64_t  a0, int64_t  a1) ;

/// @brief Method vsqaddh_u16, addr 0x4486764, size 0x38, virtual false, abstract: false, final false
static inline uint16_t vsqaddh_u16(uint16_t  a0, int16_t  a1) ;

/// @brief Method vsqaddq_u16, addr 0x4486614, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsqaddq_u32, addr 0x4486684, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsqaddq_u64, addr 0x44866f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsqaddq_u8, addr 0x44865a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsqaddq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsqadds_u32, addr 0x448679c, size 0x38, virtual false, abstract: false, final false
static inline uint32_t vsqadds_u32(uint32_t  a0, int32_t  a1) ;

/// @brief Method vsqrt_f32, addr 0x4490178, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsqrt_f32(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vsqrt_f64, addr 0x44901e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsqrt_f64(::Unity::Burst::Intrinsics::v64  a0) ;

/// @brief Method vsqrtq_f32, addr 0x44901b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsqrtq_f32(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vsqrtq_f64, addr 0x4490220, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsqrtq_f64(::Unity::Burst::Intrinsics::v128  a0) ;

/// @brief Method vsra_n_s16, addr 0x447f84c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsra_n_s32, addr 0x447f8bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsra_n_s64, addr 0x447f92c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsra_n_s8, addr 0x447f7dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsra_n_u16, addr 0x447fa0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsra_n_u32, addr 0x447fa7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsra_n_u64, addr 0x447faec, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsra_n_u8, addr 0x447f99c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsra_n_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsrad_n_s64, addr 0x448ae2c, size 0xc, virtual false, abstract: false, final false
static inline int64_t vsrad_n_s64(int64_t  a0, int64_t  a1, int32_t  a2) ;

/// @brief Method vsrad_n_u64, addr 0x448ae38, size 0xc, virtual false, abstract: false, final false
static inline uint64_t vsrad_n_u64(uint64_t  a0, uint64_t  a1, int32_t  a2) ;

/// @brief Method vsraq_n_s16, addr 0x447f884, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsraq_n_s32, addr 0x447f8f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsraq_n_s64, addr 0x447f964, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsraq_n_s8, addr 0x447f814, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsraq_n_u16, addr 0x447fa44, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsraq_n_u32, addr 0x447fab4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsraq_n_u64, addr 0x447fb24, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsraq_n_u8, addr 0x447f9d4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsraq_n_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsri_n_s16, addr 0x4480834, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsri_n_s32, addr 0x44808a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsri_n_s64, addr 0x4480914, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsri_n_s8, addr 0x44807c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsri_n_u16, addr 0x44809f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsri_n_u32, addr 0x4480a64, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsri_n_u64, addr 0x4480ad4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsri_n_u8, addr 0x4480984, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsri_n_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, int32_t  a2) ;

/// @brief Method vsrid_n_s64, addr 0x448bd24, size 0x38, virtual false, abstract: false, final false
static inline int64_t vsrid_n_s64(int64_t  a0, int64_t  a1, int32_t  a2) ;

/// @brief Method vsrid_n_u64, addr 0x448bd5c, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vsrid_n_u64(uint64_t  a0, uint64_t  a1, int32_t  a2) ;

/// @brief Method vsriq_n_s16, addr 0x448086c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsriq_n_s32, addr 0x44808dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsriq_n_s64, addr 0x448094c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsriq_n_s8, addr 0x44807fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsriq_n_u16, addr 0x4480a2c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsriq_n_u32, addr 0x4480a9c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsriq_n_u64, addr 0x4480b0c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vsriq_n_u8, addr 0x44809bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsriq_n_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1, int32_t  a2) ;

/// @brief Method vst1_f32, addr 0x4495964, size 0x8, virtual false, abstract: false, final false
static inline void vst1_f32(::cordl_internals::Ptr<float_t>  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_f64, addr 0x4495974, size 0x8, virtual false, abstract: false, final false
static inline void vst1_f64(::cordl_internals::Ptr<double_t>  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_s16, addr 0x44958f4, size 0x8, virtual false, abstract: false, final false
static inline void vst1_s16(::cordl_internals::Ptr<int16_t>  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_s32, addr 0x4495904, size 0x8, virtual false, abstract: false, final false
static inline void vst1_s32(::cordl_internals::Ptr<int32_t>  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_s64, addr 0x4495914, size 0x8, virtual false, abstract: false, final false
static inline void vst1_s64(::cordl_internals::Ptr<int64_t>  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_s8, addr 0x44958e4, size 0x8, virtual false, abstract: false, final false
static inline void vst1_s8(::cordl_internals::Ptr<int8_t>  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_u16, addr 0x4495934, size 0x8, virtual false, abstract: false, final false
static inline void vst1_u16(::cordl_internals::Ptr<uint16_t>  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_u32, addr 0x4495944, size 0x8, virtual false, abstract: false, final false
static inline void vst1_u32(::cordl_internals::Ptr<uint32_t>  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_u64, addr 0x4495954, size 0x8, virtual false, abstract: false, final false
static inline void vst1_u64(::cordl_internals::Ptr<uint64_t>  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1_u8, addr 0x4495924, size 0x8, virtual false, abstract: false, final false
static inline void vst1_u8(::cordl_internals::Ptr<uint8_t>  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vst1q_f32, addr 0x449596c, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_f32(::cordl_internals::Ptr<float_t>  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_f64, addr 0x449597c, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_f64(::cordl_internals::Ptr<double_t>  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_s16, addr 0x44958fc, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_s16(::cordl_internals::Ptr<int16_t>  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_s32, addr 0x449590c, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_s32(::cordl_internals::Ptr<int32_t>  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_s64, addr 0x449591c, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_s64(::cordl_internals::Ptr<int64_t>  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_s8, addr 0x44958ec, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_s8(::cordl_internals::Ptr<int8_t>  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_u16, addr 0x449593c, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_u16(::cordl_internals::Ptr<uint16_t>  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_u32, addr 0x449594c, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_u32(::cordl_internals::Ptr<uint32_t>  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_u64, addr 0x449595c, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_u64(::cordl_internals::Ptr<uint64_t>  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vst1q_u8, addr 0x449592c, size 0x8, virtual false, abstract: false, final false
static inline void vst1q_u8(::cordl_internals::Ptr<uint8_t>  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsub_f32, addr 0x447b65c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_f64, addr 0x4487c7c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_f64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_s16, addr 0x447b4cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_s32, addr 0x447b53c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_s64, addr 0x447b5ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_s8, addr 0x447b45c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_u16, addr 0x447b62c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_u32, addr 0x447b63c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_u64, addr 0x447b64c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsub_u8, addr 0x447b61c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsub_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubd_s64, addr 0x4487cec, size 0x38, virtual false, abstract: false, final false
static inline int64_t vsubd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vsubd_u64, addr 0x4487d24, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vsubd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vsubhn_high_s16, addr 0x44881bc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsubhn_high_s32, addr 0x44881f4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsubhn_high_s64, addr 0x448822c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsubhn_high_u16, addr 0x4488264, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsubhn_high_u32, addr 0x448826c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsubhn_high_u64, addr 0x4488274, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubhn_high_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v128  a1, ::Unity::Burst::Intrinsics::v128  a2) ;

/// @brief Method vsubhn_s16, addr 0x447bf8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsubhn_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubhn_s32, addr 0x447bfc4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsubhn_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubhn_s64, addr 0x447bffc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsubhn_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubhn_u16, addr 0x447c034, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsubhn_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubhn_u32, addr 0x447c03c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsubhn_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubhn_u64, addr 0x447c044, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vsubhn_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubl_high_s16, addr 0x4487d94, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubl_high_s32, addr 0x4487dcc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubl_high_s8, addr 0x4487d5c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubl_high_u16, addr 0x4487e3c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubl_high_u32, addr 0x4487e74, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubl_high_u8, addr 0x4487e04, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubl_s16, addr 0x447b704, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubl_s32, addr 0x447b73c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubl_s8, addr 0x447b6cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubl_u16, addr 0x447b7ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubl_u32, addr 0x447b7e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubl_u8, addr 0x447b774, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubl_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubq_f32, addr 0x447b694, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_f64, addr 0x4487cb4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_s16, addr 0x447b504, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_s32, addr 0x447b574, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_s64, addr 0x447b5e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_s8, addr 0x447b494, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_u16, addr 0x447b634, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_u32, addr 0x447b644, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_u64, addr 0x447b654, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubq_u8, addr 0x447b624, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubw_high_s16, addr 0x4487ee4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubw_high_s32, addr 0x4487f1c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubw_high_s8, addr 0x4487eac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubw_high_u16, addr 0x4487f8c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubw_high_u32, addr 0x4487fc4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubw_high_u8, addr 0x4487f54, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_high_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vsubw_s16, addr 0x447b854, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubw_s32, addr 0x447b88c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubw_s8, addr 0x447b81c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubw_u16, addr 0x447b8fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubw_u32, addr 0x447b934, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vsubw_u8, addr 0x447b8c4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vsubw_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtbl1_s8, addr 0x4485544, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtbl1_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtbl1_u8, addr 0x448557c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtbl1_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtbx1_s8, addr 0x4485584, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtbx1_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vtbx1_u8, addr 0x44855bc, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtbx1_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1, ::Unity::Burst::Intrinsics::v64  a2) ;

/// @brief Method vtrn1_f32, addr 0x44935c8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn1_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn1_s16, addr 0x4493478, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn1_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn1_s32, addr 0x44934e8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn1_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn1_s8, addr 0x4493408, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn1_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn1_u16, addr 0x44935a0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn1_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn1_u32, addr 0x44935b0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn1_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn1_u8, addr 0x4493590, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn1_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn1q_f32, addr 0x44935d0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_f64, addr 0x44935d8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_s16, addr 0x44934b0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_s32, addr 0x4493520, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_s64, addr 0x4493558, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_s8, addr 0x4493440, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_u16, addr 0x44935a8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_u32, addr 0x44935b8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_u64, addr 0x44935c0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn1q_u8, addr 0x4493598, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn1q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2_f32, addr 0x44937a0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn2_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn2_s16, addr 0x4493650, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn2_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn2_s32, addr 0x44936c0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn2_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn2_s8, addr 0x44935e0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn2_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn2_u16, addr 0x4493778, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn2_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn2_u32, addr 0x4493788, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn2_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn2_u8, addr 0x4493768, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtrn2_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtrn2q_f32, addr 0x44937a8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_f64, addr 0x44937b0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_s16, addr 0x4493688, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_s32, addr 0x44936f8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_s64, addr 0x4493730, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_s8, addr 0x4493618, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_u16, addr 0x4493780, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_u32, addr 0x4493790, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_u64, addr 0x4493798, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtrn2q_u8, addr 0x4493770, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtrn2q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtst_s16, addr 0x447d16c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtst_s32, addr 0x447d1dc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtst_s64, addr 0x448a22c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtst_s8, addr 0x447d0fc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtst_u16, addr 0x447d25c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtst_u32, addr 0x447d26c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtst_u64, addr 0x448a29c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_u64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtst_u8, addr 0x447d24c, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vtst_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vtstd_s64, addr 0x448a2ac, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vtstd_s64(int64_t  a0, int64_t  a1) ;

/// @brief Method vtstd_u64, addr 0x448a2e4, size 0x38, virtual false, abstract: false, final false
static inline uint64_t vtstd_u64(uint64_t  a0, uint64_t  a1) ;

/// @brief Method vtstq_s16, addr 0x447d1a4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtstq_s32, addr 0x447d214, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtstq_s64, addr 0x448a264, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtstq_s8, addr 0x447d134, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtstq_u16, addr 0x447d264, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtstq_u32, addr 0x447d274, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtstq_u64, addr 0x448a2a4, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vtstq_u8, addr 0x447d254, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vtstq_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuqadd_s16, addr 0x448633c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuqadd_s32, addr 0x44863ac, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuqadd_s64, addr 0x448641c, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s64(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuqadd_s8, addr 0x44862cc, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuqadd_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuqaddb_s8, addr 0x448648c, size 0x38, virtual false, abstract: false, final false
static inline int8_t vuqaddb_s8(int8_t  a0, uint8_t  a1) ;

/// @brief Method vuqaddd_s64, addr 0x4486534, size 0x38, virtual false, abstract: false, final false
static inline int64_t vuqaddd_s64(int64_t  a0, uint64_t  a1) ;

/// @brief Method vuqaddh_s16, addr 0x44864c4, size 0x38, virtual false, abstract: false, final false
static inline int16_t vuqaddh_s16(int16_t  a0, uint16_t  a1) ;

/// @brief Method vuqaddq_s16, addr 0x4486374, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuqaddq_s32, addr 0x44863e4, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuqaddq_s64, addr 0x4486454, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuqaddq_s8, addr 0x4486304, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuqaddq_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuqadds_s32, addr 0x44864fc, size 0x38, virtual false, abstract: false, final false
static inline int32_t vuqadds_s32(int32_t  a0, uint32_t  a1) ;

/// @brief Method vuzp1_f32, addr 0x4493218, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp1_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp1_s16, addr 0x44930c8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp1_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp1_s32, addr 0x4493138, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp1_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp1_s8, addr 0x4493058, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp1_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp1_u16, addr 0x44931f0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp1_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp1_u32, addr 0x4493200, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp1_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp1_u8, addr 0x44931e0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp1_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp1q_f32, addr 0x4493220, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_f64, addr 0x4493228, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_s16, addr 0x4493100, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_s32, addr 0x4493170, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_s64, addr 0x44931a8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_s8, addr 0x4493090, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_u16, addr 0x44931f8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_u32, addr 0x4493208, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_u64, addr 0x4493210, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp1q_u8, addr 0x44931e8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp1q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2_f32, addr 0x44933f0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp2_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp2_s16, addr 0x44932a0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp2_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp2_s32, addr 0x4493310, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp2_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp2_s8, addr 0x4493230, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp2_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp2_u16, addr 0x44933c8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp2_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp2_u32, addr 0x44933d8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp2_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp2_u8, addr 0x44933b8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vuzp2_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vuzp2q_f32, addr 0x44933f8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_f64, addr 0x4493400, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_s16, addr 0x44932d8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_s32, addr 0x4493348, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_s64, addr 0x4493380, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_s8, addr 0x4493268, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_u16, addr 0x44933d0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_u32, addr 0x44933e0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_u64, addr 0x44933e8, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vuzp2q_u8, addr 0x44933c0, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vuzp2q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1_f32, addr 0x4492e68, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip1_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip1_s16, addr 0x4492d18, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip1_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip1_s32, addr 0x4492d88, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip1_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip1_s8, addr 0x4492ca8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip1_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip1_u16, addr 0x4492e40, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip1_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip1_u32, addr 0x4492e50, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip1_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip1_u8, addr 0x4492e30, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip1_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip1q_f32, addr 0x4492e70, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_f64, addr 0x4492e78, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_s16, addr 0x4492d50, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_s32, addr 0x4492dc0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_s64, addr 0x4492df8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_s8, addr 0x4492ce0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_u16, addr 0x4492e48, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_u32, addr 0x4492e58, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_u64, addr 0x4492e60, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip1q_u8, addr 0x4492e38, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip1q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2_f32, addr 0x4493040, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip2_f32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip2_s16, addr 0x4492ef0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip2_s16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip2_s32, addr 0x4492f60, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip2_s32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip2_s8, addr 0x4492e80, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip2_s8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip2_u16, addr 0x4493018, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip2_u16(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip2_u32, addr 0x4493028, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip2_u32(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip2_u8, addr 0x4493008, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v64 vzip2_u8(::Unity::Burst::Intrinsics::v64  a0, ::Unity::Burst::Intrinsics::v64  a1) ;

/// @brief Method vzip2q_f32, addr 0x4493048, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_f32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_f64, addr 0x4493050, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_f64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_s16, addr 0x4492f28, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_s32, addr 0x4492f98, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_s64, addr 0x4492fd0, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_s8, addr 0x4492eb8, size 0x38, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_s8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_u16, addr 0x4493020, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u16(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_u32, addr 0x4493030, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u32(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_u64, addr 0x4493038, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u64(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

/// @brief Method vzip2q_u8, addr 0x4493010, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Burst::Intrinsics::v128 vzip2q_u8(::Unity::Burst::Intrinsics::v128  a0, ::Unity::Burst::Intrinsics::v128  a1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Arm__Neon() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Arm__Neon", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Arm__Neon(__Arm__Neon && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Arm__Neon", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Arm__Neon(__Arm__Neon const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::__Arm__Neon, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
// Type: Unity.Burst.Intrinsics::Arm
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::Unity.Burst.Intrinsics::Arm*
class CORDL_TYPE Arm : public ::System::Object {
public:
// Declarations
using Neon = ::Unity::Burst::Intrinsics::__Arm__Neon;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Arm() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Arm", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Arm(Arm && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Arm", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Arm(Arm const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::Arm, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
NEED_NO_BOX(::Unity::Burst::Intrinsics::Arm);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::Arm*, "Unity.Burst.Intrinsics", "Arm");
NEED_NO_BOX(::Unity::Burst::Intrinsics::__Arm__Neon);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::__Arm__Neon*, "Unity.Burst.Intrinsics", "Arm/Neon");
