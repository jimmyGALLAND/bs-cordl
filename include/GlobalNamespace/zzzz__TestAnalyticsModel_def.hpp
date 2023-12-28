#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TestAnalyticsModel)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class __TestAnalyticsModel____c;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
// Forward declare root types
namespace GlobalNamespace {
class TestAnalyticsModel;
}
namespace GlobalNamespace {
class __TestAnalyticsModel____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TestAnalyticsModel);
MARK_REF_PTR_T(::GlobalNamespace::__TestAnalyticsModel____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16224))
// CS Name: ::TestAnalyticsModel::<>c*
class CORDL_TYPE __TestAnalyticsModel____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__TestAnalyticsModel____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, ::StringW>* __9__3_0;

  static inline void setStaticF___9(::GlobalNamespace::__TestAnalyticsModel____c* value);

  static inline ::GlobalNamespace::__TestAnalyticsModel____c* getStaticF___9();

  static inline void setStaticF___9__3_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, ::StringW>* value);

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, ::StringW>* getStaticF___9__3_0();

  static inline ::GlobalNamespace::__TestAnalyticsModel____c* New_ctor();

  /// @brief Method .ctor addr 0xdfd4a4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <LogEvent>b__3_0 addr 0xdfd4ac size 0x8c virtual false final false
  inline ::StringW _LogEvent_b__3_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> kvp);

  // Ctor Parameters [CppParam { name: "", ty: "__TestAnalyticsModel____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TestAnalyticsModel____c(__TestAnalyticsModel____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TestAnalyticsModel____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TestAnalyticsModel____c(__TestAnalyticsModel____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TestAnalyticsModel____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TestAnalyticsModel____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::TestAnalyticsModel
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16225))
// CS Name: ::TestAnalyticsModel*
class CORDL_TYPE TestAnalyticsModel : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__TestAnalyticsModel____c;

  __declspec(property(get = get_supportsOpenDataPrivacyPage)) bool supportsOpenDataPrivacyPage;

  /// @brief Convert operator to "::GlobalNamespace::IAnalyticsModel"
  constexpr operator ::GlobalNamespace::IAnalyticsModel*() noexcept;

  /// @brief Method get_supportsOpenDataPrivacyPage addr 0xdfcf20 size 0x8 virtual true final true
  inline bool get_supportsOpenDataPrivacyPage();

  /// @brief Method OpenDataPrivacyPage addr 0xdfcf28 size 0x4 virtual true final true
  inline void OpenDataPrivacyPage();

  /// @brief Method LogEvent addr 0xdfcf2c size 0x18c virtual true final true
  inline void LogEvent(::StringW eventType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* eventData);

  /// @brief Method LogEditAvatarEvent addr 0xdfd0b8 size 0xe0 virtual true final true
  inline void LogEditAvatarEvent(::StringW eventType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* avatarEventData);

  /// @brief Method LogClick addr 0xdfd198 size 0xe0 virtual true final true
  inline void LogClick(::StringW clickType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* clickData);

  /// @brief Method LogImpression addr 0xdfd278 size 0xe0 virtual true final true
  inline void LogImpression(::StringW impressionType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* impressionData);

  /// @brief Method LogExposure addr 0xdfd358 size 0xe0 virtual true final true
  inline void LogExposure(::StringW exposureType, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* exposureData);

  static inline ::GlobalNamespace::TestAnalyticsModel* New_ctor();

  /// @brief Method .ctor addr 0xdfd438 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TestAnalyticsModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TestAnalyticsModel(TestAnalyticsModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TestAnalyticsModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TestAnalyticsModel(TestAnalyticsModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TestAnalyticsModel();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TestAnalyticsModel, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TestAnalyticsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TestAnalyticsModel*, "", "TestAnalyticsModel");
NEED_NO_BOX(::GlobalNamespace::__TestAnalyticsModel____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TestAnalyticsModel____c*, "", "TestAnalyticsModel/<>c");
