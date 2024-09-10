#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchMaterialID.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchMaterialID)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct BatchMaterialID;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BatchMaterialID);
// Type: UnityEngine.Rendering::BatchMaterialID
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::BatchMaterialID
struct CORDL_TYPE BatchMaterialID {
public:
// Declarations
/// @brief Field Null, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_Null, put=setStaticF_Null)) ::UnityEngine::Rendering::BatchMaterialID  Null;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::BatchMaterialID>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Rendering::BatchMaterialID>*() ;

/// @brief Method Equals, addr 0x48378c0, size 0xa8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x4837968, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Rendering::BatchMaterialID  other) ;

/// @brief Method GetHashCode, addr 0x48378b8, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::UnityEngine::Rendering::BatchMaterialID getStaticF_Null() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::BatchMaterialID>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::BatchMaterialID>* i___System__IEquatable_1___UnityEngine__Rendering__BatchMaterialID_() ;

static inline void setStaticF_Null(::UnityEngine::Rendering::BatchMaterialID  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BatchMaterialID() ;

// Ctor Parameters [CppParam { name: "value", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr BatchMaterialID(uint32_t  value) noexcept;

/// @brief Field value, offset: 0x0, size: 0x4, def value: None
 uint32_t  value;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchMaterialID, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchMaterialID, value) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchMaterialID, "UnityEngine.Rendering", "BatchMaterialID");
