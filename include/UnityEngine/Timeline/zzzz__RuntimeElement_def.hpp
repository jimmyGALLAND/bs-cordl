#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeElement)
namespace UnityEngine::Timeline {
class IInterval;
}
namespace UnityEngine::Playables {
struct FrameData;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class RuntimeElement;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::RuntimeElement);
// Type: UnityEngine.Timeline::RuntimeElement
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13884))
// CS Name: ::UnityEngine.Timeline::RuntimeElement*
class CORDL_TYPE RuntimeElement : public ::System::Object {
public:
  // Declarations
  /// @brief Field <intervalBit>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__intervalBit_k__BackingField, put = __set__intervalBit_k__BackingField)) int32_t _intervalBit_k__BackingField;

  __declspec(property(get = get_intervalStart)) int64_t intervalStart;

  __declspec(property(get = get_intervalEnd)) int64_t intervalEnd;

  __declspec(property(get = get_intervalBit, put = set_intervalBit)) int32_t intervalBit;

  __declspec(property(put = set_enable)) bool enable;

  /// @brief Convert operator to "::UnityEngine::Timeline::IInterval"
  constexpr operator ::UnityEngine::Timeline::IInterval*() noexcept;

  constexpr int32_t& __get__intervalBit_k__BackingField();

  constexpr int32_t const& __get__intervalBit_k__BackingField() const;

  constexpr void __set__intervalBit_k__BackingField(int32_t value);

  /// @brief Method get_intervalStart addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int64_t get_intervalStart();

  /// @brief Method get_intervalEnd addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int64_t get_intervalEnd();

  /// @brief Method get_intervalBit addr 0x2c680a4 size 0x8 virtual false final false
  inline int32_t get_intervalBit();

  /// @brief Method set_intervalBit addr 0x2c680ac size 0x8 virtual false final false
  inline void set_intervalBit(int32_t value);

  /// @brief Method set_enable addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void set_enable(bool value);

  /// @brief Method EvaluateAt addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void EvaluateAt(double_t localTime, ::UnityEngine::Playables::FrameData frameData);

  /// @brief Method DisableAt addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void DisableAt(double_t localTime, double_t rootDuration, ::UnityEngine::Playables::FrameData frameData);

  static inline ::UnityEngine::Timeline::RuntimeElement* New_ctor();

  /// @brief Method .ctor addr 0x2c6773c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeElement(RuntimeElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeElement(RuntimeElement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeElement();

public:
  /// @brief Field <intervalBit>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____intervalBit_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::RuntimeElement, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::RuntimeElement);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::RuntimeElement*, "UnityEngine.Timeline", "RuntimeElement");
