#pragma once
// IWYU pragma private; include "System/Threading/Tasks/TaskAwaiters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TaskAwaiters)
namespace System::Threading::Tasks {
struct ForceAsyncAwaiter;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace System::Threading::Tasks {
class TaskAwaiters;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::TaskAwaiters);
// Type: System.Threading.Tasks::TaskAwaiters
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: ::System.Threading.Tasks::TaskAwaiters*
class CORDL_TYPE TaskAwaiters : public ::System::Object {
public:
// Declarations
/// @brief Method ForceAsync, addr 0x3dcf800, size 0x4, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::ForceAsyncAwaiter ForceAsync(::System::Threading::Tasks::Task*  task) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TaskAwaiters() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TaskAwaiters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskAwaiters(TaskAwaiters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskAwaiters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskAwaiters(TaskAwaiters const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskAwaiters, 0x10>, "Size mismatch!");

} // namespace end def System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::TaskAwaiters);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskAwaiters*, "System.Threading.Tasks", "TaskAwaiters");
