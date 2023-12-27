#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalDataStoreMgr)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class LocalDataStoreSlot;
}
namespace System {
class LocalDataStore;
}
namespace System {
class LocalDataStoreHolder;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace System {
class LocalDataStoreMgr;
}
// Write type traits
MARK_REF_PTR_T(::System::LocalDataStoreMgr);
// Type: System::LocalDataStoreMgr
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2545))
// CS Name: ::System::LocalDataStoreMgr*
class CORDL_TYPE LocalDataStoreMgr : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_SlotInfoTable, offset 0x10, size 0x8
  __declspec(property(get = __get_m_SlotInfoTable, put = __set_m_SlotInfoTable))::ArrayW<bool, ::Array<bool>*> m_SlotInfoTable;

  /// @brief Field m_FirstAvailableSlot, offset 0x18, size 0x4
  __declspec(property(get = __get_m_FirstAvailableSlot, put = __set_m_FirstAvailableSlot)) int32_t m_FirstAvailableSlot;

  /// @brief Field m_ManagedLocalDataStores, offset 0x20, size 0x8
  __declspec(property(get = __get_m_ManagedLocalDataStores, put = __set_m_ManagedLocalDataStores))::System::Collections::Generic::List_1<::System::LocalDataStore*>* m_ManagedLocalDataStores;

  /// @brief Field m_KeyToSlotMap, offset 0x28, size 0x8
  __declspec(property(get = __get_m_KeyToSlotMap, put = __set_m_KeyToSlotMap))::System::Collections::Generic::Dictionary_2<::StringW, ::System::LocalDataStoreSlot*>* m_KeyToSlotMap;

  /// @brief Field m_CookieGenerator, offset 0x30, size 0x8
  __declspec(property(get = __get_m_CookieGenerator, put = __set_m_CookieGenerator)) int64_t m_CookieGenerator;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __get_m_SlotInfoTable();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __get_m_SlotInfoTable() const;

  constexpr void __set_m_SlotInfoTable(::ArrayW<bool, ::Array<bool>*> value);

  constexpr int32_t& __get_m_FirstAvailableSlot();

  constexpr int32_t const& __get_m_FirstAvailableSlot() const;

  constexpr void __set_m_FirstAvailableSlot(int32_t value);

  constexpr ::System::Collections::Generic::List_1<::System::LocalDataStore*>*& __get_m_ManagedLocalDataStores();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::LocalDataStore*>*> const& __get_m_ManagedLocalDataStores() const;

  constexpr void __set_m_ManagedLocalDataStores(::System::Collections::Generic::List_1<::System::LocalDataStore*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::LocalDataStoreSlot*>*& __get_m_KeyToSlotMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::LocalDataStoreSlot*>*> const& __get_m_KeyToSlotMap() const;

  constexpr void __set_m_KeyToSlotMap(::System::Collections::Generic::Dictionary_2<::StringW, ::System::LocalDataStoreSlot*>* value);

  constexpr int64_t& __get_m_CookieGenerator();

  constexpr int64_t const& __get_m_CookieGenerator() const;

  constexpr void __set_m_CookieGenerator(int64_t value);

  /// @brief Method CreateLocalDataStore addr 0x25d859c size 0x1c0 virtual false final false
  inline ::System::LocalDataStoreHolder* CreateLocalDataStore();

  /// @brief Method DeleteLocalDataStore addr 0x25d7cb4 size 0x104 virtual false final false
  inline void DeleteLocalDataStore(::System::LocalDataStore* store);

  /// @brief Method AllocateDataSlot addr 0x25d875c size 0x250 virtual false final false
  inline ::System::LocalDataStoreSlot* AllocateDataSlot();

  /// @brief Method AllocateNamedDataSlot addr 0x25d89ac size 0x11c virtual false final false
  inline ::System::LocalDataStoreSlot* AllocateNamedDataSlot(::StringW name);

  /// @brief Method GetNamedDataSlot addr 0x25d8ac8 size 0x11c virtual false final false
  inline ::System::LocalDataStoreSlot* GetNamedDataSlot(::StringW name);

  /// @brief Method FreeNamedDataSlot addr 0x25d8be4 size 0x104 virtual false final false
  inline void FreeNamedDataSlot(::StringW name);

  /// @brief Method FreeDataSlot addr 0x25d8404 size 0x198 virtual false final false
  inline void FreeDataSlot(int32_t slot, int64_t cookie);

  /// @brief Method ValidateSlot addr 0x25d7e90 size 0x7c virtual false final false
  inline void ValidateSlot(::System::LocalDataStoreSlot* slot);

  /// @brief Method GetSlotTableLength addr 0x25d82e4 size 0x1c virtual false final false
  inline int32_t GetSlotTableLength();

  static inline ::System::LocalDataStoreMgr* New_ctor();

  /// @brief Method .ctor addr 0x25d8ce8 size 0xec virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LocalDataStoreMgr", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalDataStoreMgr(LocalDataStoreMgr&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalDataStoreMgr", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalDataStoreMgr(LocalDataStoreMgr const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalDataStoreMgr();

public:
  /// @brief Field m_SlotInfoTable, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___m_SlotInfoTable;

  /// @brief Field m_FirstAvailableSlot, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_FirstAvailableSlot;

  /// @brief Field m_ManagedLocalDataStores, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::LocalDataStore*>* ___m_ManagedLocalDataStores;

  /// @brief Field m_KeyToSlotMap, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::LocalDataStoreSlot*>* ___m_KeyToSlotMap;

  /// @brief Field m_CookieGenerator, offset: 0x30, size: 0x8, def value: None
  int64_t ___m_CookieGenerator;

  /// @brief Field InitialSlotTableSize offset 0xffffffff size 0x4
  static constexpr int32_t InitialSlotTableSize{ static_cast<int32_t>(0x40) };

  /// @brief Field SlotTableDoubleThreshold offset 0xffffffff size 0x4
  static constexpr int32_t SlotTableDoubleThreshold{ static_cast<int32_t>(0x200) };

  /// @brief Field LargeSlotTableSizeIncrease offset 0xffffffff size 0x4
  static constexpr int32_t LargeSlotTableSizeIncrease{ static_cast<int32_t>(0x80) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::LocalDataStoreMgr, 0x38>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::LocalDataStoreMgr);
DEFINE_IL2CPP_ARG_TYPE(::System::LocalDataStoreMgr*, "System", "LocalDataStoreMgr");
