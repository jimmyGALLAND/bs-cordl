#pragma once
// IWYU pragma private; include "GlobalNamespace/SteamLevelProductCollectionModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamLevelProductCollectionModel)
namespace GlobalNamespace {
template<typename TLevelProductData>
class ILevelPackProductData_1;
}
namespace GlobalNamespace {
class ILevelProductData;
}
namespace GlobalNamespace {
class SteamLevelProductPacksSO;
}
namespace GlobalNamespace {
class __SteamLevelProductCollectionModel__LevelDepotData;
}
namespace GlobalNamespace {
class __SteamLevelProductCollectionModel__LevelPackProductData;
}
namespace GlobalNamespace {
class __SteamLevelProductCollectionModel__LevelPackRedirectionData;
}
namespace GlobalNamespace {
class __SteamLevelProductCollectionModel__LevelProductData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SteamLevelProductCollectionModel;
}
namespace GlobalNamespace {
class __SteamLevelProductCollectionModel__LevelDepotData;
}
namespace GlobalNamespace {
class __SteamLevelProductCollectionModel__LevelPackProductData;
}
namespace GlobalNamespace {
class __SteamLevelProductCollectionModel__LevelPackRedirectionData;
}
namespace GlobalNamespace {
class __SteamLevelProductCollectionModel__LevelProductData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SteamLevelProductCollectionModel);
MARK_REF_PTR_T(::GlobalNamespace::__SteamLevelProductCollectionModel__LevelDepotData);
MARK_REF_PTR_T(::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData);
MARK_REF_PTR_T(::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData);
MARK_REF_PTR_T(::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData);
// Type: ::LevelDepotData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SteamLevelProductCollectionModel::LevelDepotData*
class CORDL_TYPE __SteamLevelProductCollectionModel__LevelDepotData : public ::System::Object {
public:
// Declarations
/// @brief Field checkDepots, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_checkDepots, put=__cordl_internal_set_checkDepots)) bool  checkDepots;

/// @brief Field noEnvironmentKeywordsDepotId, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_noEnvironmentKeywordsDepotId, put=__cordl_internal_set_noEnvironmentKeywordsDepotId)) uint32_t  noEnvironmentKeywordsDepotId;

static inline ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelDepotData* New_ctor() ;

constexpr bool const& __cordl_internal_get_checkDepots() const;

constexpr bool& __cordl_internal_get_checkDepots() ;

constexpr uint32_t const& __cordl_internal_get_noEnvironmentKeywordsDepotId() const;

constexpr uint32_t& __cordl_internal_get_noEnvironmentKeywordsDepotId() ;

constexpr void __cordl_internal_set_checkDepots(bool  value) ;

constexpr void __cordl_internal_set_noEnvironmentKeywordsDepotId(uint32_t  value) ;

/// @brief Method .ctor, addr 0x269a5d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __SteamLevelProductCollectionModel__LevelDepotData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__SteamLevelProductCollectionModel__LevelDepotData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SteamLevelProductCollectionModel__LevelDepotData(__SteamLevelProductCollectionModel__LevelDepotData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SteamLevelProductCollectionModel__LevelDepotData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SteamLevelProductCollectionModel__LevelDepotData(__SteamLevelProductCollectionModel__LevelDepotData const& ) = delete;

/// @brief Field checkDepots, offset: 0x10, size: 0x1, def value: None
 bool  ___checkDepots;

/// @brief Field noEnvironmentKeywordsDepotId, offset: 0x14, size: 0x4, def value: None
 uint32_t  ___noEnvironmentKeywordsDepotId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelDepotData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamLevelProductCollectionModel__LevelDepotData, ___checkDepots) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamLevelProductCollectionModel__LevelDepotData, ___noEnvironmentKeywordsDepotId) == 0x14, "Offset mismatch!");

} // namespace end def GlobalNamespace
// Type: ::LevelProductData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SteamLevelProductCollectionModel::LevelProductData*
class CORDL_TYPE __SteamLevelProductCollectionModel__LevelProductData : public ::System::Object {
public:
// Declarations
/// @brief Field _appId, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__appId, put=__cordl_internal_set__appId)) uint32_t  _appId;

/// @brief Field _levelDepotData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__levelDepotData, put=__cordl_internal_set__levelDepotData)) ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelDepotData*  _levelDepotData;

/// @brief Field _levelId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__levelId, put=__cordl_internal_set__levelId)) ::StringW  _levelId;

 __declspec(property(get=get_appId)) uint32_t  appId;

 __declspec(property(get=get_levelDepotData)) ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelDepotData*  levelDepotData;

