#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalDataStoreSlot)
namespace System {
class LocalDataStoreMgr;
}
// Forward declare root types
namespace System {
class LocalDataStoreSlot;
}
// Write type traits
MARK_REF_PTR_T(::System::LocalDataStoreSlot);
// Type: System::LocalDataStoreSlot
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2544))
// CS Name: ::System::LocalDataStoreSlot*
class CORDL_TYPE LocalDataStoreSlot : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_mgr, offset 0x10, size 0x8
  __declspec(property(get = __get_m_mgr, put = __set_m_mgr))::System::LocalDataStoreMgr* m_mgr;

  /// @brief Field m_slot, offset 0x18, size 0x4
  __declspec(property(get = __get_m_slot, put = __set_m_slot)) int32_t m_slot;

  /// @brief Field m_cookie, offset 0x20, size 0x8
  __declspec(property(get = __get_m_cookie, put = __set_m_cookie)) int64_t m_cookie;

  __declspec(property(get = get_Manager))::System::LocalDataStoreMgr* Manager;

  __declspec(property(get = get_Slot)) int32_t Slot;

  __declspec(property(get = get_Cookie)) int64_t Cookie;

  constexpr ::System::LocalDataStoreMgr*& __get_m_mgr();

  constexpr ::cordl_internals::to_const_pointer<::System::LocalDataStoreMgr*> const& __get_m_mgr() const;

  constexpr void __set_m_mgr(::System::LocalDataStoreMgr* value);

  constexpr int32_t& __get_m_slot();

  constexpr int32_t const& __get_m_slot() const;

  constexpr void __set_m_slot(int32_t value);

  constexpr int64_t& __get_m_cookie();

  constexpr int64_t const& __get_m_cookie() const;

  constexpr void __set_m_cookie(int64_t value);

  static inline ::System::LocalDataStoreSlot* New_ctor(::System::LocalDataStoreMgr* mgr, int32_t slot, int64_t cookie);

  /// @brief Method .ctor addr 0x25d8300 size 0x40 virtual false final false
  inline void _ctor(::System::LocalDataStoreMgr* mgr, int32_t slot, int64_t cookie);

  /// @brief Method get_Manager addr 0x25d8340 size 0x8 virtual false final false
  inline ::System::LocalDataStoreMgr* get_Manager();

  /// @brief Method get_Slot addr 0x25d8348 size 0x8 virtual false final false
  inline int32_t get_Slot();

  /// @brief Method get_Cookie addr 0x25d8350 size 0x8 virtual false final false
  inline int64_t get_Cookie();

  /// @brief Method Finalize addr 0x25d8358 size 0xac virtual true final false
  inline void Finalize();

  // Ctor Parameters [CppParam { name: "", ty: "LocalDataStoreSlot", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalDataStoreSlot(LocalDataStoreSlot&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalDataStoreSlot", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalDataStoreSlot(LocalDataStoreSlot const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalDataStoreSlot();

public:
  /// @brief Field m_mgr, offset: 0x10, size: 0x8, def value: None
  ::System::LocalDataStoreMgr* ___m_mgr;

  /// @brief Field m_slot, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_slot;

  /// @brief Field m_cookie, offset: 0x20, size: 0x8, def value: None
  int64_t ___m_cookie;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::LocalDataStoreSlot, 0x28>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::LocalDataStoreSlot);
DEFINE_IL2CPP_ARG_TYPE(::System::LocalDataStoreSlot*, "System", "LocalDataStoreSlot");
