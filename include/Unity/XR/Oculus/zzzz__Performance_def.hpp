#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Performance)
// Forward declare root types
namespace Unity::XR::Oculus {
class Performance;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::Performance);
// Type: Unity.XR.Oculus::Performance
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15134))
// CS Name: ::Unity.XR.Oculus::Performance*
class CORDL_TYPE Performance : public ::System::Object {
public:
  // Declarations
  /// @brief Field cachedDisplayAvailableFrequencies, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cachedDisplayAvailableFrequencies,
                             put = setStaticF_cachedDisplayAvailableFrequencies))::ArrayW<float_t, ::Array<float_t>*> cachedDisplayAvailableFrequencies;

  static inline void setStaticF_cachedDisplayAvailableFrequencies(::ArrayW<float_t, ::Array<float_t>*> value);

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF_cachedDisplayAvailableFrequencies();

  /// @brief Method TrySetCPULevel addr 0x2c789a0 size 0x18 virtual false final false
  static inline bool TrySetCPULevel(int32_t level);

  /// @brief Method TrySetGPULevel addr 0x2c789bc size 0x18 virtual false final false
  static inline bool TrySetGPULevel(int32_t level);

  /// @brief Method TryGetAvailableDisplayRefreshRates addr 0x2c789d8 size 0x1b8 virtual false final false
  static inline bool TryGetAvailableDisplayRefreshRates(ByRef<::ArrayW<float_t, ::Array<float_t>*>> refreshRates);

  /// @brief Method TrySetDisplayRefreshRate addr 0x2c78b94 size 0x4 virtual false final false
  static inline bool TrySetDisplayRefreshRate(float_t refreshRate);

  /// @brief Method TryGetDisplayRefreshRate addr 0x2c78b9c size 0x4 virtual false final false
  static inline bool TryGetDisplayRefreshRate(ByRef<float_t> refreshRate);

  // Ctor Parameters [CppParam { name: "", ty: "Performance", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Performance(Performance&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Performance", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Performance(Performance const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Performance();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Performance, 0x10>, "Size mismatch!");

} // namespace Unity::XR::Oculus
NEED_NO_BOX(::Unity::XR::Oculus::Performance);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Performance*, "Unity.XR.Oculus", "Performance");
