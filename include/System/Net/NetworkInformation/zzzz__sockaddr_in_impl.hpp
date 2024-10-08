#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/sockaddr_in.hpp"
#include "System/Net/NetworkInformation/zzzz__sockaddr_in_def.hpp"
// Ctor Parameters [CppParam { name: "sin_family", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sin_port", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sin_addr", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::sockaddr_in::sockaddr_in(uint16_t  sin_family, uint16_t  sin_port, uint32_t  sin_addr) noexcept  {
this->sin_family = sin_family;
this->sin_port = sin_port;
this->sin_addr = sin_addr;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::sockaddr_in::sockaddr_in()   {
}