 __declspec(property(get=get_levelId)) ::StringW  levelId;

/// @brief Convert operator to "::GlobalNamespace::ILevelProductData"
constexpr operator  ::GlobalNamespace::ILevelProductData*() noexcept;

static inline ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData* New_ctor(::StringW  levelId, uint32_t  appId) ;

constexpr uint32_t const& __cordl_internal_get__appId() const;

constexpr uint32_t& __cordl_internal_get__appId() ;

constexpr ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelDepotData*& __cordl_internal_get__levelDepotData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelDepotData*> const& __cordl_internal_get__levelDepotData() const;

constexpr ::StringW const& __cordl_internal_get__levelId() const;

constexpr ::StringW& __cordl_internal_get__levelId() ;

constexpr void __cordl_internal_set__appId(uint32_t  value) ;

constexpr void __cordl_internal_set__levelDepotData(::GlobalNamespace::__SteamLevelProductCollectionModel__LevelDepotData*  value) ;

constexpr void __cordl_internal_set__levelId(::StringW  value) ;

/// @brief Method .ctor, addr 0x269a5f8, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  levelId, uint32_t  appId) ;

/// @brief Method get_appId, addr 0x269a5e0, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_appId() ;

/// @brief Method get_levelDepotData, addr 0x269a5f0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelDepotData* get_levelDepotData() ;

/// @brief Method get_levelId, addr 0x269a5e8, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_levelId() ;

/// @brief Convert to "::GlobalNamespace::ILevelProductData"
constexpr ::GlobalNamespace::ILevelProductData* i___GlobalNamespace__ILevelProductData() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __SteamLevelProductCollectionModel__LevelProductData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__SteamLevelProductCollectionModel__LevelProductData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SteamLevelProductCollectionModel__LevelProductData(__SteamLevelProductCollectionModel__LevelProductData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SteamLevelProductCollectionModel__LevelProductData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SteamLevelProductCollectionModel__LevelProductData(__SteamLevelProductCollectionModel__LevelProductData const& ) = delete;

/// @brief Field _levelId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____levelId;

/// @brief Field _appId, offset: 0x18, size: 0x4, def value: None
 uint32_t  ____appId;

/// @brief Field _levelDepotData, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelDepotData*  ____levelDepotData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData, ____levelId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData, ____appId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData, ____levelDepotData) == 0x20, "Offset mismatch!");

} // namespace end def GlobalNamespace
// Type: ::LevelPackProductData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SteamLevelProductCollectionModel::LevelPackProductData*
class CORDL_TYPE __SteamLevelProductCollectionModel__LevelPackProductData : public ::System::Object {
public:
// Declarations
/// @brief Field _bundleId, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__bundleId, put=__cordl_internal_set__bundleId)) uint32_t  _bundleId;

/// @brief Field _levelPackId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__levelPackId, put=__cordl_internal_set__levelPackId)) ::StringW  _levelPackId;

/// @brief Field _levelProductsData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__levelProductsData, put=__cordl_internal_set__levelProductsData)) ::ArrayW<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*,::Array<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*>  _levelProductsData;

 __declspec(property(get=get_bundleId)) uint32_t  bundleId;

 __declspec(property(get=get_levelPackId)) ::StringW  levelPackId;

