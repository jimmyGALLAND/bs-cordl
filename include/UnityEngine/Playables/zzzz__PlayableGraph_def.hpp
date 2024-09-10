#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableGraph.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayableGraph)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Playables {
struct FrameRate;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class IExposedPropertyTable;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct PlayableGraph;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::PlayableGraph);
// Type: UnityEngine.Playables::PlayableGraph
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: ::UnityEngine.Playables::PlayableGraph
struct CORDL_TYPE PlayableGraph {
public:
// Declarations
/// @brief Method Connect, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename U,typename V>
inline bool Connect(U  source, int32_t  sourceOutputPort, V  destination, int32_t  destinationInputPort) ;

/// @brief Method ConnectInternal, addr 0x483990c, size 0x74, virtual false, abstract: false, final false
inline bool ConnectInternal(::UnityEngine::Playables::PlayableHandle  source, int32_t  sourceOutputPort, ::UnityEngine::Playables::PlayableHandle  destination, int32_t  destinationInputPort) ;

/// @brief Method ConnectInternal_Injected, addr 0x4839980, size 0x6c, virtual false, abstract: false, final false
static inline bool ConnectInternal_Injected(ByRef<::UnityEngine::Playables::PlayableGraph>  _unity_self, ByRef<::UnityEngine::Playables::PlayableHandle>  source, int32_t  sourceOutputPort, ByRef<::UnityEngine::Playables::PlayableHandle>  destination, int32_t  destinationInputPort) ;

/// @brief Method CreatePlayableHandle, addr 0x4838b4c, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayableHandle CreatePlayableHandle() ;

/// @brief Method CreatePlayableHandle_Injected, addr 0x48396c4, size 0x44, virtual false, abstract: false, final false
static inline void CreatePlayableHandle_Injected(ByRef<::UnityEngine::Playables::PlayableGraph>  _unity_self, ByRef<::UnityEngine::Playables::PlayableHandle>  ret) ;

/// @brief Method CreateScriptOutputInternal, addr 0x4839708, size 0x54, virtual false, abstract: false, final false
inline bool CreateScriptOutputInternal(::StringW  name, ByRef<::UnityEngine::Playables::PlayableOutputHandle>  handle) ;

/// @brief Method CreateScriptOutputInternal_Injected, addr 0x483975c, size 0x54, virtual false, abstract: false, final false
static inline bool CreateScriptOutputInternal_Injected(ByRef<::UnityEngine::Playables::PlayableGraph>  _unity_self, ::StringW  name, ByRef<::UnityEngine::Playables::PlayableOutputHandle>  handle) ;

/// @brief Method Evaluate, addr 0x4839300, size 0x40, virtual false, abstract: false, final false
inline void Evaluate() ;

/// @brief Method Evaluate, addr 0x4839340, size 0x4c, virtual false, abstract: false, final false
inline void Evaluate(float_t  deltaTime) ;

/// @brief Method Evaluate_Injected, addr 0x483947c, size 0x4c, virtual false, abstract: false, final false
static inline void Evaluate_Injected(ByRef<::UnityEngine::Playables::PlayableGraph>  _unity_self, float_t  deltaTime) ;

/// @brief Method GetFrameRate, addr 0x483987c, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::FrameRate GetFrameRate() ;

/// @brief Method GetFrameRate_Injected, addr 0x48398c8, size 0x44, virtual false, abstract: false, final false
static inline void GetFrameRate_Injected(ByRef<::UnityEngine::Playables::PlayableGraph>  _unity_self, ByRef<::UnityEngine::Playables::FrameRate>  ret) ;

/// @brief Method GetPlayableCount, addr 0x4839540, size 0x3c, virtual false, abstract: false, final false
inline int32_t GetPlayableCount() ;

/// @brief Method GetPlayableCount_Injected, addr 0x483957c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetPlayableCount_Injected(ByRef<::UnityEngine::Playables::PlayableGraph>  _unity_self) ;

/// @brief Method GetResolver, addr 0x48394c8, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::IExposedPropertyTable* GetResolver() ;

/// @brief Method GetResolver_Injected, addr 0x4839504, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::IExposedPropertyTable* GetResolver_Injected(ByRef<::UnityEngine::Playables::PlayableGraph>  _unity_self) ;

/// @brief Method GetRootPlayable, addr 0x48392a0, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::Playable GetRootPlayable(int32_t  index) ;

/// @brief Method GetRootPlayableCount, addr 0x48395b8, size 0x3c, virtual false, abstract: false, final false
inline int32_t GetRootPlayableCount() ;

/// @brief Method GetRootPlayableCount_Injected, addr 0x48395f4, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetRootPlayableCount_Injected(ByRef<::UnityEngine::Playables::PlayableGraph>  _unity_self) ;

/// @brief Method GetRootPlayableInternal, addr 0x48392a4, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayableHandle GetRootPlayableInternal(int32_t  index) ;

/// @brief Method GetRootPlayableInternal_Injected, addr 0x48397b0, size 0x54, virtual false, abstract: false, final false
static inline void GetRootPlayableInternal_Injected(ByRef<::UnityEngine::Playables::PlayableGraph>  _unity_self, int32_t  index, ByRef<::UnityEngine::Playables::PlayableHandle>  ret) ;

/// @brief Method IsMatchFrameRateEnabled, addr 0x4839804, size 0x3c, virtual false, abstract: false, final false
inline bool IsMatchFrameRateEnabled() ;

/// @brief Method IsMatchFrameRateEnabled_Injected, addr 0x4839840, size 0x3c, virtual false, abstract: false, final false
static inline bool IsMatchFrameRateEnabled_Injected(ByRef<::UnityEngine::Playables::PlayableGraph>  _unity_self) ;

/// @brief Method IsPlaying, addr 0x4839404, size 0x3c, virtual false, abstract: false, final false
inline bool IsPlaying() ;

/// @brief Method IsPlaying_Injected, addr 0x4839440, size 0x3c, virtual false, abstract: false, final false
static inline bool IsPlaying_Injected(ByRef<::UnityEngine::Playables::PlayableGraph>  _unity_self) ;

/// @brief Method IsValid, addr 0x483938c, size 0x3c, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method IsValid_Injected, addr 0x48393c8, size 0x3c, virtual false, abstract: false, final false
static inline bool IsValid_Injected(ByRef<::UnityEngine::Playables::PlayableGraph>  _unity_self) ;

/// @brief Method SynchronizeEvaluation, addr 0x4839630, size 0x50, virtual false, abstract: false, final false
inline void SynchronizeEvaluation(::UnityEngine::Playables::PlayableGraph  playable) ;

/// @brief Method SynchronizeEvaluation_Injected, addr 0x4839680, size 0x44, virtual false, abstract: false, final false
static inline void SynchronizeEvaluation_Injected(ByRef<::UnityEngine::Playables::PlayableGraph>  _unity_self, ByRef<::UnityEngine::Playables::PlayableGraph>  playable) ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayableGraph() ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr PlayableGraph(::System::IntPtr  m_Handle, uint32_t  m_Version) noexcept;

/// @brief Field m_Handle, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_Handle;

/// @brief Field m_Version, offset: 0x8, size: 0x4, def value: None
 uint32_t  m_Version;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayableGraph, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableGraph, m_Handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableGraph, m_Version) == 0x8, "Offset mismatch!");

} // namespace end def UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableGraph, "UnityEngine.Playables", "PlayableGraph");
