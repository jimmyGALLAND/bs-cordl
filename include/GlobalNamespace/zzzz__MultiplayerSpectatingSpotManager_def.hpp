#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerSpectatingSpotManager)
namespace GlobalNamespace {
class IMultiplayerSpectatingSpot;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class __MultiplayerSpectatingSpotManager____c;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerSpectatingSpotManager;
}
namespace GlobalNamespace {
class __MultiplayerSpectatingSpotManager____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerSpectatingSpotManager);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerSpectatingSpotManager____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5261))
// CS Name: ::MultiplayerSpectatingSpotManager::<>c*
class CORDL_TYPE __MultiplayerSpectatingSpotManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__MultiplayerSpectatingSpotManager____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0))::System::Func_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, bool>* __9__3_0;

  static inline void setStaticF___9(::GlobalNamespace::__MultiplayerSpectatingSpotManager____c* value);

  static inline ::GlobalNamespace::__MultiplayerSpectatingSpotManager____c* getStaticF___9();

  static inline void setStaticF___9__3_0(::System::Func_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, bool>* value);

  static inline ::System::Func_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, bool>* getStaticF___9__3_0();

  static inline ::GlobalNamespace::__MultiplayerSpectatingSpotManager____c* New_ctor();

  /// @brief Method .ctor addr 0x225e60c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <get_defaultSpot>b__3_0 addr 0x225e614 size 0xa0 virtual false final false
  inline bool _get_defaultSpot_b__3_0(::GlobalNamespace::IMultiplayerSpectatingSpot* s);

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerSpectatingSpotManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerSpectatingSpotManager____c(__MultiplayerSpectatingSpotManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerSpectatingSpotManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerSpectatingSpotManager____c(__MultiplayerSpectatingSpotManager____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerSpectatingSpotManager____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerSpectatingSpotManager____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerSpectatingSpotManager
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5262))
// CS Name: ::MultiplayerSpectatingSpotManager*
class CORDL_TYPE MultiplayerSpectatingSpotManager : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__MultiplayerSpectatingSpotManager____c;

  /// @brief Field _spectatingSpots, offset 0x10, size 0x8
  __declspec(property(get = __get__spectatingSpots, put = __set__spectatingSpots))::System::Collections::Generic::List_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* _spectatingSpots;

  /// @brief Field _spotIndexBySpot, offset 0x18, size 0x8
  __declspec(property(get = __get__spotIndexBySpot,
                      put = __set__spotIndexBySpot))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, int32_t>* _spotIndexBySpot;

  __declspec(property(get = get_spectatingSpots))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* spectatingSpots;

  __declspec(property(get = get_defaultSpot))::GlobalNamespace::IMultiplayerSpectatingSpot* defaultSpot;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*& __get__spectatingSpots();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*> const& __get__spectatingSpots() const;

  constexpr void __set__spectatingSpots(::System::Collections::Generic::List_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, int32_t>*& __get__spotIndexBySpot();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, int32_t>*> const& __get__spotIndexBySpot() const;

  constexpr void __set__spotIndexBySpot(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, int32_t>* value);

  /// @brief Method get_spectatingSpots addr 0x225dfbc size 0x8 virtual false final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* get_spectatingSpots();

  /// @brief Method get_defaultSpot addr 0x225dfc4 size 0x158 virtual false final false
  inline ::GlobalNamespace::IMultiplayerSpectatingSpot* get_defaultSpot();

  /// @brief Method RegisterSpectatingSpot addr 0x225d88c size 0x164 virtual false final false
  inline void RegisterSpectatingSpot(::GlobalNamespace::IMultiplayerSpectatingSpot* spectatingSpot);

  /// @brief Method GetAdjacentSpot addr 0x225e290 size 0xb4 virtual false final false
  inline ::GlobalNamespace::IMultiplayerSpectatingSpot* GetAdjacentSpot(::GlobalNamespace::IMultiplayerSpectatingSpot* spectatingSpot, int32_t offset);

  /// @brief Method GetIndexBySpot addr 0x225e344 size 0x84 virtual false final false
  inline int32_t GetIndexBySpot(::GlobalNamespace::IMultiplayerSpectatingSpot* spectatingSpot);

  /// @brief Method UpdateIndexBySpotDictionary addr 0x225e11c size 0x174 virtual false final false
  inline void UpdateIndexBySpotDictionary();

  /// @brief Method SpotOnHasBeenRemoved addr 0x225e3c8 size 0x120 virtual false final false
  inline void SpotOnHasBeenRemoved(::GlobalNamespace::IMultiplayerSpectatingSpot* spectatingSpot);

  static inline ::GlobalNamespace::MultiplayerSpectatingSpotManager* New_ctor();

  /// @brief Method .ctor addr 0x225e4e8 size 0xc0 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSpectatingSpotManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerSpectatingSpotManager(MultiplayerSpectatingSpotManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerSpectatingSpotManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerSpectatingSpotManager(MultiplayerSpectatingSpotManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerSpectatingSpotManager();

public:
  /// @brief Field _spectatingSpots, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* ____spectatingSpots;

  /// @brief Field _spotIndexBySpot, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, int32_t>* ____spotIndexBySpot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerSpectatingSpotManager, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerSpectatingSpotManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerSpectatingSpotManager*, "", "MultiplayerSpectatingSpotManager");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerSpectatingSpotManager____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerSpectatingSpotManager____c*, "", "MultiplayerSpectatingSpotManager/<>c");
