#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LeaseSink)
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
// Forward declare root types
namespace System::Runtime::Remoting::Lifetime {
class LeaseSink;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Lifetime::LeaseSink);
// Type: System.Runtime.Remoting.Lifetime::LeaseSink
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Lifetime {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3095))
// CS Name: ::System.Runtime.Remoting.Lifetime::LeaseSink*
class CORDL_TYPE LeaseSink : public ::System::Object {
public:
  // Declarations
  /// @brief Field _nextSink, offset 0x10, size 0x8
  __declspec(property(get = __get__nextSink, put = __set__nextSink))::System::Runtime::Remoting::Messaging::IMessageSink* _nextSink;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept;

  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& __get__nextSink();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessageSink*> const& __get__nextSink() const;

  constexpr void __set__nextSink(::System::Runtime::Remoting::Messaging::IMessageSink* value);

  static inline ::System::Runtime::Remoting::Lifetime::LeaseSink* New_ctor(::System::Runtime::Remoting::Messaging::IMessageSink* nextSink);

  /// @brief Method .ctor addr 0x249bccc size 0x28 virtual false final false
  inline void _ctor(::System::Runtime::Remoting::Messaging::IMessageSink* nextSink);

  /// @brief Method SyncProcessMessage addr 0x249bcf4 size 0xb0 virtual true final true
  inline ::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);

  /// @brief Method AsyncProcessMessage addr 0x249c034 size 0xc4 virtual true final true
  inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                   ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);

  /// @brief Method RenewLease addr 0x249bda4 size 0x290 virtual false final false
  inline void RenewLease(::System::Runtime::Remoting::Messaging::IMessage* msg);

  // Ctor Parameters [CppParam { name: "", ty: "LeaseSink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaseSink(LeaseSink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaseSink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaseSink(LeaseSink const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaseSink();

public:
  /// @brief Field _nextSink, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::IMessageSink* ____nextSink;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Lifetime::LeaseSink, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Lifetime
NEED_NO_BOX(::System::Runtime::Remoting::Lifetime::LeaseSink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Lifetime::LeaseSink*, "System.Runtime.Remoting.Lifetime", "LeaseSink");
