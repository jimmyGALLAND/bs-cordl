#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProcessPort)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ProcessPort;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ProcessPort);
// Type: ::ProcessPort
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8065))
// CS Name: ::ProcessPort*
class CORDL_TYPE ProcessPort : public ::System::Object {
public:
  // Declarations
  /// @brief Field <processName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__processName_k__BackingField, put = __set__processName_k__BackingField))::StringW _processName_k__BackingField;

  /// @brief Field <processId>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __get__processId_k__BackingField, put = __set__processId_k__BackingField)) int32_t _processId_k__BackingField;

  /// @brief Field <portNumber>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__portNumber_k__BackingField, put = __set__portNumber_k__BackingField))::StringW _portNumber_k__BackingField;

  /// @brief Field <protocol>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__protocol_k__BackingField, put = __set__protocol_k__BackingField))::StringW _protocol_k__BackingField;

  __declspec(property(get = get_processName, put = set_processName))::StringW processName;

  __declspec(property(get = get_processId, put = set_processId)) int32_t processId;

  __declspec(property(get = get_portNumber, put = set_portNumber))::StringW portNumber;

  __declspec(property(get = get_protocol, put = set_protocol))::StringW protocol;

  constexpr ::StringW& __get__processName_k__BackingField();

  constexpr ::StringW const& __get__processName_k__BackingField() const;

  constexpr void __set__processName_k__BackingField(::StringW value);

  constexpr int32_t& __get__processId_k__BackingField();

  constexpr int32_t const& __get__processId_k__BackingField() const;

  constexpr void __set__processId_k__BackingField(int32_t value);

  constexpr ::StringW& __get__portNumber_k__BackingField();

  constexpr ::StringW const& __get__portNumber_k__BackingField() const;

  constexpr void __set__portNumber_k__BackingField(::StringW value);

  constexpr ::StringW& __get__protocol_k__BackingField();

  constexpr ::StringW const& __get__protocol_k__BackingField() const;

  constexpr void __set__protocol_k__BackingField(::StringW value);

  /// @brief Method ToString addr 0x27a0f20 size 0x168 virtual true final false
  inline ::StringW ToString();

  /// @brief Method get_processName addr 0x27a1088 size 0x8 virtual false final false
  inline ::StringW get_processName();

  /// @brief Method set_processName addr 0x27a1090 size 0x8 virtual false final false
  inline void set_processName(::StringW value);

  /// @brief Method get_processId addr 0x27a1098 size 0x8 virtual false final false
  inline int32_t get_processId();

  /// @brief Method set_processId addr 0x27a10a0 size 0x8 virtual false final false
  inline void set_processId(int32_t value);

  /// @brief Method get_portNumber addr 0x27a10a8 size 0x8 virtual false final false
  inline ::StringW get_portNumber();

  /// @brief Method set_portNumber addr 0x27a10b0 size 0x8 virtual false final false
  inline void set_portNumber(::StringW value);

  /// @brief Method get_protocol addr 0x27a10b8 size 0x8 virtual false final false
  inline ::StringW get_protocol();

  /// @brief Method set_protocol addr 0x27a10c0 size 0x8 virtual false final false
  inline void set_protocol(::StringW value);

  /// @brief Method LookupProcess addr 0x27a10c8 size 0xcc virtual false final false
  static inline ::StringW LookupProcess(int32_t pid);

  /// @brief Method GetProcessesByPort addr 0x27a1194 size 0xbd4 virtual false final false
  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::ProcessPort*>* GetProcessesByPort(::StringW targetPort);

  static inline ::GlobalNamespace::ProcessPort* New_ctor();

  /// @brief Method .ctor addr 0x27a1d68 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ProcessPort", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProcessPort(ProcessPort&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProcessPort", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProcessPort(ProcessPort const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessPort();

public:
  /// @brief Field <processName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____processName_k__BackingField;

  /// @brief Field <processId>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____processId_k__BackingField;

  /// @brief Field <portNumber>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____portNumber_k__BackingField;

  /// @brief Field <protocol>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____protocol_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ProcessPort, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ProcessPort);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ProcessPort*, "", "ProcessPort");
