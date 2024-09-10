#pragma once
// IWYU pragma private; include "UnityEngine/AsyncOperation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncOperation)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine {
class AsyncOperation;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AsyncOperation);
// Type: UnityEngine::AsyncOperation
// SizeInfo { instance_size: 32, native_size: 16, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::AsyncOperation*
class CORDL_TYPE AsyncOperation : public ::UnityEngine::YieldInstruction {
public:
// Declarations
 __declspec(property(get=get_allowSceneActivation, put=set_allowSceneActivation)) bool  allowSceneActivation;

 __declspec(property(get=get_isDone)) bool  isDone;

/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

/// @brief Field m_completeCallback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_completeCallback, put=__cordl_internal_set_m_completeCallback)) ::System::Action_1<::UnityEngine::AsyncOperation*>*  m_completeCallback;

 __declspec(property(put=set_priority)) int32_t  priority;

 __declspec(property(get=get_progress)) float_t  progress;

/// @brief Method Finalize, addr 0x4815454, size 0xbc, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method InternalDestroy, addr 0x48152dc, size 0x3c, virtual false, abstract: false, final false
static inline void InternalDestroy(::System::IntPtr  ptr) ;

/// @brief Method InvokeCompletionEvent, addr 0x4815510, size 0x30, virtual false, abstract: false, final false
inline void InvokeCompletionEvent() ;

static inline ::UnityEngine::AsyncOperation* New_ctor() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>*& __cordl_internal_get_m_completeCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::AsyncOperation*>*> const& __cordl_internal_get_m_completeCallback() const;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_m_completeCallback(::System::Action_1<::UnityEngine::AsyncOperation*>*  value) ;

/// @brief Method .ctor, addr 0x4814b0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_completed, addr 0x4815540, size 0xfc, virtual false, abstract: false, final false
inline void add_completed(::System::Action_1<::UnityEngine::AsyncOperation*>*  value) ;

/// @brief Method get_allowSceneActivation, addr 0x48153d4, size 0x3c, virtual false, abstract: false, final false
inline bool get_allowSceneActivation() ;

/// @brief Method get_isDone, addr 0x4815318, size 0x3c, virtual false, abstract: false, final false
inline bool get_isDone() ;

/// @brief Method get_progress, addr 0x4815354, size 0x3c, virtual false, abstract: false, final false
inline float_t get_progress() ;

/// @brief Method remove_completed, addr 0x481563c, size 0xa8, virtual false, abstract: false, final false
inline void remove_completed(::System::Action_1<::UnityEngine::AsyncOperation*>*  value) ;

/// @brief Method set_allowSceneActivation, addr 0x4815410, size 0x44, virtual false, abstract: false, final false
inline void set_allowSceneActivation(bool  value) ;

/// @brief Method set_priority, addr 0x4815390, size 0x44, virtual false, abstract: false, final false
inline void set_priority(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncOperation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncOperation(AsyncOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncOperation(AsyncOperation const& ) = delete;

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

/// @brief Field m_completeCallback, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::AsyncOperation*>*  ___m_completeCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AsyncOperation, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AsyncOperation, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AsyncOperation, ___m_completeCallback) == 0x18, "Offset mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AsyncOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AsyncOperation*, "UnityEngine", "AsyncOperation");
