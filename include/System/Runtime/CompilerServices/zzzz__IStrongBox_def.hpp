#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/IStrongBox.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IStrongBox)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class IStrongBox;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::IStrongBox);
// Type: System.Runtime.CompilerServices::IStrongBox
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: ::System.Runtime.CompilerServices::IStrongBox*
class CORDL_TYPE IStrongBox {
public:
// Declarations
 __declspec(property(get=get_Value, put=set_Value)) ::System::Object*  Value;

/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* get_Value() ;

/// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Value(::System::Object*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IStrongBox", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IStrongBox(IStrongBox && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IStrongBox", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IStrongBox(IStrongBox const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::IStrongBox);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::IStrongBox*, "System.Runtime.CompilerServices", "IStrongBox");
