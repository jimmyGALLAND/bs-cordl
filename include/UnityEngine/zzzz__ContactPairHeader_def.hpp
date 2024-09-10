#pragma once
// IWYU pragma private; include "UnityEngine/ContactPairHeader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__CollisionPairHeaderFlags_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContactPairHeader)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct CollisionPairHeaderFlags;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
struct ContactPair;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct ContactPairHeader;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ContactPairHeader);
// Type: UnityEngine::ContactPairHeader
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 52, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::ContactPairHeader
struct CORDL_TYPE ContactPairHeader {
public:
// Declarations
 __declspec(property(get=get_Body)) ::UnityW<::UnityEngine::Component>  Body;

 __declspec(property(get=get_BodyInstanceID)) int32_t  BodyInstanceID;

 __declspec(property(get=get_HasRemovedBody)) bool  HasRemovedBody;

 __declspec(property(get=get_OtherBody)) ::UnityW<::UnityEngine::Component>  OtherBody;

 __declspec(property(get=get_OtherBodyInstanceID)) int32_t  OtherBodyInstanceID;

 __declspec(property(get=get_PairCount)) int32_t  PairCount;

/// @brief Method GetContactPair, addr 0x486eeac, size 0x4, virtual false, abstract: false, final false
inline ByRef<::UnityEngine::ContactPair> GetContactPair(int32_t  index) ;

/// @brief Method GetContactPair_Internal, addr 0x487a660, size 0x80, virtual false, abstract: false, final false
inline ::cordl_internals::Ptr<::UnityEngine::ContactPair> GetContactPair_Internal(int32_t  index) ;

/// @brief Method get_Body, addr 0x485f454, size 0x78, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> get_Body() ;

/// @brief Method get_BodyInstanceID, addr 0x487a648, size 0x8, virtual false, abstract: false, final false
inline int32_t get_BodyInstanceID() ;

/// @brief Method get_HasRemovedBody, addr 0x486ee9c, size 0x10, virtual false, abstract: false, final false
inline bool get_HasRemovedBody() ;

/// @brief Method get_OtherBody, addr 0x485f3dc, size 0x78, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> get_OtherBody() ;

/// @brief Method get_OtherBodyInstanceID, addr 0x487a650, size 0x8, virtual false, abstract: false, final false
inline int32_t get_OtherBodyInstanceID() ;

/// @brief Method get_PairCount, addr 0x487a658, size 0x8, virtual false, abstract: false, final false
inline int32_t get_PairCount() ;

// Ctor Parameters []
// @brief default ctor
constexpr ContactPairHeader() ;

// Ctor Parameters [CppParam { name: "m_BodyID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_OtherBodyID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_StartPtr", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_NbPairs", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "::UnityEngine::CollisionPairHeaderFlags", modifiers: "", def_value: None }, CppParam { name: "m_RelativeVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr ContactPairHeader(int32_t  m_BodyID, int32_t  m_OtherBodyID, ::System::IntPtr  m_StartPtr, uint32_t  m_NbPairs, ::UnityEngine::CollisionPairHeaderFlags  m_Flags, ::UnityEngine::Vector3  m_RelativeVelocity) noexcept;

/// @brief Field m_BodyID, offset: 0x0, size: 0x4, def value: None
 int32_t  m_BodyID;

/// @brief Field m_OtherBodyID, offset: 0x4, size: 0x4, def value: None
 int32_t  m_OtherBodyID;

/// @brief Field m_StartPtr, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_StartPtr;

/// @brief Field m_NbPairs, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_NbPairs;

/// @brief Field m_Flags, offset: 0x14, size: 0x2, def value: None
 ::UnityEngine::CollisionPairHeaderFlags  m_Flags;

/// @brief Field m_RelativeVelocity, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_RelativeVelocity;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ContactPairHeader, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ContactPairHeader, m_BodyID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPairHeader, m_OtherBodyID) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPairHeader, m_StartPtr) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPairHeader, m_NbPairs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPairHeader, m_Flags) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPairHeader, m_RelativeVelocity) == 0x18, "Offset mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ContactPairHeader, "UnityEngine", "ContactPairHeader");
