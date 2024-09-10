#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/BundledAssetProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BundledAssetProvider)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class Object;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class __BundledAssetProvider__InternalOp;
}
namespace UnityEngine {
class AssetBundleRequest;
}
namespace UnityEngine {
class AssetBundle;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class BundledAssetProvider;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class __BundledAssetProvider__InternalOp;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::__BundledAssetProvider__InternalOp);
// Type: ::InternalOp
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: ::BundledAssetProvider::InternalOp*
class CORDL_TYPE __BundledAssetProvider__InternalOp : public ::System::Object {
public:
// Declarations
/// @brief Field m_AssetBundle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AssetBundle, put=__cordl_internal_set_m_AssetBundle)) ::UnityW<::UnityEngine::AssetBundle>  m_AssetBundle;

/// @brief Field m_PreloadRequest, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PreloadRequest, put=__cordl_internal_set_m_PreloadRequest)) ::UnityEngine::AssetBundleRequest*  m_PreloadRequest;

/// @brief Field m_ProvideHandle, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_ProvideHandle, put=__cordl_internal_set_m_ProvideHandle)) ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle  m_ProvideHandle;

/// @brief Field m_RequestOperation, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RequestOperation, put=__cordl_internal_set_m_RequestOperation)) ::UnityEngine::AssetBundleRequest*  m_RequestOperation;

/// @brief Field m_Result, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Result, put=__cordl_internal_set_m_Result)) ::System::Object*  m_Result;

/// @brief Field subObjectName, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_subObjectName, put=__cordl_internal_set_subObjectName)) ::StringW  subObjectName;

/// @brief Method ActionComplete, addr 0x470bafc, size 0x194, virtual false, abstract: false, final false
inline void ActionComplete(::UnityEngine::AsyncOperation*  obj) ;

/// @brief Method BeginAssetLoad, addr 0x470b79c, size 0x360, virtual false, abstract: false, final false
inline void BeginAssetLoad() ;

/// @brief Method CompleteOperation, addr 0x470bf7c, size 0xe8, virtual false, abstract: false, final false
inline void CompleteOperation() ;

/// @brief Method GetArrayResult, addr 0x470bd90, size 0x30, virtual false, abstract: false, final false
inline void GetArrayResult(::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*>  allAssets) ;

/// @brief Method GetAssetResult, addr 0x470bdf0, size 0xc0, virtual false, abstract: false, final false
inline void GetAssetResult(::UnityEngine::Object*  asset) ;

/// @brief Method GetAssetSubObjectResult, addr 0x470beb0, size 0xcc, virtual false, abstract: false, final false
inline void GetAssetSubObjectResult(::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*>  allAssets) ;

/// @brief Method GetListResult, addr 0x470bdc0, size 0x30, virtual false, abstract: false, final false
inline void GetListResult(::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*>  allAssets) ;

/// @brief Method LoadBundleFromDependecies, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T LoadBundleFromDependecies(::System::Collections::Generic::IList_1<::System::Object*>*  results) ;

static inline ::UnityEngine::ResourceManagement::ResourceProviders::__BundledAssetProvider__InternalOp* New_ctor() ;

/// @brief Method ProgressCallback, addr 0x470c064, size 0x18, virtual false, abstract: false, final false
inline float_t ProgressCallback() ;

/// @brief Method Start, addr 0x470b31c, size 0x3c4, virtual false, abstract: false, final false
inline void Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle  provideHandle) ;

/// @brief Method WaitForCompletionHandler, addr 0x470bc90, size 0x100, virtual false, abstract: false, final false
inline bool WaitForCompletionHandler() ;

/// @brief Method <Start>b__7_0, addr 0x470c07c, size 0x4, virtual false, abstract: false, final false
inline void _Start_b__7_0(::UnityEngine::AsyncOperation*  operation) ;

constexpr ::UnityW<::UnityEngine::AssetBundle> const& __cordl_internal_get_m_AssetBundle() const;

