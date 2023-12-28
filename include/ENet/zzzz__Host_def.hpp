#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Host)
namespace ENet {
class ChecksumCallback;
}
namespace ENet {
struct SslConfiguration;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace ENet {
struct Address;
}
namespace ENet {
struct Event;
}
namespace System {
class IDisposable;
}
namespace ENet {
class InterceptCallback;
}
namespace ENet {
struct Peer;
}
namespace ENet {
struct Packet;
}
// Forward declare root types
namespace ENet {
class Host;
}
// Write type traits
MARK_REF_PTR_T(::ENet::Host);
// Type: ENet::Host
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ENet {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15233))
// CS Name: ::ENet::Host*
class CORDL_TYPE Host : public ::System::Object {
public:
  // Declarations
  /// @brief Field nativeHost, offset 0x10, size 0x8
  __declspec(property(get = __get_nativeHost, put = __set_nativeHost)) void* nativeHost;

  __declspec(property(get = get_NativeData, put = set_NativeData)) void* NativeData;

  __declspec(property(get = get_IsSet)) bool IsSet;

  __declspec(property(get = get_PeersCount)) uint32_t PeersCount;

  __declspec(property(get = get_PacketsSent)) uint32_t PacketsSent;

  __declspec(property(get = get_PacketsReceived)) uint32_t PacketsReceived;

  __declspec(property(get = get_BytesSent)) uint32_t BytesSent;

  __declspec(property(get = get_BytesReceived)) uint32_t BytesReceived;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr void*& __get_nativeHost();

  constexpr void* const& __get_nativeHost() const;

  constexpr void __set_nativeHost(void* value);

  /// @brief Method get_NativeData addr 0x21f0d68 size 0x8 virtual false final false
  inline void* get_NativeData();

  /// @brief Method set_NativeData addr 0x21f0d70 size 0x8 virtual false final false
  inline void set_NativeData(void* value);

  /// @brief Method Dispose addr 0x21f0d78 size 0x6c virtual true final true
  inline void Dispose();

  /// @brief Method Dispose addr 0x21f0de4 size 0x74 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize addr 0x21f0ed4 size 0xa0 virtual true final false
  inline void Finalize();

  /// @brief Method get_IsSet addr 0x21f0f74 size 0x54 virtual false final false
  inline bool get_IsSet();

  /// @brief Method get_PeersCount addr 0x21f0fc8 size 0x18 virtual false final false
  inline uint32_t get_PeersCount();

  /// @brief Method get_PacketsSent addr 0x21f1104 size 0x18 virtual false final false
  inline uint32_t get_PacketsSent();

  /// @brief Method get_PacketsReceived addr 0x21f1198 size 0x18 virtual false final false
  inline uint32_t get_PacketsReceived();

  /// @brief Method get_BytesSent addr 0x21f122c size 0x18 virtual false final false
  inline uint32_t get_BytesSent();

  /// @brief Method get_BytesReceived addr 0x21f12c0 size 0x18 virtual false final false
  inline uint32_t get_BytesReceived();

  /// @brief Method ThrowIfNotCreated addr 0x21f0fe0 size 0xa8 virtual false final false
  inline void ThrowIfNotCreated();

  /// @brief Method ThrowIfChannelsExceeded addr 0x21f1354 size 0x5c virtual false final false
  static inline void ThrowIfChannelsExceeded(int32_t channelLimit);

  /// @brief Method Create addr 0x21f13b0 size 0x29c virtual false final false
  inline void Create(::System::Nullable_1<::ENet::Address> address, int32_t peerLimit, int32_t channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth, int32_t bufferSize,
                     ::ENet::SslConfiguration sslConfiguration);

  /// @brief Method PreventConnections addr 0x21f1884 size 0x28 virtual false final false
  inline void PreventConnections(bool state);

  /// @brief Method Broadcast addr 0x21f1930 size 0x80 virtual false final false
  inline void Broadcast(uint8_t channelID, ByRef<::ENet::Packet> packet);

  /// @brief Method Broadcast addr 0x21f1a44 size 0x90 virtual false final false
  inline void Broadcast(uint8_t channelID, ByRef<::ENet::Packet> packet, ::ENet::Peer excludedPeer);

  /// @brief Method Broadcast addr 0x21f1b70 size 0x1a0 virtual false final false
  inline void Broadcast(uint8_t channelID, ByRef<::ENet::Packet> packet, ::ArrayW<::ENet::Peer, ::Array<::ENet::Peer>*> peers);

  /// @brief Method CheckEvents addr 0x21f1dc4 size 0x58 virtual false final false
  inline int32_t CheckEvents(ByRef<::ENet::Event> event);

  /// @brief Method Connect addr 0x21f1ea0 size 0x54 virtual false final false
  inline ::ENet::Peer Connect(::ENet::Address address);

  /// @brief Method Connect addr 0x21f2048 size 0x50 virtual false final false
  inline ::ENet::Peer Connect(::ENet::Address address, int32_t channelLimit);

  /// @brief Method Connect addr 0x21f1ef4 size 0x154 virtual false final false
  inline ::ENet::Peer Connect(::ENet::Address address, int32_t channelLimit, uint32_t data);

  /// @brief Method Service addr 0x21f2134 size 0xb0 virtual false final false
  inline int32_t Service(int32_t timeout, ByRef<::ENet::Event> event);

  /// @brief Method SetBandwidthLimit addr 0x21f2278 size 0x30 virtual false final false
  inline void SetBandwidthLimit(uint32_t incomingBandwidth, uint32_t outgoingBandwidth);

  /// @brief Method SetChannelLimit addr 0x21f233c size 0x40 virtual false final false
  inline void SetChannelLimit(int32_t channelLimit);

  /// @brief Method SetMaxDuplicatePeers addr 0x21f2400 size 0x28 virtual false final false
  inline void SetMaxDuplicatePeers(uint16_t number);

  /// @brief Method SetInterceptCallback addr 0x21f24ac size 0x28 virtual false final false
  inline void SetInterceptCallback(void* callback);

  /// @brief Method SetInterceptCallback addr 0x21f2558 size 0x90 virtual false final false
  inline void SetInterceptCallback(::ENet::InterceptCallback* callback);

  /// @brief Method SetChecksumCallback addr 0x21f25e8 size 0x28 virtual false final false
  inline void SetChecksumCallback(void* callback);

  /// @brief Method SetChecksumCallback addr 0x21f2694 size 0x90 virtual false final false
  inline void SetChecksumCallback(::ENet::ChecksumCallback* callback);

  /// @brief Method Flush addr 0x21f2724 size 0x18 virtual false final false
  inline void Flush();

  static inline ::ENet::Host* New_ctor();

  /// @brief Method .ctor addr 0x21f27b8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Host", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Host(Host&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Host", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Host(Host const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Host();

public:
  /// @brief Field nativeHost, offset: 0x10, size: 0x8, def value: None
  void* ___nativeHost;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::Host, 0x18>, "Size mismatch!");

} // namespace ENet
NEED_NO_BOX(::ENet::Host);
DEFINE_IL2CPP_ARG_TYPE(::ENet::Host*, "ENet", "Host");
