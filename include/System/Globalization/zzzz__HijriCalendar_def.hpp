#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HijriCalendar)
namespace System {
struct DayOfWeek;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::Globalization {
class HijriCalendar;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::HijriCalendar);
// Type: System.Globalization::HijriCalendar
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3696)), TypeDefinitionIndex(TypeDefinitionIndex(2368))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3702))
// CS Name: ::System.Globalization::HijriCalendar*
class CORDL_TYPE HijriCalendar : public ::System::Globalization::Calendar {
public:
  // Declarations
  /// @brief Field m_HijriAdvance, offset 0x1c, size 0x4
  __declspec(property(get = __get_m_HijriAdvance, put = __set_m_HijriAdvance)) int32_t m_HijriAdvance;

  /// @brief Field HijriEra, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_HijriEra, put = setStaticF_HijriEra)) int32_t HijriEra;

  /// @brief Field HijriMonthDays, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_HijriMonthDays, put = setStaticF_HijriMonthDays))::ArrayW<int32_t, ::Array<int32_t>*> HijriMonthDays;

  /// @brief Field calendarMinValue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_calendarMinValue, put = setStaticF_calendarMinValue))::System::DateTime calendarMinValue;

  /// @brief Field calendarMaxValue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_calendarMaxValue, put = setStaticF_calendarMaxValue))::System::DateTime calendarMaxValue;

  __declspec(property(get = get_MinSupportedDateTime))::System::DateTime MinSupportedDateTime;

  __declspec(property(get = get_MaxSupportedDateTime))::System::DateTime MaxSupportedDateTime;

  __declspec(property(get = get_ID)) int32_t _cordl_ID;

  __declspec(property(get = get_HijriAdjustment)) int32_t HijriAdjustment;

  __declspec(property(get = get_Eras))::ArrayW<int32_t, ::Array<int32_t>*> Eras;

  __declspec(property(get = get_TwoDigitYearMax, put = set_TwoDigitYearMax)) int32_t TwoDigitYearMax;

  constexpr int32_t& __get_m_HijriAdvance();

  constexpr int32_t const& __get_m_HijriAdvance() const;

  constexpr void __set_m_HijriAdvance(int32_t value);

  static inline void setStaticF_HijriEra(int32_t value);

  static inline int32_t getStaticF_HijriEra();

  static inline void setStaticF_HijriMonthDays(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_HijriMonthDays();

  static inline void setStaticF_calendarMinValue(::System::DateTime value);

  static inline ::System::DateTime getStaticF_calendarMinValue();

  static inline void setStaticF_calendarMaxValue(::System::DateTime value);

  static inline ::System::DateTime getStaticF_calendarMaxValue();

  /// @brief Method get_MinSupportedDateTime addr 0x2563dac size 0x58 virtual true final false
  inline ::System::DateTime get_MinSupportedDateTime();

  /// @brief Method get_MaxSupportedDateTime addr 0x2563e04 size 0x58 virtual true final false
  inline ::System::DateTime get_MaxSupportedDateTime();

  static inline ::System::Globalization::HijriCalendar* New_ctor();

  /// @brief Method .ctor addr 0x2563e5c size 0x1c virtual false final false
  inline void _ctor();

  /// @brief Method get_ID addr 0x2563e78 size 0x8 virtual true final false
  inline int32_t get_ID();

  /// @brief Method GetAbsoluteDateHijri addr 0x2563e80 size 0xc8 virtual false final false
  inline int64_t GetAbsoluteDateHijri(int32_t y, int32_t m, int32_t d);

  /// @brief Method DaysUpToHijriYear addr 0x2563f48 size 0xbc virtual false final false
  inline int64_t DaysUpToHijriYear(int32_t HijriYear);

  /// @brief Method get_HijriAdjustment addr 0x2564004 size 0x68 virtual false final false
  inline int32_t get_HijriAdjustment();

  /// @brief Method GetAdvanceHijriDate addr 0x256406c size 0x8 virtual false final false
  static inline int32_t GetAdvanceHijriDate();

  /// @brief Method CheckTicksRange addr 0x2564074 size 0x1b0 virtual false final false
  static inline void CheckTicksRange(int64_t ticks);

  /// @brief Method CheckEraRange addr 0x2564224 size 0xd0 virtual false final false
  static inline void CheckEraRange(int32_t era);

  /// @brief Method CheckYearRange addr 0x25642f4 size 0x158 virtual false final false
  static inline void CheckYearRange(int32_t year, int32_t era);

  /// @brief Method CheckYearMonthRange addr 0x256444c size 0x188 virtual false final false
  static inline void CheckYearMonthRange(int32_t year, int32_t month, int32_t era);

  /// @brief Method GetDatePart addr 0x25645d4 size 0x270 virtual true final false
  inline int32_t GetDatePart(int64_t ticks, int32_t part);

  /// @brief Method GetDayOfMonth addr 0x2564844 size 0x44 virtual true final false
  inline int32_t GetDayOfMonth(::System::DateTime time);

  /// @brief Method GetDayOfWeek addr 0x2564888 size 0x68 virtual true final false
  inline ::System::DayOfWeek GetDayOfWeek(::System::DateTime time);

  /// @brief Method GetDaysInMonth addr 0x25648f0 size 0xcc virtual true final false
  inline int32_t GetDaysInMonth(int32_t year, int32_t month, int32_t era);

  /// @brief Method GetDaysInYear addr 0x25649bc size 0x94 virtual true final false
  inline int32_t GetDaysInYear(int32_t year, int32_t era);

  /// @brief Method GetEra addr 0x2564a50 size 0x78 virtual true final false
  inline int32_t GetEra(::System::DateTime time);

  /// @brief Method get_Eras addr 0x2564ac8 size 0x9c virtual true final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_Eras();

  /// @brief Method GetMonth addr 0x2564b64 size 0x44 virtual true final false
  inline int32_t GetMonth(::System::DateTime time);

  /// @brief Method GetMonthsInYear addr 0x2564ba8 size 0x6c virtual true final false
  inline int32_t GetMonthsInYear(int32_t year, int32_t era);

  /// @brief Method GetYear addr 0x2564c14 size 0x44 virtual true final false
  inline int32_t GetYear(::System::DateTime time);

  /// @brief Method IsLeapYear addr 0x2564c58 size 0xa0 virtual true final false
  inline bool IsLeapYear(int32_t year, int32_t era);

  /// @brief Method ToDateTime addr 0x2564cf8 size 0x1e0 virtual true final false
  inline ::System::DateTime ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era);

  /// @brief Method get_TwoDigitYearMax addr 0x2564ed8 size 0x44 virtual true final false
  inline int32_t get_TwoDigitYearMax();

  /// @brief Method set_TwoDigitYearMax addr 0x2564f1c size 0x118 virtual true final false
  inline void set_TwoDigitYearMax(int32_t value);

  /// @brief Method ToFourDigitYear addr 0x2565034 size 0x13c virtual true final false
  inline int32_t ToFourDigitYear(int32_t year);

  // Ctor Parameters [CppParam { name: "", ty: "HijriCalendar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HijriCalendar(HijriCalendar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HijriCalendar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HijriCalendar(HijriCalendar const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HijriCalendar();

public:
  /// @brief Field m_HijriAdvance, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_HijriAdvance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::HijriCalendar, 0x20>, "Size mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::HijriCalendar);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::HijriCalendar*, "System.Globalization", "HijriCalendar");