constexpr ::UnityW<::UnityEngine::AssetBundle>& __cordl_internal_get_m_AssetBundle() ;

constexpr ::UnityEngine::AssetBundleRequest*& __cordl_internal_get_m_PreloadRequest() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundleRequest*> const& __cordl_internal_get_m_PreloadRequest() const;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle const& __cordl_internal_get_m_ProvideHandle() const;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle& __cordl_internal_get_m_ProvideHandle() ;

constexpr ::UnityEngine::AssetBundleRequest*& __cordl_internal_get_m_RequestOperation() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundleRequest*> const& __cordl_internal_get_m_RequestOperation() const;

constexpr ::System::Object*& __cordl_internal_get_m_Result() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_m_Result() const;

constexpr ::StringW const& __cordl_internal_get_subObjectName() const;

constexpr ::StringW& __cordl_internal_get_subObjectName() ;

constexpr void __cordl_internal_set_m_AssetBundle(::UnityW<::UnityEngine::AssetBundle>  value) ;

constexpr void __cordl_internal_set_m_PreloadRequest(::UnityEngine::AssetBundleRequest*  value) ;

constexpr void __cordl_internal_set_m_ProvideHandle(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle  value) ;

constexpr void __cordl_internal_set_m_RequestOperation(::UnityEngine::AssetBundleRequest*  value) ;

constexpr void __cordl_internal_set_m_Result(::System::Object*  value) ;

constexpr void __cordl_internal_set_subObjectName(::StringW  value) ;

/// @brief Method .ctor, addr 0x470b314, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __BundledAssetProvider__InternalOp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__BundledAssetProvider__InternalOp", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BundledAssetProvider__InternalOp(__BundledAssetProvider__InternalOp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BundledAssetProvider__InternalOp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BundledAssetProvider__InternalOp(__BundledAssetProvider__InternalOp const& ) = delete;

/// @brief Field m_AssetBundle, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AssetBundle>  ___m_AssetBundle;

/// @brief Field m_PreloadRequest, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AssetBundleRequest*  ___m_PreloadRequest;

/// @brief Field m_RequestOperation, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AssetBundleRequest*  ___m_RequestOperation;

/// @brief Field m_Result, offset: 0x28, size: 0x8, def value: None
 ::System::Object*  ___m_Result;

/// @brief Field m_ProvideHandle, offset: 0x30, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle  ___m_ProvideHandle;

/// @brief Field subObjectName, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___subObjectName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::__BundledAssetProvider__InternalOp, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::__BundledAssetProvider__InternalOp, ___m_AssetBundle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::__BundledAssetProvider__InternalOp, ___m_PreloadRequest) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::__BundledAssetProvider__InternalOp, ___m_RequestOperation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::__BundledAssetProvider__InternalOp, ___m_Result) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::__BundledAssetProvider__InternalOp, ___m_ProvideHandle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::__BundledAssetProvider__InternalOp, ___subObjectName) == 0x48, "Offset mismatch!");

} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
// Type: UnityEngine.ResourceManagement.ResourceProviders::BundledAssetProvider
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: ::UnityEngine.ResourceManagement.ResourceProviders::BundledAssetProvider*
class CORDL_TYPE BundledAssetProvider : public ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase {
public:
// Declarations
using InternalOp = ::UnityEngine::ResourceManagement::ResourceProviders::__BundledAssetProvider__InternalOp;

static inline ::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider* New_ctor() ;

/// @brief Method Provide, addr 0x470b284, size 0x90, virtual true, abstract: false, final false
inline void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle  provideHandle) ;

/// @brief Method .ctor, addr 0x470b6e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BundledAssetProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BundledAssetProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BundledAssetProvider(BundledAssetProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BundledAssetProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BundledAssetProvider(BundledAssetProvider const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "BundledAssetProvider");
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::__BundledAssetProvider__InternalOp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::__BundledAssetProvider__InternalOp*, "UnityEngine.ResourceManagement.ResourceProviders", "BundledAssetProvider/InternalOp");
