#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_TreePrototypeInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HEU_TreePrototypeInfo)
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_TreePrototypeInfo;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_TreePrototypeInfo);
// Type: HoudiniEngineUnity::HEU_TreePrototypeInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_TreePrototypeInfo*
class CORDL_TYPE HEU_TreePrototypeInfo : public ::System::Object {
public:
// Declarations
/// @brief Field _bendfactor, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__bendfactor, put=__cordl_internal_set__bendfactor)) float_t  _bendfactor;

/// @brief Field _prefabPath, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__prefabPath, put=__cordl_internal_set__prefabPath)) ::StringW  _prefabPath;

/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>"
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>*() noexcept;

/// @brief Method IsEquivalentTo, addr 0x3a1a9bc, size 0x14c, virtual true, abstract: false, final true
inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_TreePrototypeInfo*  other) ;

static inline ::HoudiniEngineUnity::HEU_TreePrototypeInfo* New_ctor() ;

constexpr float_t const& __cordl_internal_get__bendfactor() const;

constexpr float_t& __cordl_internal_get__bendfactor() ;

constexpr ::StringW const& __cordl_internal_get__prefabPath() const;

constexpr ::StringW& __cordl_internal_get__prefabPath() ;

constexpr void __cordl_internal_set__bendfactor(float_t  value) ;

constexpr void __cordl_internal_set__prefabPath(::StringW  value) ;

/// @brief Method .ctor, addr 0x3a1ab08, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>"
constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__HEU_TreePrototypeInfo__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HEU_TreePrototypeInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HEU_TreePrototypeInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_TreePrototypeInfo(HEU_TreePrototypeInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_TreePrototypeInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_TreePrototypeInfo(HEU_TreePrototypeInfo const& ) = delete;

/// @brief Field _prefabPath, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____prefabPath;

/// @brief Field _bendfactor, offset: 0x18, size: 0x4, def value: None
 float_t  ____bendfactor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_TreePrototypeInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_TreePrototypeInfo, ____prefabPath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_TreePrototypeInfo, ____bendfactor) == 0x18, "Offset mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_TreePrototypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_TreePrototypeInfo*, "HoudiniEngineUnity", "HEU_TreePrototypeInfo");
