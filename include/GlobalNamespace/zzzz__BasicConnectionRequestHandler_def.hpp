#pragma once
// IWYU pragma private; include "GlobalNamespace/BasicConnectionRequestHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BasicConnectionRequestHandler)
namespace GlobalNamespace {
class IConnectionRequestHandler;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
class BasicConnectionRequestHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BasicConnectionRequestHandler);
// Type: ::BasicConnectionRequestHandler
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BasicConnectionRequestHandler*
class CORDL_TYPE BasicConnectionRequestHandler : public ::System::Object {
public:
// Declarations
/// @brief Field <secret>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__secret_k__BackingField, put=__cordl_internal_set__secret_k__BackingField)) ::StringW  _secret_k__BackingField;

 __declspec(property(get=get_secret, put=set_secret)) ::StringW  secret;

/// @brief Convert operator to "::GlobalNamespace::IConnectionRequestHandler"
constexpr operator  ::GlobalNamespace::IConnectionRequestHandler*() noexcept;

/// @brief Method GetConnectionMessage, addr 0x226d434, size 0x70, virtual true, abstract: false, final true
inline void GetConnectionMessage(::LiteNetLib::Utils::NetDataWriter*  writer, ::StringW  userId, ::StringW  userName, bool  isConnectionOwner) ;

static inline ::GlobalNamespace::BasicConnectionRequestHandler* New_ctor() ;

/// @brief Method ValidateConnectionMessage, addr 0x226d4a4, size 0xbc, virtual true, abstract: false, final true
inline bool ValidateConnectionMessage(::LiteNetLib::Utils::NetDataReader*  reader, ByRef<::StringW>  userId, ByRef<::StringW>  userName, ByRef<bool>  isConnectionOwner) ;

constexpr ::StringW const& __cordl_internal_get__secret_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__secret_k__BackingField() ;

constexpr void __cordl_internal_set__secret_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x226d560, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_secret, addr 0x226d424, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_secret() ;

/// @brief Convert to "::GlobalNamespace::IConnectionRequestHandler"
constexpr ::GlobalNamespace::IConnectionRequestHandler* i___GlobalNamespace__IConnectionRequestHandler() noexcept;

/// @brief Method set_secret, addr 0x226d42c, size 0x8, virtual false, abstract: false, final false
inline void set_secret(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BasicConnectionRequestHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BasicConnectionRequestHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicConnectionRequestHandler(BasicConnectionRequestHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicConnectionRequestHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicConnectionRequestHandler(BasicConnectionRequestHandler const& ) = delete;

/// @brief Field <secret>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____secret_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BasicConnectionRequestHandler, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicConnectionRequestHandler, ____secret_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BasicConnectionRequestHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BasicConnectionRequestHandler*, "", "BasicConnectionRequestHandler");
