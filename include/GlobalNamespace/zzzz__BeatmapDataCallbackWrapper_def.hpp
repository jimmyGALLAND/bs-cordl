#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataCallbackWrapper)
namespace System {
class Type;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataCallbackWrapper);
// Type: ::BeatmapDataCallbackWrapper
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4711))
// CS Name: ::BeatmapDataCallbackWrapper*
class CORDL_TYPE BeatmapDataCallbackWrapper : public ::System::Object {
public:
  // Declarations
  /// @brief Field BasicBeatmapEventType, offset 0x10, size 0x8
  __declspec(property(get = __get_BasicBeatmapEventType, put = __set_BasicBeatmapEventType))::System::Type* BasicBeatmapEventType;

  /// @brief Field aheadTime, offset 0x18, size 0x4
  __declspec(property(get = __get_aheadTime, put = __set_aheadTime)) float_t aheadTime;

  /// @brief Field subtypeIdentifiers, offset 0x20, size 0x8
  __declspec(property(get = __get_subtypeIdentifiers, put = __set_subtypeIdentifiers))::ArrayW<int32_t, ::Array<int32_t>*> subtypeIdentifiers;

  constexpr ::System::Type*& __get_BasicBeatmapEventType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_BasicBeatmapEventType() const;

  constexpr void __set_BasicBeatmapEventType(::System::Type* value);

  constexpr float_t& __get_aheadTime();

  constexpr float_t const& __get_aheadTime() const;

  constexpr void __set_aheadTime(float_t value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_subtypeIdentifiers();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_subtypeIdentifiers() const;

  constexpr void __set_subtypeIdentifiers(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::GlobalNamespace::BeatmapDataCallbackWrapper* New_ctor(float_t aheadTime, ::System::Type* BasicBeatmapEventType, ::ArrayW<int32_t, ::Array<int32_t>*> subtypeIdentifiers);

  /// @brief Method .ctor addr 0x237bcdc size 0x40 virtual false final false
  inline void _ctor(float_t aheadTime, ::System::Type* BasicBeatmapEventType, ::ArrayW<int32_t, ::Array<int32_t>*> subtypeIdentifiers);

  /// @brief Method CallCallback addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void CallCallback(::GlobalNamespace::BeatmapDataItem* beatmapData);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataCallbackWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataCallbackWrapper(BeatmapDataCallbackWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataCallbackWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataCallbackWrapper(BeatmapDataCallbackWrapper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataCallbackWrapper();

public:
  /// @brief Field BasicBeatmapEventType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___BasicBeatmapEventType;

  /// @brief Field aheadTime, offset: 0x18, size: 0x4, def value: None
  float_t ___aheadTime;

  /// @brief Field subtypeIdentifiers, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___subtypeIdentifiers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataCallbackWrapper, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataCallbackWrapper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataCallbackWrapper*, "", "BeatmapDataCallbackWrapper");
