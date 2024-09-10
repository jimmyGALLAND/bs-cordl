#pragma once
// IWYU pragma private; include "GlobalNamespace/StandaloneMonobehaviorExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StandaloneMonobehaviorExtensions)
namespace GlobalNamespace {
class IStandaloneMonobehavior;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Action;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace GlobalNamespace {
class StandaloneMonobehaviorExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandaloneMonobehaviorExtensions);
// Type: ::StandaloneMonobehaviorExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StandaloneMonobehaviorExtensions*
class CORDL_TYPE StandaloneMonobehaviorExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method Dispatch, addr 0x22829a0, size 0xa4, virtual false, abstract: false, final false
static inline void Dispatch(::GlobalNamespace::IStandaloneMonobehavior*  standaloneMonoBehavior, ::System::Action*  action) ;

/// @brief Method DispatchAsync, addr 0x2282a44, size 0xa8, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* DispatchAsync(::GlobalNamespace::IStandaloneMonobehavior*  standaloneMonoBehavior, ::System::Func_1<::System::Threading::Tasks::Task*>*  action) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StandaloneMonobehaviorExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StandaloneMonobehaviorExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StandaloneMonobehaviorExtensions(StandaloneMonobehaviorExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandaloneMonobehaviorExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandaloneMonobehaviorExtensions(StandaloneMonobehaviorExtensions const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandaloneMonobehaviorExtensions, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandaloneMonobehaviorExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandaloneMonobehaviorExtensions*, "", "StandaloneMonobehaviorExtensions");
