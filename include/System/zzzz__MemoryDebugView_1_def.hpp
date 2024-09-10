#pragma once
// IWYU pragma private; include "System/MemoryDebugView_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MemoryDebugView_1)
// Forward declare root types
namespace System {
template<typename T>
class MemoryDebugView_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::MemoryDebugView_1);
// Type: System::MemoryDebugView`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// cpp template
template<typename T>
// Is value type: false
// CS Name: ::System::MemoryDebugView`1<T>*
class CORDL_TYPE MemoryDebugView_1 : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr MemoryDebugView_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MemoryDebugView_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MemoryDebugView_1(MemoryDebugView_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MemoryDebugView_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MemoryDebugView_1(MemoryDebugView_1 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::MemoryDebugView_1, "System", "MemoryDebugView`1");