 __declspec(property(get=get_levelProductsData)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*  levelProductsData;

/// @brief Convert operator to "::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>"
constexpr operator  ::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*() noexcept;

static inline ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData* New_ctor(::StringW  levelPackId, uint32_t  bundleId, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*  levelProducts) ;

constexpr uint32_t const& __cordl_internal_get__bundleId() const;

constexpr uint32_t& __cordl_internal_get__bundleId() ;

constexpr ::StringW const& __cordl_internal_get__levelPackId() const;

constexpr ::StringW& __cordl_internal_get__levelPackId() ;

constexpr ::ArrayW<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*,::Array<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*> const& __cordl_internal_get__levelProductsData() const;

constexpr ::ArrayW<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*,::Array<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*>& __cordl_internal_get__levelProductsData() ;

constexpr void __cordl_internal_set__bundleId(uint32_t  value) ;

constexpr void __cordl_internal_set__levelPackId(::StringW  value) ;

constexpr void __cordl_internal_set__levelProductsData(::ArrayW<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*,::Array<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*>  value) ;

/// @brief Method .ctor, addr 0x269a640, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::StringW  levelPackId, uint32_t  bundleId, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*  levelProducts) ;

/// @brief Method get_bundleId, addr 0x269a628, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_bundleId() ;

/// @brief Method get_levelPackId, addr 0x269a630, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_levelPackId() ;

/// @brief Method get_levelProductsData, addr 0x269a638, size 0x8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>* get_levelProductsData() ;

/// @brief Convert to "::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>"
constexpr ::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>* i___GlobalNamespace__ILevelPackProductData_1___GlobalNamespace____SteamLevelProductCollectionModel__LevelProductData__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __SteamLevelProductCollectionModel__LevelPackProductData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__SteamLevelProductCollectionModel__LevelPackProductData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SteamLevelProductCollectionModel__LevelPackProductData(__SteamLevelProductCollectionModel__LevelPackProductData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SteamLevelProductCollectionModel__LevelPackProductData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SteamLevelProductCollectionModel__LevelPackProductData(__SteamLevelProductCollectionModel__LevelPackProductData const& ) = delete;

/// @brief Field _levelPackId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____levelPackId;

/// @brief Field _bundleId, offset: 0x18, size: 0x4, def value: None
 uint32_t  ____bundleId;

/// @brief Field _levelProductsData, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*,::Array<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*>  ____levelProductsData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData, ____levelPackId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData, ____bundleId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData, ____levelProductsData) == 0x20, "Offset mismatch!");

} // namespace end def GlobalNamespace
// Type: ::LevelPackRedirectionData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SteamLevelProductCollectionModel::LevelPackRedirectionData*
class CORDL_TYPE __SteamLevelProductCollectionModel__LevelPackRedirectionData : public ::System::Object {
public:
// Declarations
/// @brief Field _redirectedBundleId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__redirectedBundleId, put=__cordl_internal_set__redirectedBundleId)) uint32_t  _redirectedBundleId;

/// @brief Field _shouldOwnLevelPackId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__shouldOwnLevelPackId, put=__cordl_internal_set__shouldOwnLevelPackId)) ::StringW  _shouldOwnLevelPackId;

/// @brief Field _targetLevelPackId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetLevelPackId, put=__cordl_internal_set__targetLevelPackId)) ::StringW  _targetLevelPackId;

/// @brief Field _validUntilDate, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__validUntilDate, put=__cordl_internal_set__validUntilDate)) ::StringW  _validUntilDate;

 __declspec(property(get=get_redirectedBundleId)) uint32_t  redirectedBundleId;

 __declspec(property(get=get_shouldOwnLevelPackId)) ::StringW  shouldOwnLevelPackId;

 __declspec(property(get=get_targetLevelPackId)) ::StringW  targetLevelPackId;

 __declspec(property(get=get_validUntilDate)) ::StringW  validUntilDate;

static inline ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData* New_ctor() ;

constexpr uint32_t const& __cordl_internal_get__redirectedBundleId() const;

constexpr uint32_t& __cordl_internal_get__redirectedBundleId() ;

constexpr ::StringW const& __cordl_internal_get__shouldOwnLevelPackId() const;

constexpr ::StringW& __cordl_internal_get__shouldOwnLevelPackId() ;

constexpr ::StringW const& __cordl_internal_get__targetLevelPackId() const;

constexpr ::StringW& __cordl_internal_get__targetLevelPackId() ;

constexpr ::StringW const& __cordl_internal_get__validUntilDate() const;

constexpr ::StringW& __cordl_internal_get__validUntilDate() ;

constexpr void __cordl_internal_set__redirectedBundleId(uint32_t  value) ;

constexpr void __cordl_internal_set__shouldOwnLevelPackId(::StringW  value) ;

constexpr void __cordl_internal_set__targetLevelPackId(::StringW  value) ;

constexpr void __cordl_internal_set__validUntilDate(::StringW  value) ;

/// @brief Method .ctor, addr 0x269a6e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_redirectedBundleId, addr 0x269a6d0, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_redirectedBundleId() ;

/// @brief Method get_shouldOwnLevelPackId, addr 0x269a6c8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_shouldOwnLevelPackId() ;

/// @brief Method get_targetLevelPackId, addr 0x269a6c0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_targetLevelPackId() ;

/// @brief Method get_validUntilDate, addr 0x269a6d8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_validUntilDate() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __SteamLevelProductCollectionModel__LevelPackRedirectionData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__SteamLevelProductCollectionModel__LevelPackRedirectionData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SteamLevelProductCollectionModel__LevelPackRedirectionData(__SteamLevelProductCollectionModel__LevelPackRedirectionData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SteamLevelProductCollectionModel__LevelPackRedirectionData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SteamLevelProductCollectionModel__LevelPackRedirectionData(__SteamLevelProductCollectionModel__LevelPackRedirectionData const& ) = delete;

/// @brief Field _targetLevelPackId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____targetLevelPackId;

/// @brief Field _shouldOwnLevelPackId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____shouldOwnLevelPackId;

/// @brief Field _redirectedBundleId, offset: 0x20, size: 0x4, def value: None
 uint32_t  ____redirectedBundleId;

/// @brief Field _validUntilDate, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____validUntilDate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData, ____targetLevelPackId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData, ____shouldOwnLevelPackId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData, ____redirectedBundleId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData, ____validUntilDate) == 0x28, "Offset mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SteamLevelProductCollectionModel
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SteamLevelProductCollectionModel*
class CORDL_TYPE SteamLevelProductCollectionModel : public ::System::Object {
public:
// Declarations
using LevelDepotData = ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelDepotData;

using LevelPackProductData = ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData;

using LevelPackRedirectionData = ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData;

using LevelProductData = ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData;

/// @brief Field _levelIdToProductData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__levelIdToProductData, put=__cordl_internal_set__levelIdToProductData)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*  _levelIdToProductData;

/// @brief Field _levelPackIdToProductData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__levelPackIdToProductData, put=__cordl_internal_set__levelPackIdToProductData)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData*>*  _levelPackIdToProductData;

/// @brief Field _levelPackRedirectionData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__levelPackRedirectionData, put=__cordl_internal_set__levelPackRedirectionData)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*>*  _levelPackRedirectionData;

/// @brief Field _maxPossibleInstalledDepots, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxPossibleInstalledDepots, put=__cordl_internal_set__maxPossibleInstalledDepots)) int32_t  _maxPossibleInstalledDepots;

 __declspec(property(get=get_levelProductDataCount)) int32_t  levelProductDataCount;

 __declspec(property(get=get_levelProductsData)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*  levelProductsData;

/// @brief Method GetLevelPackProductData, addr 0x269a528, size 0x58, virtual false, abstract: false, final false
inline ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData* GetLevelPackProductData(::StringW  levelPackId) ;

/// @brief Method GetLevelPackRedirectionData, addr 0x269a580, size 0x58, virtual false, abstract: false, final false
inline ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData* GetLevelPackRedirectionData(::StringW  levelPackId) ;

/// @brief Method GetLevelProductData, addr 0x269a4d0, size 0x58, virtual false, abstract: false, final false
inline ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData* GetLevelProductData(::StringW  levelId) ;

static inline ::GlobalNamespace::SteamLevelProductCollectionModel* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>>*  levelProductsSOs) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*& __cordl_internal_get__levelIdToProductData() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*> const& __cordl_internal_get__levelIdToProductData() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData*>*& __cordl_internal_get__levelPackIdToProductData() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData*>*> const& __cordl_internal_get__levelPackIdToProductData() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*>*& __cordl_internal_get__levelPackRedirectionData() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*>*> const& __cordl_internal_get__levelPackRedirectionData() const;

constexpr int32_t const& __cordl_internal_get__maxPossibleInstalledDepots() const;

constexpr int32_t& __cordl_internal_get__maxPossibleInstalledDepots() ;

constexpr void __cordl_internal_set__levelIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*  value) ;

constexpr void __cordl_internal_set__levelPackIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData*>*  value) ;

constexpr void __cordl_internal_set__levelPackRedirectionData(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*>*  value) ;

constexpr void __cordl_internal_set__maxPossibleInstalledDepots(int32_t  value) ;

/// @brief Method .ctor, addr 0x2699b9c, size 0x8e4, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>>*  levelProductsSOs) ;

/// @brief Method get_levelProductDataCount, addr 0x2699b94, size 0x8, virtual false, abstract: false, final false
inline int32_t get_levelProductDataCount() ;

/// @brief Method get_levelProductsData, addr 0x269a480, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>* get_levelProductsData() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamLevelProductCollectionModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamLevelProductCollectionModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamLevelProductCollectionModel(SteamLevelProductCollectionModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamLevelProductCollectionModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamLevelProductCollectionModel(SteamLevelProductCollectionModel const& ) = delete;

/// @brief Field _levelIdToProductData, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*  ____levelIdToProductData;

/// @brief Field _levelPackIdToProductData, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData*>*  ____levelPackIdToProductData;

/// @brief Field _levelPackRedirectionData, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*>*  ____levelPackRedirectionData;

/// @brief Field _maxPossibleInstalledDepots, offset: 0x28, size: 0x4, def value: None
 int32_t  ____maxPossibleInstalledDepots;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SteamLevelProductCollectionModel, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamLevelProductCollectionModel, ____levelIdToProductData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamLevelProductCollectionModel, ____levelPackIdToProductData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamLevelProductCollectionModel, ____levelPackRedirectionData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamLevelProductCollectionModel, ____maxPossibleInstalledDepots) == 0x28, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SteamLevelProductCollectionModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamLevelProductCollectionModel*, "", "SteamLevelProductCollectionModel");
NEED_NO_BOX(::GlobalNamespace::__SteamLevelProductCollectionModel__LevelDepotData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SteamLevelProductCollectionModel__LevelDepotData*, "", "SteamLevelProductCollectionModel/LevelDepotData");
NEED_NO_BOX(::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData*, "", "SteamLevelProductCollectionModel/LevelPackProductData");
NEED_NO_BOX(::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*, "", "SteamLevelProductCollectionModel/LevelPackRedirectionData");
NEED_NO_BOX(::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*, "", "SteamLevelProductCollectionModel/LevelProductData");
