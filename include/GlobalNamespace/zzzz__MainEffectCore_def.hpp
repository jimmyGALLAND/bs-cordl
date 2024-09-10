#pragma once
// IWYU pragma private; include "GlobalNamespace/MainEffectCore.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MainEffectCore)
// Forward declare root types
namespace GlobalNamespace {
class MainEffectCore;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainEffectCore);
// Type: ::MainEffectCore
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MainEffectCore*
class CORDL_TYPE MainEffectCore : public ::System::Object {
public:
// Declarations
/// @brief Field _baseColorBoostID, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF__baseColorBoostID, put=setStaticF__baseColorBoostID)) int32_t  _baseColorBoostID;

/// @brief Field _baseColorBoostThresholdID, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF__baseColorBoostThresholdID, put=setStaticF__baseColorBoostThresholdID)) int32_t  _baseColorBoostThresholdID;

static inline ::GlobalNamespace::MainEffectCore* New_ctor() ;

/// @brief Method SetGlobalShaderValues, addr 0x3ff07a0, size 0x88, virtual false, abstract: false, final false
static inline void SetGlobalShaderValues(float_t  baseColorBoost, float_t  baseColorBoostThreshold) ;

/// @brief Method .ctor, addr 0x3ff1184, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__baseColorBoostID() ;

static inline int32_t getStaticF__baseColorBoostThresholdID() ;

static inline void setStaticF__baseColorBoostID(int32_t  value) ;

static inline void setStaticF__baseColorBoostThresholdID(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MainEffectCore() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MainEffectCore", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MainEffectCore(MainEffectCore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainEffectCore", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainEffectCore(MainEffectCore const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainEffectCore, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainEffectCore);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainEffectCore*, "", "MainEffectCore");
