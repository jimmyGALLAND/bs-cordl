#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ThreadStateException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Threading {
class ThreadStateException;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::ThreadStateException);
// Type: System.Threading::ThreadStateException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// CS Name: ::System.Threading::ThreadStateException*
class CORDL_TYPE ThreadStateException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::Threading::ThreadStateException* New_ctor();

  static inline ::System::Threading::ThreadStateException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Threading::ThreadStateException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x2899120, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x28991a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x289917c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadStateException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThreadStateException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadStateException(ThreadStateException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadStateException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadStateException(ThreadStateException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::ThreadStateException, 0x90>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::ThreadStateException);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ThreadStateException*, "System.Threading", "ThreadStateException");
