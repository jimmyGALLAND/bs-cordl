#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "LiteNetLib/BaseChannel.hpp"
#include "LiteNetLib/ConnectRequestResult.hpp"
#include "LiteNetLib/ConnectionRequest.hpp"
#include "LiteNetLib/ConnectionRequestResult.hpp"
#include "LiteNetLib/ConnectionState.hpp"
#include "LiteNetLib/DeliveryMethod.hpp"
#include "LiteNetLib/DisconnectInfo.hpp"
#include "LiteNetLib/DisconnectReason.hpp"
#include "LiteNetLib/DisconnectResult.hpp"
#include "LiteNetLib/EventBasedNatPunchListener.hpp"
#include "LiteNetLib/EventBasedNetListener.hpp"
#include "LiteNetLib/IDeliveryEventListener.hpp"
#include "LiteNetLib/INatPunchListener.hpp"
#include "LiteNetLib/INetEventListener.hpp"
#include "LiteNetLib/INetLogger.hpp"
#include "LiteNetLib/INetSocketListener.hpp"
#include "LiteNetLib/InvalidPacketException.hpp"
#include "LiteNetLib/LocalAddrType.hpp"
#include "LiteNetLib/NatAddressType.hpp"
#include "LiteNetLib/NatPunchModule.hpp"
#include "LiteNetLib/NetConnectAcceptPacket.hpp"
#include "LiteNetLib/NetConnectRequestPacket.hpp"
#include "LiteNetLib/NetConstants.hpp"
#include "LiteNetLib/NetDebug.hpp"
#include "LiteNetLib/NetEvent.hpp"
#include "LiteNetLib/NetLogLevel.hpp"
#include "LiteNetLib/NetManager.hpp"
#include "LiteNetLib/NetPacket.hpp"
#include "LiteNetLib/NetPacketPool.hpp"
#include "LiteNetLib/NetPacketReader.hpp"
#include "LiteNetLib/NetPeer.hpp"
#include "LiteNetLib/NetSocket.hpp"
#include "LiteNetLib/NetStatistics.hpp"
#include "LiteNetLib/NetUtils.hpp"
#include "LiteNetLib/PacketProperty.hpp"
#include "LiteNetLib/ReliableChannel.hpp"
#include "LiteNetLib/SequencedChannel.hpp"
#include "LiteNetLib/ShutdownResult.hpp"
#include "LiteNetLib/SimpleChannel.hpp"
#include "LiteNetLib/TooBigPacketException.hpp"
#include "LiteNetLib/UnconnectedMessageType.hpp"
#ifdef __cpp_modules
                    export module LiteNetLib;
                    #endif
                
