#pragma once
// IWYU pragma private; include "GlobalNamespace/AveragingValueRecorder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AveragingValueRecorder)
namespace GlobalNamespace {
struct __AveragingValueRecorder__AverageValueData;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
// Forward declare root types
namespace GlobalNamespace {
class AveragingValueRecorder;
}
namespace GlobalNamespace {
struct __AveragingValueRecorder__AverageValueData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AveragingValueRecorder);
MARK_VAL_T(::GlobalNamespace::__AveragingValueRecorder__AverageValueData);
// Type: ::AverageValueData
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AveragingValueRecorder::AverageValueData
struct CORDL_TYPE __AveragingValueRecorder__AverageValueData {
public:
// Declarations
 __declspec(property(get=get_time, put=set_time)) float_t  time;

 __declspec(property(get=get_value, put=set_value)) float_t  value;

/// @brief Method .ctor, addr 0x3a84274, size 0x8, virtual false, abstract: false, final false
inline void _ctor(float_t  value, float_t  time) ;

/// @brief Method get_time, addr 0x3a84264, size 0x8, virtual false, abstract: false, final false
inline float_t get_time() ;

/// @brief Method get_value, addr 0x3a84254, size 0x8, virtual false, abstract: false, final false
inline float_t get_value() ;

/// @brief Method set_time, addr 0x3a8426c, size 0x8, virtual false, abstract: false, final false
inline void set_time(float_t  value) ;

/// @brief Method set_value, addr 0x3a8425c, size 0x8, virtual false, abstract: false, final false
inline void set_value(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr __AveragingValueRecorder__AverageValueData() ;

// Ctor Parameters [CppParam { name: "_value_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_time_k__BackingField", ty: "float_t", modifiers: "", def_value: None }]
constexpr __AveragingValueRecorder__AverageValueData(float_t  _value_k__BackingField, float_t  _time_k__BackingField) noexcept;

/// @brief Field <value>k__BackingField, offset: 0x0, size: 0x4, def value: None
 float_t  _value_k__BackingField;

/// @brief Field <time>k__BackingField, offset: 0x4, size: 0x4, def value: None
 float_t  _time_k__BackingField;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AveragingValueRecorder__AverageValueData, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AveragingValueRecorder__AverageValueData, _value_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AveragingValueRecorder__AverageValueData, _time_k__BackingField) == 0x4, "Offset mismatch!");

} // namespace end def GlobalNamespace
// Type: ::AveragingValueRecorder
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AveragingValueRecorder*
class CORDL_TYPE AveragingValueRecorder : public ::System::Object {
public:
// Declarations
using AverageValueData = ::GlobalNamespace::__AveragingValueRecorder__AverageValueData;

/// @brief Field _averageValue, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__averageValue, put=__cordl_internal_set__averageValue)) float_t  _averageValue;

/// @brief Field _averageWindowDuration, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__averageWindowDuration, put=__cordl_internal_set__averageWindowDuration)) float_t  _averageWindowDuration;

/// @brief Field _averageWindowValues, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__averageWindowValues, put=__cordl_internal_set__averageWindowValues)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>*  _averageWindowValues;

/// @brief Field _averageWindowValuesDuration, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__averageWindowValuesDuration, put=__cordl_internal_set__averageWindowValuesDuration)) float_t  _averageWindowValuesDuration;

/// @brief Field _historyTime, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__historyTime, put=__cordl_internal_set__historyTime)) float_t  _historyTime;

/// @brief Field _historyValues, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__historyValues, put=__cordl_internal_set__historyValues)) ::System::Collections::Generic::Queue_1<float_t>*  _historyValues;

/// @brief Field _historyValuesCount, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__historyValuesCount, put=__cordl_internal_set__historyValuesCount)) int32_t  _historyValuesCount;

/// @brief Field _historyValuesPerSecond, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__historyValuesPerSecond, put=__cordl_internal_set__historyValuesPerSecond)) float_t  _historyValuesPerSecond;

/// @brief Field _lastValue, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastValue, put=__cordl_internal_set__lastValue)) float_t  _lastValue;

/// @brief Field _time, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__time, put=__cordl_internal_set__time)) float_t  _time;

/// @brief Method GetAverageValue, addr 0x3a8423c, size 0x8, virtual false, abstract: false, final false
inline float_t GetAverageValue() ;

/// @brief Method GetHistoryValues, addr 0x3a8424c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Queue_1<float_t>* GetHistoryValues() ;

/// @brief Method GetLastValue, addr 0x3a84244, size 0x8, virtual false, abstract: false, final false
inline float_t GetLastValue() ;

static inline ::GlobalNamespace::AveragingValueRecorder* New_ctor(float_t  averageWindowDuration, float_t  historyWindowDuration, float_t  historyValuesPerSecond) ;

/// @brief Method Update, addr 0x3a83f5c, size 0x2e0, virtual false, abstract: false, final false
inline void Update(float_t  value, float_t  deltaTime) ;

constexpr float_t const& __cordl_internal_get__averageValue() const;

constexpr float_t& __cordl_internal_get__averageValue() ;

constexpr float_t const& __cordl_internal_get__averageWindowDuration() const;

constexpr float_t& __cordl_internal_get__averageWindowDuration() ;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>*& __cordl_internal_get__averageWindowValues() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>*> const& __cordl_internal_get__averageWindowValues() const;

constexpr float_t const& __cordl_internal_get__averageWindowValuesDuration() const;

constexpr float_t& __cordl_internal_get__averageWindowValuesDuration() ;

constexpr float_t const& __cordl_internal_get__historyTime() const;

constexpr float_t& __cordl_internal_get__historyTime() ;

constexpr ::System::Collections::Generic::Queue_1<float_t>*& __cordl_internal_get__historyValues() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<float_t>*> const& __cordl_internal_get__historyValues() const;

constexpr int32_t const& __cordl_internal_get__historyValuesCount() const;

constexpr int32_t& __cordl_internal_get__historyValuesCount() ;

constexpr float_t const& __cordl_internal_get__historyValuesPerSecond() const;

constexpr float_t& __cordl_internal_get__historyValuesPerSecond() ;

constexpr float_t const& __cordl_internal_get__lastValue() const;

constexpr float_t& __cordl_internal_get__lastValue() ;

constexpr float_t const& __cordl_internal_get__time() const;

constexpr float_t& __cordl_internal_get__time() ;

constexpr void __cordl_internal_set__averageValue(float_t  value) ;

constexpr void __cordl_internal_set__averageWindowDuration(float_t  value) ;

constexpr void __cordl_internal_set__averageWindowValues(::System::Collections::Generic::Queue_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>*  value) ;

constexpr void __cordl_internal_set__averageWindowValuesDuration(float_t  value) ;

constexpr void __cordl_internal_set__historyTime(float_t  value) ;

constexpr void __cordl_internal_set__historyValues(::System::Collections::Generic::Queue_1<float_t>*  value) ;

constexpr void __cordl_internal_set__historyValuesCount(int32_t  value) ;

constexpr void __cordl_internal_set__historyValuesPerSecond(float_t  value) ;

constexpr void __cordl_internal_set__lastValue(float_t  value) ;

constexpr void __cordl_internal_set__time(float_t  value) ;

/// @brief Method .ctor, addr 0x3a83e18, size 0x144, virtual false, abstract: false, final false
inline void _ctor(float_t  averageWindowDuration, float_t  historyWindowDuration, float_t  historyValuesPerSecond) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AveragingValueRecorder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AveragingValueRecorder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AveragingValueRecorder(AveragingValueRecorder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AveragingValueRecorder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AveragingValueRecorder(AveragingValueRecorder const& ) = delete;

/// @brief Field _averageWindowDuration, offset: 0x10, size: 0x4, def value: None
 float_t  ____averageWindowDuration;

/// @brief Field _historyValuesPerSecond, offset: 0x14, size: 0x4, def value: None
 float_t  ____historyValuesPerSecond;

/// @brief Field _historyValuesCount, offset: 0x18, size: 0x4, def value: None
 int32_t  ____historyValuesCount;

/// @brief Field _averageWindowValues, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>*  ____averageWindowValues;

/// @brief Field _historyValues, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<float_t>*  ____historyValues;

/// @brief Field _time, offset: 0x30, size: 0x4, def value: None
 float_t  ____time;

/// @brief Field _historyTime, offset: 0x34, size: 0x4, def value: None
 float_t  ____historyTime;

/// @brief Field _averageValue, offset: 0x38, size: 0x4, def value: None
 float_t  ____averageValue;

/// @brief Field _averageWindowValuesDuration, offset: 0x3c, size: 0x4, def value: None
 float_t  ____averageWindowValuesDuration;

/// @brief Field _lastValue, offset: 0x40, size: 0x4, def value: None
 float_t  ____lastValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AveragingValueRecorder, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AveragingValueRecorder, ____averageWindowDuration) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AveragingValueRecorder, ____historyValuesPerSecond) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AveragingValueRecorder, ____historyValuesCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AveragingValueRecorder, ____averageWindowValues) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AveragingValueRecorder, ____historyValues) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AveragingValueRecorder, ____time) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AveragingValueRecorder, ____historyTime) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AveragingValueRecorder, ____averageValue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AveragingValueRecorder, ____averageWindowValuesDuration) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AveragingValueRecorder, ____lastValue) == 0x40, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AveragingValueRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AveragingValueRecorder*, "", "AveragingValueRecorder");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AveragingValueRecorder__AverageValueData, "", "AveragingValueRecorder/AverageValueData");
