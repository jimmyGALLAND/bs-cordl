#pragma once
#include "System/Xml/zzzz__XmlDateTimeSerializationMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlDateTimeSerializationMode::XmlDateTimeSerializationMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlDateTimeSerializationMode::XmlDateTimeSerializationMode() {}
constexpr ::System::Xml::XmlDateTimeSerializationMode System::Xml::XmlDateTimeSerializationMode::Local{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::XmlDateTimeSerializationMode System::Xml::XmlDateTimeSerializationMode::Utc{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::XmlDateTimeSerializationMode System::Xml::XmlDateTimeSerializationMode::Unspecified{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::XmlDateTimeSerializationMode System::Xml::XmlDateTimeSerializationMode::RoundtripKind{ static_cast<int32_t>(0x3) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
