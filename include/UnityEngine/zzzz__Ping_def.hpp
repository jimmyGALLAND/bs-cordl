#pragma once
// IWYU pragma private; include "UnityEngine/Ping.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Ping)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine {
class Ping;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Ping);
// Type: UnityEngine::Ping
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Ping*
class CORDL_TYPE Ping : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_isDone)) bool  isDone;

/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

 __declspec(property(get=get_time)) int32_t  time;

/// @brief Method DestroyPing, addr 0x48133cc, size 0x5c, virtual false, abstract: false, final false
inline void DestroyPing() ;

/// @brief Method Finalize, addr 0x4813338, size 0x94, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method Internal_Create, addr 0x48132fc, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr Internal_Create(::StringW  address) ;

/// @brief Method Internal_Destroy, addr 0x4813428, size 0x3c, virtual false, abstract: false, final false
static inline void Internal_Destroy(::System::IntPtr  ptr) ;

/// @brief Method Internal_IsDone, addr 0x48134c4, size 0x3c, virtual false, abstract: false, final false
inline bool Internal_IsDone() ;

static inline ::UnityEngine::Ping* New_ctor(::StringW  address) ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x48132ac, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::StringW  address) ;

/// @brief Method get_isDone, addr 0x4813464, size 0x60, virtual false, abstract: false, final false
inline bool get_isDone() ;

/// @brief Method get_time, addr 0x4813500, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_time() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Ping() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Ping", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Ping(Ping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Ping", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Ping(Ping const& ) = delete;

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Ping, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Ping, ___m_Ptr) == 0x10, "Offset mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Ping);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Ping*, "UnityEngine", "Ping");
