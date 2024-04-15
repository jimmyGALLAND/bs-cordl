#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Request)
namespace Oculus::Platform {
class Message;
}
namespace Oculus::Platform {
class __Message__Callback;
}
// Forward declare root types
namespace Oculus::Platform {
class Request;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Request);
// Type: Oculus.Platform::Request
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::Request*
class CORDL_TYPE Request : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_RequestID, put = set_RequestID)) uint64_t RequestID;

  /// @brief Field <RequestID>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__RequestID_k__BackingField, put = __cordl_internal_set__RequestID_k__BackingField)) uint64_t _RequestID_k__BackingField;

  /// @brief Field callback_, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback_, put = __cordl_internal_set_callback_))::Oculus::Platform::__Message__Callback* callback_;

  /// @brief Method HandleMessage, addr 0x29d95b8, size 0x6c, virtual true, abstract: false, final false
  inline void HandleMessage(::Oculus::Platform::Message* msg);

  static inline ::Oculus::Platform::Request* New_ctor(uint64_t requestID);

  /// @brief Method OnComplete, addr 0x29a2fa0, size 0x6c, virtual false, abstract: false, final false
  inline ::Oculus::Platform::Request* OnComplete(::Oculus::Platform::__Message__Callback* callback);

  /// @brief Method RunCallbacks, addr 0x29a8560, size 0x68, virtual false, abstract: false, final false
  static inline void RunCallbacks(uint32_t limit);

  constexpr uint64_t const& __cordl_internal_get__RequestID_k__BackingField() const;

  constexpr uint64_t& __cordl_internal_get__RequestID_k__BackingField();

  constexpr ::Oculus::Platform::__Message__Callback*& __cordl_internal_get_callback_();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::__Message__Callback*> const& __cordl_internal_get_callback_() const;

  constexpr void __cordl_internal_set__RequestID_k__BackingField(uint64_t value);

  constexpr void __cordl_internal_set_callback_(::Oculus::Platform::__Message__Callback* value);

  /// @brief Method .ctor, addr 0x29cfd74, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(uint64_t requestID);

  /// @brief Method get_RequestID, addr 0x29d95a8, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_RequestID();

  /// @brief Method set_RequestID, addr 0x29d95b0, size 0x8, virtual false, abstract: false, final false
  inline void set_RequestID(uint64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Request();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Request", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Request(Request&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Request", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Request(Request const&) = delete;

  /// @brief Field callback_, offset: 0x10, size: 0x8, def value: None
  ::Oculus::Platform::__Message__Callback* ___callback_;

  /// @brief Field <RequestID>k__BackingField, offset: 0x18, size: 0x8, def value: None
  uint64_t ____RequestID_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Request, 0x20>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Request, ___callback_) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Request, ____RequestID_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Request);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Request*, "Oculus.Platform", "Request");
