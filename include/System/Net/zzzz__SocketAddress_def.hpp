#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SocketAddress)
namespace System::Net::Sockets {
struct AddressFamily;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class IPEndPoint;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class SocketAddress;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::SocketAddress);
// Type: System.Net::SocketAddress
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::SocketAddress*
class CORDL_TYPE SocketAddress : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Family))::System::Net::Sockets::AddressFamily Family;

  __declspec(property(get = get_Item)) uint8_t Item[];

  __declspec(property(get = get_Size)) int32_t Size;

  /// @brief Field m_Buffer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Buffer, put = __cordl_internal_set_m_Buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> m_Buffer;

  /// @brief Field m_Size, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Size, put = __cordl_internal_set_m_Size)) int32_t m_Size;

  /// @brief Field m_changed, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_changed, put = __cordl_internal_set_m_changed)) bool m_changed;

  /// @brief Field m_hash, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_hash, put = __cordl_internal_set_m_hash)) int32_t m_hash;

  /// @brief Method Equals, addr 0x2ed3c20, size 0xec, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* comparand);

  /// @brief Method GetHashCode, addr 0x2ed3d0c, size 0x130, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetIPAddress, addr 0x2ed3984, size 0x1f4, virtual false, abstract: false, final false
  inline ::System::Net::IPAddress* GetIPAddress();

  /// @brief Method GetIPEndPoint, addr 0x2ed3b78, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Net::IPEndPoint* GetIPEndPoint();

  static inline ::System::Net::SocketAddress* New_ctor(::System::Net::Sockets::AddressFamily family, int32_t size);

  static inline ::System::Net::SocketAddress* New_ctor(::System::Net::IPAddress* ipAddress);

  static inline ::System::Net::SocketAddress* New_ctor(::System::Net::IPAddress* ipaddress, int32_t port);

  /// @brief Method ToString, addr 0x2ed3e3c, size 0x2ec, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_m_Buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_m_Buffer();

  constexpr int32_t const& __cordl_internal_get_m_Size() const;

  constexpr int32_t& __cordl_internal_get_m_Size();

  constexpr bool const& __cordl_internal_get_m_changed() const;

  constexpr bool& __cordl_internal_get_m_changed();

  constexpr int32_t const& __cordl_internal_get_m_hash() const;

  constexpr int32_t& __cordl_internal_get_m_hash();

  constexpr void __cordl_internal_set_m_Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_m_Size(int32_t value);

  constexpr void __cordl_internal_set_m_changed(bool value);

  constexpr void __cordl_internal_set_m_hash(int32_t value);

  /// @brief Method .ctor, addr 0x2ed3580, size 0x120, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Sockets::AddressFamily family, int32_t size);

  /// @brief Method .ctor, addr 0x2ed36a0, size 0x288, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::IPAddress* ipAddress);

  /// @brief Method .ctor, addr 0x2ed3928, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::IPAddress* ipaddress, int32_t port);

  /// @brief Method get_Family, addr 0x2ed34c4, size 0x38, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::AddressFamily get_Family();

  /// @brief Method get_Item, addr 0x2ed3504, size 0x7c, virtual false, abstract: false, final false
  inline uint8_t get_Item(int32_t offset);

  /// @brief Method get_Size, addr 0x2ed34fc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Size();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SocketAddress();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SocketAddress", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SocketAddress(SocketAddress&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SocketAddress", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SocketAddress(SocketAddress const&) = delete;

  /// @brief Field m_Size, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Size;

  /// @brief Field m_Buffer, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___m_Buffer;

  /// @brief Field m_changed, offset: 0x20, size: 0x1, def value: None
  bool ___m_changed;

  /// @brief Field m_hash, offset: 0x24, size: 0x4, def value: None
  int32_t ___m_hash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::SocketAddress, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Net::SocketAddress, ___m_Size) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::SocketAddress, ___m_Buffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::SocketAddress, ___m_changed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::SocketAddress, ___m_hash) == 0x24, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::SocketAddress);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::SocketAddress*, "System.Net", "SocketAddress");
