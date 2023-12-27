#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CrossAppDomainData)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class CrossAppDomainData;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Channels::CrossAppDomainData);
// Type: System.Runtime.Remoting.Channels::CrossAppDomainData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3115))
// CS Name: ::System.Runtime.Remoting.Channels::CrossAppDomainData*
class CORDL_TYPE CrossAppDomainData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _ContextID, offset 0x10, size 0x8
  __declspec(property(get = __get__ContextID, put = __set__ContextID))::System::Object* _ContextID;

  /// @brief Field _DomainID, offset 0x18, size 0x4
  __declspec(property(get = __get__DomainID, put = __set__DomainID)) int32_t _DomainID;

  /// @brief Field _processGuid, offset 0x20, size 0x8
  __declspec(property(get = __get__processGuid, put = __set__processGuid))::StringW _processGuid;

  __declspec(property(get = get_DomainID)) int32_t DomainID;

  __declspec(property(get = get_ProcessID))::StringW ProcessID;

  constexpr ::System::Object*& __get__ContextID();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__ContextID() const;

  constexpr void __set__ContextID(::System::Object* value);

  constexpr int32_t& __get__DomainID();

  constexpr int32_t const& __get__DomainID() const;

  constexpr void __set__DomainID(int32_t value);

  constexpr ::StringW& __get__processGuid();

  constexpr ::StringW const& __get__processGuid() const;

  constexpr void __set__processGuid(::StringW value);

  static inline ::System::Runtime::Remoting::Channels::CrossAppDomainData* New_ctor(int32_t domainId);

  /// @brief Method .ctor addr 0x24a2af0 size 0xa8 virtual false final false
  inline void _ctor(int32_t domainId);

  /// @brief Method get_DomainID addr 0x24a2b98 size 0x8 virtual false final false
  inline int32_t get_DomainID();

  /// @brief Method get_ProcessID addr 0x24a2ba0 size 0x8 virtual false final false
  inline ::StringW get_ProcessID();

  // Ctor Parameters [CppParam { name: "", ty: "CrossAppDomainData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrossAppDomainData(CrossAppDomainData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrossAppDomainData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrossAppDomainData(CrossAppDomainData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrossAppDomainData();

public:
  /// @brief Field _ContextID, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____ContextID;

  /// @brief Field _DomainID, offset: 0x18, size: 0x4, def value: None
  int32_t ____DomainID;

  /// @brief Field _processGuid, offset: 0x20, size: 0x8, def value: None
  ::StringW ____processGuid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Channels::CrossAppDomainData, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Channels
NEED_NO_BOX(::System::Runtime::Remoting::Channels::CrossAppDomainData);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::CrossAppDomainData*, "System.Runtime.Remoting.Channels", "CrossAppDomainData");
