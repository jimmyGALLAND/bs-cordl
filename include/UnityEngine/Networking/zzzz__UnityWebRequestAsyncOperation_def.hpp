#pragma once
// IWYU pragma private; include "UnityEngine/Networking/UnityWebRequestAsyncOperation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
CORDL_MODULE_EXPORT(UnityWebRequestAsyncOperation)
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::UnityWebRequestAsyncOperation);
// Type: UnityEngine.Networking::UnityWebRequestAsyncOperation
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: ::UnityEngine.Networking::UnityWebRequestAsyncOperation*
class CORDL_TYPE UnityWebRequestAsyncOperation : public ::UnityEngine::AsyncOperation {
public:
// Declarations
/// @brief Field <webRequest>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__webRequest_k__BackingField, put=__cordl_internal_set__webRequest_k__BackingField)) ::UnityEngine::Networking::UnityWebRequest*  _webRequest_k__BackingField;

 __declspec(property(get=get_webRequest, put=set_webRequest)) ::UnityEngine::Networking::UnityWebRequest*  webRequest;

static inline ::UnityEngine::Networking::UnityWebRequestAsyncOperation* New_ctor() ;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__webRequest_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::UnityWebRequest*> const& __cordl_internal_get__webRequest_k__BackingField() const;

constexpr void __cordl_internal_set__webRequest_k__BackingField(::UnityEngine::Networking::UnityWebRequest*  value) ;

/// @brief Method .ctor, addr 0x4a4f6f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_webRequest, addr 0x4a4f6e0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Networking::UnityWebRequest* get_webRequest() ;

/// @brief Method set_webRequest, addr 0x4a4f6e8, size 0x8, virtual false, abstract: false, final false
inline void set_webRequest(::UnityEngine::Networking::UnityWebRequest*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityWebRequestAsyncOperation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestAsyncOperation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityWebRequestAsyncOperation(UnityWebRequestAsyncOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestAsyncOperation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityWebRequestAsyncOperation(UnityWebRequestAsyncOperation const& ) = delete;

/// @brief Field <webRequest>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____webRequest_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::UnityWebRequestAsyncOperation, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Networking::UnityWebRequestAsyncOperation, ____webRequest_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace end def UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::UnityWebRequestAsyncOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::UnityWebRequestAsyncOperation*, "UnityEngine.Networking", "UnityWebRequestAsyncOperation");
