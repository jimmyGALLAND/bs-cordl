#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/IdCacheKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IdCacheKey)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::ResourceManagement::Util {
class IOperationCacheKey;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class IdCacheKey;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::IdCacheKey);
// Type: UnityEngine.ResourceManagement.Util::IdCacheKey
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: ::UnityEngine.ResourceManagement.Util::IdCacheKey*
class CORDL_TYPE IdCacheKey : public ::System::Object {
public:
// Declarations
/// @brief Field ID, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__cordl_ID, put=__cordl_internal_set__cordl_ID)) ::StringW  _cordl_ID;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>*() noexcept;

/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::IOperationCacheKey"
constexpr operator  ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*() noexcept;

/// @brief Method Equals, addr 0x4705034, size 0x94, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x47050c8, size 0x94, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*  other) ;

/// @brief Method Equals, addr 0x4704fe4, size 0x30, virtual false, abstract: false, final false
inline bool Equals(::UnityEngine::ResourceManagement::Util::IdCacheKey*  other) ;

/// @brief Method GetHashCode, addr 0x4705014, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::UnityEngine::ResourceManagement::Util::IdCacheKey* New_ctor(::StringW  id) ;

constexpr ::StringW const& __cordl_internal_get__cordl_ID() const;

constexpr ::StringW& __cordl_internal_get__cordl_ID() ;

constexpr void __cordl_internal_set__cordl_ID(::StringW  value) ;

/// @brief Method .ctor, addr 0x4704fbc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::StringW  id) ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>"
constexpr ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>* i___System__IEquatable_1___UnityEngine__ResourceManagement__Util__IOperationCacheKey__() noexcept;

/// @brief Convert to "::UnityEngine::ResourceManagement::Util::IOperationCacheKey"
constexpr ::UnityEngine::ResourceManagement::Util::IOperationCacheKey* i___UnityEngine__ResourceManagement__Util__IOperationCacheKey() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IdCacheKey() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IdCacheKey", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IdCacheKey(IdCacheKey && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IdCacheKey", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IdCacheKey(IdCacheKey const& ) = delete;

/// @brief Field ID, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____cordl_ID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::IdCacheKey, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::IdCacheKey, ____cordl_ID) == 0x10, "Offset mismatch!");

} // namespace end def UnityEngine::ResourceManagement::Util
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::IdCacheKey);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::IdCacheKey*, "UnityEngine.ResourceManagement.Util", "IdCacheKey");
