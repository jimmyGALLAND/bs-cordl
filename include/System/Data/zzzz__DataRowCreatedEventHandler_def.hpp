#pragma once
// IWYU pragma private; include "System/Data/DataRowCreatedEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataRowCreatedEventHandler)
namespace System::Data {
class DataRow;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
class DataRowCreatedEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataRowCreatedEventHandler);
// Type: System.Data::DataRowCreatedEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::DataRowCreatedEventHandler*
class CORDL_TYPE DataRowCreatedEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x40d52d0, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::Object*  sender, ::System::Data::DataRow*  r) ;

static inline ::System::Data::DataRowCreatedEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x40d51cc, size 0x104, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DataRowCreatedEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DataRowCreatedEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DataRowCreatedEventHandler(DataRowCreatedEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataRowCreatedEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataRowCreatedEventHandler(DataRowCreatedEventHandler const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::DataRowCreatedEventHandler, 0x80>, "Size mismatch!");

} // namespace end def System::Data
NEED_NO_BOX(::System::Data::DataRowCreatedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataRowCreatedEventHandler*, "System.Data", "DataRowCreatedEventHandler");
