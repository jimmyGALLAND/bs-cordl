#pragma once
// IWYU pragma private; include "Unity/Burst/Intrinsics/V256DebugView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Burst/Intrinsics/zzzz__v256_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(V256DebugView)
namespace Unity::Burst::Intrinsics {
struct v256;
}
// Forward declare root types
namespace Unity::Burst::Intrinsics {
class V256DebugView;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Burst::Intrinsics::V256DebugView);
// Type: Unity.Burst.Intrinsics::V256DebugView
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: ::Unity.Burst.Intrinsics::V256DebugView*
class CORDL_TYPE V256DebugView : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Byte)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Byte;

 __declspec(property(get=get_Double)) ::ArrayW<double_t,::Array<double_t>*>  Double;

 __declspec(property(get=get_Float)) ::ArrayW<float_t,::Array<float_t>*>  Float;

 __declspec(property(get=get_SByte)) ::ArrayW<int8_t,::Array<int8_t>*>  SByte;

 __declspec(property(get=get_SInt)) ::ArrayW<int32_t,::Array<int32_t>*>  SInt;

 __declspec(property(get=get_SLong)) ::ArrayW<int64_t,::Array<int64_t>*>  SLong;

 __declspec(property(get=get_SShort)) ::ArrayW<int16_t,::Array<int16_t>*>  SShort;

 __declspec(property(get=get_UInt)) ::ArrayW<uint32_t,::Array<uint32_t>*>  UInt;

 __declspec(property(get=get_ULong)) ::ArrayW<uint64_t,::Array<uint64_t>*>  ULong;

 __declspec(property(get=get_UShort)) ::ArrayW<uint16_t,::Array<uint16_t>*>  UShort;

/// @brief Field m_Value, offset 0x10, size 0x20 
 __declspec(property(get=__cordl_internal_get_m_Value, put=__cordl_internal_set_m_Value)) ::Unity::Burst::Intrinsics::v256  m_Value;

static inline ::Unity::Burst::Intrinsics::V256DebugView* New_ctor(::Unity::Burst::Intrinsics::v256  value) ;

constexpr ::Unity::Burst::Intrinsics::v256 const& __cordl_internal_get_m_Value() const;

constexpr ::Unity::Burst::Intrinsics::v256& __cordl_internal_get_m_Value() ;

constexpr void __cordl_internal_set_m_Value(::Unity::Burst::Intrinsics::v256  value) ;

/// @brief Method .ctor, addr 0x44967a8, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Burst::Intrinsics::v256  value) ;

/// @brief Method get_Byte, addr 0x44967d4, size 0x258, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_Byte() ;

/// @brief Method get_Double, addr 0x44972ec, size 0x98, virtual false, abstract: false, final false
inline ::ArrayW<double_t,::Array<double_t>*> get_Double() ;

/// @brief Method get_Float, addr 0x44970e4, size 0xd8, virtual false, abstract: false, final false
inline ::ArrayW<float_t,::Array<float_t>*> get_Float() ;

/// @brief Method get_SByte, addr 0x4496a2c, size 0x258, virtual false, abstract: false, final false
inline ::ArrayW<int8_t,::Array<int8_t>*> get_SByte() ;

/// @brief Method get_SInt, addr 0x449700c, size 0xd8, virtual false, abstract: false, final false
inline ::ArrayW<int32_t,::Array<int32_t>*> get_SInt() ;

/// @brief Method get_SLong, addr 0x44971bc, size 0x98, virtual false, abstract: false, final false
inline ::ArrayW<int64_t,::Array<int64_t>*> get_SLong() ;

/// @brief Method get_SShort, addr 0x4496ddc, size 0x158, virtual false, abstract: false, final false
inline ::ArrayW<int16_t,::Array<int16_t>*> get_SShort() ;

/// @brief Method get_UInt, addr 0x4496f34, size 0xd8, virtual false, abstract: false, final false
inline ::ArrayW<uint32_t,::Array<uint32_t>*> get_UInt() ;

/// @brief Method get_ULong, addr 0x4497254, size 0x98, virtual false, abstract: false, final false
inline ::ArrayW<uint64_t,::Array<uint64_t>*> get_ULong() ;

/// @brief Method get_UShort, addr 0x4496c84, size 0x158, virtual false, abstract: false, final false
inline ::ArrayW<uint16_t,::Array<uint16_t>*> get_UShort() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr V256DebugView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "V256DebugView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
V256DebugView(V256DebugView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "V256DebugView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
V256DebugView(V256DebugView const& ) = delete;

/// @brief Field m_Value, offset: 0x10, size: 0x20, def value: None
 ::Unity::Burst::Intrinsics::v256  ___m_Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::V256DebugView, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Burst::Intrinsics::V256DebugView, ___m_Value) == 0x10, "Offset mismatch!");

} // namespace end def Unity::Burst::Intrinsics
NEED_NO_BOX(::Unity::Burst::Intrinsics::V256DebugView);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::V256DebugView*, "Unity.Burst.Intrinsics", "V256DebugView");
