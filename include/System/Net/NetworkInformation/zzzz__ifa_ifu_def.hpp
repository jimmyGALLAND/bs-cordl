#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/ifa_ifu.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ifa_ifu)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
struct ifa_ifu;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::ifa_ifu);
// Type: System.Net.NetworkInformation::ifa_ifu
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: true
// CS Name: ::System.Net.NetworkInformation::ifa_ifu
struct CORDL_TYPE ifa_ifu {
public:
// Declarations
/// @brief Field ifu_broadaddr, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ifu_broadaddr, put=__cordl_internal_set_ifu_broadaddr)) ::System::IntPtr  ifu_broadaddr;

/// @brief Field ifu_dstaddr, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ifu_dstaddr, put=__cordl_internal_set_ifu_dstaddr)) ::System::IntPtr  ifu_dstaddr;

constexpr ::System::IntPtr const& __cordl_internal_get_ifu_broadaddr() const;

constexpr ::System::IntPtr& __cordl_internal_get_ifu_broadaddr() ;

constexpr ::System::IntPtr const& __cordl_internal_get_ifu_dstaddr() const;

constexpr ::System::IntPtr& __cordl_internal_get_ifu_dstaddr() ;

constexpr void __cordl_internal_set_ifu_broadaddr(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_ifu_dstaddr(::System::IntPtr  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ifa_ifu() ;

// Ctor Parameters [CppParam { name: "ifu_broadaddr", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "ifu_dstaddr", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr ifa_ifu(::System::IntPtr  ifu_broadaddr, ::System::IntPtr  ifu_dstaddr) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___ifu_broadaddr_padding[0x0];
/// @brief Field ifu_broadaddr, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  ___ifu_broadaddr;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___ifu_broadaddr_padding_forAlignment[0x0];
/// @brief Field ifu_broadaddr, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  ___ifu_broadaddr_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___ifu_dstaddr_padding[0x0];
/// @brief Field ifu_dstaddr, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  ___ifu_dstaddr;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___ifu_dstaddr_padding_forAlignment[0x0];
/// @brief Field ifu_dstaddr, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  ___ifu_dstaddr_forAlignment;
};
};
public:

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::ifa_ifu, 0x8>, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::ifa_ifu, "System.Net.NetworkInformation", "ifa_ifu");
