#pragma once
// IWYU pragma private; include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MonoBehaviour)
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class MonoBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::MonoBehaviour);
// Type: UnityEngine::MonoBehaviour
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::MonoBehaviour*
class CORDL_TYPE MonoBehaviour : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(get=get_destroyCancellationToken)) ::System::Threading::CancellationToken  destroyCancellationToken;

/// @brief Field m_CancellationTokenSource, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CancellationTokenSource, put=__cordl_internal_set_m_CancellationTokenSource)) ::System::Threading::CancellationTokenSource*  m_CancellationTokenSource;

 __declspec(property(get=get_useGUILayout, put=set_useGUILayout)) bool  useGUILayout;

/// @brief Method CancelInvoke, addr 0x481b408, size 0x3c, virtual false, abstract: false, final false
inline void CancelInvoke() ;

/// @brief Method CancelInvoke, addr 0x481b664, size 0x44, virtual false, abstract: false, final false
inline void CancelInvoke(::StringW  methodName) ;

/// @brief Method CancelInvoke, addr 0x481b6a8, size 0x44, virtual false, abstract: false, final false
static inline void CancelInvoke(::UnityEngine::MonoBehaviour*  self, ::StringW  methodName) ;

/// @brief Method GetScriptClassName, addr 0x481be10, size 0x3c, virtual false, abstract: false, final false
inline ::StringW GetScriptClassName() ;

/// @brief Method Internal_CancelInvokeAll, addr 0x481b444, size 0x3c, virtual false, abstract: false, final false
static inline void Internal_CancelInvokeAll(::UnityEngine::MonoBehaviour*  self) ;

/// @brief Method Internal_IsInvokingAll, addr 0x481b3cc, size 0x3c, virtual false, abstract: false, final false
static inline bool Internal_IsInvokingAll(::UnityEngine::MonoBehaviour*  self) ;

/// @brief Method Invoke, addr 0x481b480, size 0x58, virtual false, abstract: false, final false
inline void Invoke(::StringW  methodName, float_t  time) ;

/// @brief Method InvokeDelayed, addr 0x481b4d8, size 0x5c, virtual false, abstract: false, final false
static inline void InvokeDelayed(::UnityEngine::MonoBehaviour*  self, ::StringW  methodName, float_t  time, float_t  repeatRate) ;

/// @brief Method InvokeRepeating, addr 0x481b534, size 0xb8, virtual false, abstract: false, final false
inline void InvokeRepeating(::StringW  methodName, float_t  time, float_t  repeatRate) ;

/// @brief Method IsInvoking, addr 0x481b390, size 0x3c, virtual false, abstract: false, final false
inline bool IsInvoking() ;

/// @brief Method IsInvoking, addr 0x481b6ec, size 0x44, virtual false, abstract: false, final false
inline bool IsInvoking(::StringW  methodName) ;

/// @brief Method IsInvoking, addr 0x481b730, size 0x44, virtual false, abstract: false, final false
static inline bool IsInvoking(::UnityEngine::MonoBehaviour*  self, ::StringW  methodName) ;

/// @brief Method IsObjectMonoBehaviour, addr 0x481b888, size 0x3c, virtual false, abstract: false, final false
static inline bool IsObjectMonoBehaviour(::UnityEngine::Object*  obj) ;

static inline ::UnityEngine::MonoBehaviour* New_ctor() ;

/// @brief Method OnCancellationTokenCreated, addr 0x481b340, size 0x3c, virtual false, abstract: false, final false
inline void OnCancellationTokenCreated() ;

/// @brief Method RaiseCancellation, addr 0x481b37c, size 0x14, virtual false, abstract: false, final false
inline void RaiseCancellation() ;

/// @brief Method StartCoroutine, addr 0x481b774, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Coroutine* StartCoroutine(::StringW  methodName) ;

/// @brief Method StartCoroutine, addr 0x481b77c, size 0x10c, virtual false, abstract: false, final false
inline ::UnityEngine::Coroutine* StartCoroutine(::StringW  methodName, ::System::Object*  value) ;

/// @brief Method StartCoroutine, addr 0x481b918, size 0xf0, virtual false, abstract: false, final false
inline ::UnityEngine::Coroutine* StartCoroutine(::System::Collections::IEnumerator*  routine) ;

/// @brief Method StartCoroutineManaged, addr 0x481b8c4, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Coroutine* StartCoroutineManaged(::StringW  methodName, ::System::Object*  value) ;

/// @brief Method StartCoroutineManaged2, addr 0x481ba08, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::Coroutine* StartCoroutineManaged2(::System::Collections::IEnumerator*  enumerator) ;

/// @brief Method StartCoroutine_Auto, addr 0x481ba4c, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Coroutine* StartCoroutine_Auto(::System::Collections::IEnumerator*  routine) ;

/// @brief Method StopAllCoroutines, addr 0x481bcfc, size 0x3c, virtual false, abstract: false, final false
inline void StopAllCoroutines() ;

/// @brief Method StopCoroutine, addr 0x481bcb8, size 0x44, virtual false, abstract: false, final false
inline void StopCoroutine(::StringW  methodName) ;

/// @brief Method StopCoroutine, addr 0x481ba50, size 0xf0, virtual false, abstract: false, final false
inline void StopCoroutine(::System::Collections::IEnumerator*  routine) ;

/// @brief Method StopCoroutine, addr 0x481bb84, size 0xf0, virtual false, abstract: false, final false
inline void StopCoroutine(::UnityEngine::Coroutine*  routine) ;

/// @brief Method StopCoroutineFromEnumeratorManaged, addr 0x481bb40, size 0x44, virtual false, abstract: false, final false
inline void StopCoroutineFromEnumeratorManaged(::System::Collections::IEnumerator*  routine) ;

/// @brief Method StopCoroutineManaged, addr 0x481bc74, size 0x44, virtual false, abstract: false, final false
inline void StopCoroutineManaged(::UnityEngine::Coroutine*  routine) ;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get_m_CancellationTokenSource() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __cordl_internal_get_m_CancellationTokenSource() const;

constexpr void __cordl_internal_set_m_CancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

/// @brief Method .ctor, addr 0x481be4c, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_destroyCancellationToken, addr 0x481b2a8, size 0x98, virtual false, abstract: false, final false
inline ::System::Threading::CancellationToken get_destroyCancellationToken() ;

/// @brief Method get_useGUILayout, addr 0x481bd38, size 0x3c, virtual false, abstract: false, final false
inline bool get_useGUILayout() ;

/// @brief Method print, addr 0x481bdb8, size 0x58, virtual false, abstract: false, final false
static inline void print(::System::Object*  message) ;

/// @brief Method set_useGUILayout, addr 0x481bd74, size 0x44, virtual false, abstract: false, final false
inline void set_useGUILayout(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBehaviour(MonoBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBehaviour(MonoBehaviour const& ) = delete;

/// @brief Field m_CancellationTokenSource, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ___m_CancellationTokenSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::MonoBehaviour, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::MonoBehaviour, ___m_CancellationTokenSource) == 0x18, "Offset mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::MonoBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MonoBehaviour*, "UnityEngine", "MonoBehaviour");
