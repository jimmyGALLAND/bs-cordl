#pragma once
// IWYU pragma private; include "UnityEngine/AsyncInstantiateOperationHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(AsyncInstantiateOperationHelper)
namespace UnityEngine {
class AsyncInstantiateOperation;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class AsyncInstantiateOperationHelper;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AsyncInstantiateOperationHelper);
// Type: UnityEngine::AsyncInstantiateOperationHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::AsyncInstantiateOperationHelper*
class CORDL_TYPE AsyncInstantiateOperationHelper : public ::System::Object {
public:
// Declarations
/// @brief Method SetAsyncInstantiateOperationResult, addr 0x48152c4, size 0x18, virtual false, abstract: false, final false
static inline void SetAsyncInstantiateOperationResult(::UnityEngine::AsyncInstantiateOperation*  op, ::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*>  result) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncInstantiateOperationHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncInstantiateOperationHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncInstantiateOperationHelper(AsyncInstantiateOperationHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncInstantiateOperationHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncInstantiateOperationHelper(AsyncInstantiateOperationHelper const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AsyncInstantiateOperationHelper, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AsyncInstantiateOperationHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AsyncInstantiateOperationHelper*, "UnityEngine", "AsyncInstantiateOperationHelper");
