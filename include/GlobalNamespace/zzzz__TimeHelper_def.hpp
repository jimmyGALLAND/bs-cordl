#pragma once
// IWYU pragma private; include "GlobalNamespace/TimeHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TimeHelper)
// Forward declare root types
namespace GlobalNamespace {
class TimeHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TimeHelper);
// Type: ::TimeHelper
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TimeHelper*
class CORDL_TYPE TimeHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _accumulator, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__accumulator, put=__cordl_internal_set__accumulator)) float_t  _accumulator;

/// @brief Field <deltaTime>k__BackingField, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF__deltaTime_k__BackingField, put=setStaticF__deltaTime_k__BackingField)) float_t  _deltaTime_k__BackingField;

/// @brief Field <fixedDeltaTime>k__BackingField, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF__fixedDeltaTime_k__BackingField, put=setStaticF__fixedDeltaTime_k__BackingField)) float_t  _fixedDeltaTime_k__BackingField;

/// @brief Field <interpolationFactor>k__BackingField, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF__interpolationFactor_k__BackingField, put=setStaticF__interpolationFactor_k__BackingField)) float_t  _interpolationFactor_k__BackingField;

/// @brief Field <time>k__BackingField, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF__time_k__BackingField, put=setStaticF__time_k__BackingField)) float_t  _time_k__BackingField;

/// @brief Method Awake, addr 0x393fa0c, size 0x94, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x393faa0, size 0x94, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::TimeHelper* New_ctor() ;

/// @brief Method Update, addr 0x393fb34, size 0x174, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method __SetTime, addr 0x393fca8, size 0x4c, virtual false, abstract: false, final false
static inline void __SetTime(float_t  time) ;

constexpr float_t const& __cordl_internal_get__accumulator() const;

constexpr float_t& __cordl_internal_get__accumulator() ;

constexpr void __cordl_internal_set__accumulator(float_t  value) ;

/// @brief Method .ctor, addr 0x393fcf4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF__deltaTime_k__BackingField() ;

static inline float_t getStaticF__fixedDeltaTime_k__BackingField() ;

static inline float_t getStaticF__interpolationFactor_k__BackingField() ;

static inline float_t getStaticF__time_k__BackingField() ;

/// @brief Method get_deltaTime, addr 0x393f838, size 0x48, virtual false, abstract: false, final false
static inline float_t get_deltaTime() ;

/// @brief Method get_fixedDeltaTime, addr 0x393f8d4, size 0x48, virtual false, abstract: false, final false
static inline float_t get_fixedDeltaTime() ;

/// @brief Method get_interpolationFactor, addr 0x393f970, size 0x48, virtual false, abstract: false, final false
static inline float_t get_interpolationFactor() ;

/// @brief Method get_time, addr 0x393f79c, size 0x48, virtual false, abstract: false, final false
static inline float_t get_time() ;

static inline void setStaticF__deltaTime_k__BackingField(float_t  value) ;

static inline void setStaticF__fixedDeltaTime_k__BackingField(float_t  value) ;

static inline void setStaticF__interpolationFactor_k__BackingField(float_t  value) ;

static inline void setStaticF__time_k__BackingField(float_t  value) ;

/// @brief Method set_deltaTime, addr 0x393f880, size 0x54, virtual false, abstract: false, final false
static inline void set_deltaTime(float_t  value) ;

/// @brief Method set_fixedDeltaTime, addr 0x393f91c, size 0x54, virtual false, abstract: false, final false
static inline void set_fixedDeltaTime(float_t  value) ;

/// @brief Method set_interpolationFactor, addr 0x393f9b8, size 0x54, virtual false, abstract: false, final false
static inline void set_interpolationFactor(float_t  value) ;

/// @brief Method set_time, addr 0x393f7e4, size 0x54, virtual false, abstract: false, final false
static inline void set_time(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeHelper(TimeHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeHelper(TimeHelper const& ) = delete;

/// @brief Field _accumulator, offset: 0x20, size: 0x4, def value: None
 float_t  ____accumulator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TimeHelper, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeHelper, ____accumulator) == 0x20, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TimeHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TimeHelper*, "", "TimeHelper");
