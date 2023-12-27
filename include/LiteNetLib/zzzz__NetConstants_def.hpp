#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetConstants)
// Forward declare root types
namespace LiteNetLib {
class NetConstants;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::NetConstants);
// Type: LiteNetLib::NetConstants
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14156))
// CS Name: ::LiteNetLib::NetConstants*
class CORDL_TYPE NetConstants : public ::System::Object {
public:
  // Declarations
  /// @brief Field PossibleMtu, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PossibleMtu, put = setStaticF_PossibleMtu))::ArrayW<int32_t, ::Array<int32_t>*> PossibleMtu;

  /// @brief Field MaxPacketSize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MaxPacketSize, put = setStaticF_MaxPacketSize)) int32_t MaxPacketSize;

  static inline void setStaticF_PossibleMtu(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_PossibleMtu();

  static inline void setStaticF_MaxPacketSize(int32_t value);

  static inline int32_t getStaticF_MaxPacketSize();

  // Ctor Parameters [CppParam { name: "", ty: "NetConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetConstants(NetConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetConstants(NetConstants const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetConstants();

public:
  /// @brief Field DefaultWindowSize offset 0xffffffff size 0x4
  static constexpr int32_t DefaultWindowSize{ static_cast<int32_t>(0x100) };

  /// @brief Field SocketBufferSize offset 0xffffffff size 0x4
  static constexpr int32_t SocketBufferSize{ static_cast<int32_t>(0x100000) };

  /// @brief Field SocketTTL offset 0xffffffff size 0x4
  static constexpr int32_t SocketTTL{ static_cast<int32_t>(0xff) };

  /// @brief Field HeaderSize offset 0xffffffff size 0x4
  static constexpr int32_t HeaderSize{ static_cast<int32_t>(0x1) };

  /// @brief Field ChanneledHeaderSize offset 0xffffffff size 0x4
  static constexpr int32_t ChanneledHeaderSize{ static_cast<int32_t>(0x4) };

  /// @brief Field FragmentHeaderSize offset 0xffffffff size 0x4
  static constexpr int32_t FragmentHeaderSize{ static_cast<int32_t>(0x6) };

  /// @brief Field FragmentedHeaderTotalSize offset 0xffffffff size 0x4
  static constexpr int32_t FragmentedHeaderTotalSize{ static_cast<int32_t>(0xa) };

  /// @brief Field MaxSequence offset 0xffffffff size 0x2
  static constexpr uint16_t MaxSequence{ static_cast<uint16_t>(0x8000u) };

  /// @brief Field HalfMaxSequence offset 0xffffffff size 0x2
  static constexpr uint16_t HalfMaxSequence{ static_cast<uint16_t>(0x4000u) };

  /// @brief Field ProtocolId offset 0xffffffff size 0x4
  static constexpr int32_t ProtocolId{ static_cast<int32_t>(0xb) };

  /// @brief Field MaxUdpHeaderSize offset 0xffffffff size 0x4
  static constexpr int32_t MaxUdpHeaderSize{ static_cast<int32_t>(0x44) };

  /// @brief Field MaxConnectionNumber offset 0xffffffff size 0x1
  static constexpr uint8_t MaxConnectionNumber{ static_cast<uint8_t>(0x4u) };

  /// @brief Field PacketPoolSize offset 0xffffffff size 0x4
  static constexpr int32_t PacketPoolSize{ static_cast<int32_t>(0x3e8) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::NetConstants, 0x10>, "Size mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::NetConstants);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetConstants*, "LiteNetLib", "NetConstants");
