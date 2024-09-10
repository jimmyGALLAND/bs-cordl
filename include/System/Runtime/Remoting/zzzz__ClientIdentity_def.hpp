#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/ClientIdentity.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/zzzz__Identity_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ClientIdentity)
namespace System::Runtime::Remoting {
class ObjRef;
}
namespace System {
class MarshalByRefObject;
}
namespace System {
class Type;
}
namespace System {
class WeakReference;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ClientIdentity;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::ClientIdentity);
// Type: System.Runtime.Remoting::ClientIdentity
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: ::System.Runtime.Remoting::ClientIdentity*
class CORDL_TYPE ClientIdentity : public ::System::Runtime::Remoting::Identity {
public:
// Declarations
 __declspec(property(get=get_ClientProxy, put=set_ClientProxy)) ::System::MarshalByRefObject*  ClientProxy;

 __declspec(property(get=get_TargetUri)) ::StringW  TargetUri;

/// @brief Field _proxyReference, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__proxyReference, put=__cordl_internal_set__proxyReference)) ::System::WeakReference*  _proxyReference;

/// @brief Method CreateObjRef, addr 0x3c36a50, size 0x8, virtual true, abstract: false, final false
inline ::System::Runtime::Remoting::ObjRef* CreateObjRef(::System::Type*  requestedType) ;

static inline ::System::Runtime::Remoting::ClientIdentity* New_ctor(::StringW  objectUri, ::System::Runtime::Remoting::ObjRef*  objRef) ;

constexpr ::System::WeakReference*& __cordl_internal_get__proxyReference() ;

constexpr ::cordl_internals::to_const_pointer<::System::WeakReference*> const& __cordl_internal_get__proxyReference() const;

constexpr void __cordl_internal_set__proxyReference(::System::WeakReference*  value) ;

/// @brief Method .ctor, addr 0x3c36858, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::StringW  objectUri, ::System::Runtime::Remoting::ObjRef*  objRef) ;

/// @brief Method get_ClientProxy, addr 0x3c36960, size 0x88, virtual false, abstract: false, final false
inline ::System::MarshalByRefObject* get_ClientProxy() ;

/// @brief Method get_TargetUri, addr 0x3c36a58, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_TargetUri() ;

/// @brief Method set_ClientProxy, addr 0x3c369e8, size 0x68, virtual false, abstract: false, final false
inline void set_ClientProxy(::System::MarshalByRefObject*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClientIdentity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClientIdentity", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClientIdentity(ClientIdentity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClientIdentity", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClientIdentity(ClientIdentity const& ) = delete;

/// @brief Field _proxyReference, offset: 0x48, size: 0x8, def value: None
 ::System::WeakReference*  ____proxyReference;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::ClientIdentity, 0x50>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ClientIdentity, ____proxyReference) == 0x48, "Offset mismatch!");

} // namespace end def System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::ClientIdentity);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::ClientIdentity*, "System.Runtime.Remoting", "ClientIdentity");
