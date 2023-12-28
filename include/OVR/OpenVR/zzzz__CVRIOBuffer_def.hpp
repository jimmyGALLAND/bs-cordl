#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRIOBuffer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CVRIOBuffer)
namespace OVR::OpenVR {
struct EIOBufferMode;
}
namespace OVR::OpenVR {
struct EIOBufferError;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRIOBuffer;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRIOBuffer);
// Type: OVR.OpenVR::CVRIOBuffer
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8546)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8577))
// CS Name: ::OVR.OpenVR::CVRIOBuffer*
class CORDL_TYPE CVRIOBuffer : public ::System::Object {
public:
  // Declarations
  /// @brief Field FnTable, offset 0x10, size 0x28
  __declspec(property(get = __get_FnTable, put = __set_FnTable))::OVR::OpenVR::IVRIOBuffer FnTable;

  constexpr ::OVR::OpenVR::IVRIOBuffer& __get_FnTable();

  constexpr ::OVR::OpenVR::IVRIOBuffer const& __get_FnTable() const;

  constexpr void __set_FnTable(::OVR::OpenVR::IVRIOBuffer value);

  static inline ::OVR::OpenVR::CVRIOBuffer* New_ctor(void* pInterface);

  /// @brief Method .ctor addr 0x27f5e50 size 0x114 virtual false final false
  inline void _ctor(void* pInterface);

  /// @brief Method Open addr 0x27f5f64 size 0x28 virtual false final false
  inline ::OVR::OpenVR::EIOBufferError Open(::StringW pchPath, ::OVR::OpenVR::EIOBufferMode mode, uint32_t unElementSize, uint32_t unElements, ByRef<uint64_t> pulBuffer);

  /// @brief Method Close addr 0x27f5f8c size 0x24 virtual false final false
  inline ::OVR::OpenVR::EIOBufferError Close(uint64_t ulBuffer);

  /// @brief Method Read addr 0x27f5fb0 size 0x28 virtual false final false
  inline ::OVR::OpenVR::EIOBufferError Read(uint64_t ulBuffer, void* pDst, uint32_t unBytes, ByRef<uint32_t> punRead);

  /// @brief Method Write addr 0x27f5fd8 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EIOBufferError Write(uint64_t ulBuffer, void* pSrc, uint32_t unBytes);

  /// @brief Method PropertyContainer addr 0x27f5ffc size 0x24 virtual false final false
  inline uint64_t PropertyContainer(uint64_t ulBuffer);

  // Ctor Parameters [CppParam { name: "", ty: "CVRIOBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRIOBuffer(CVRIOBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRIOBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRIOBuffer(CVRIOBuffer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRIOBuffer();

public:
  /// @brief Field FnTable, offset: 0x10, size: 0x28, def value: None
  ::OVR::OpenVR::IVRIOBuffer ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRIOBuffer, 0x38>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRIOBuffer);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRIOBuffer*, "OVR.OpenVR", "CVRIOBuffer");
