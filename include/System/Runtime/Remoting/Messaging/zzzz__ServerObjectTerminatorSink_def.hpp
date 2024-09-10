#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/ServerObjectTerminatorSink.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ServerObjectTerminatorSink)
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class ServerObjectTerminatorSink;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink);
// Type: System.Runtime.Remoting.Messaging::ServerObjectTerminatorSink
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Messaging::ServerObjectTerminatorSink*
class CORDL_TYPE ServerObjectTerminatorSink : public ::System::Object {
public:
// Declarations
/// @brief Field _nextSink, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__nextSink, put=__cordl_internal_set__nextSink)) ::System::Runtime::Remoting::Messaging::IMessageSink*  _nextSink;

/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
constexpr operator  ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept;

/// @brief Method AsyncProcessMessage, addr 0x3c61f2c, size 0x1c8, virtual true, abstract: false, final true
inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage*  msg, ::System::Runtime::Remoting::Messaging::IMessageSink*  replySink) ;

static inline ::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink* New_ctor(::System::Runtime::Remoting::Messaging::IMessageSink*  nextSink) ;

/// @brief Method SyncProcessMessage, addr 0x3c61db8, size 0x174, virtual true, abstract: false, final true
inline ::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage*  msg) ;

constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& __cordl_internal_get__nextSink() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessageSink*> const& __cordl_internal_get__nextSink() const;

constexpr void __cordl_internal_set__nextSink(::System::Runtime::Remoting::Messaging::IMessageSink*  value) ;

/// @brief Method .ctor, addr 0x3c61d90, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Remoting::Messaging::IMessageSink*  nextSink) ;

/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessageSink"
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* i___System__Runtime__Remoting__Messaging__IMessageSink() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServerObjectTerminatorSink() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServerObjectTerminatorSink", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerObjectTerminatorSink(ServerObjectTerminatorSink && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerObjectTerminatorSink", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerObjectTerminatorSink(ServerObjectTerminatorSink const& ) = delete;

/// @brief Field _nextSink, offset: 0x10, size: 0x8, def value: None
 ::System::Runtime::Remoting::Messaging::IMessageSink*  ____nextSink;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink, ____nextSink) == 0x10, "Offset mismatch!");

} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink*, "System.Runtime.Remoting.Messaging", "ServerObjectTerminatorSink");
