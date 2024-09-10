#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/GatewayIPAddressInformationCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GatewayIPAddressInformationCollection)
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class Collection_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Net::NetworkInformation {
class GatewayIPAddressInformation;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class GatewayIPAddressInformationCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::GatewayIPAddressInformationCollection);
// Type: System.Net.NetworkInformation::GatewayIPAddressInformationCollection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: ::System.Net.NetworkInformation::GatewayIPAddressInformationCollection*
class CORDL_TYPE GatewayIPAddressInformationCollection : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

/// @brief Field addresses, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_addresses, put=__cordl_internal_set_addresses)) ::System::Collections::ObjectModel::Collection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>*  addresses;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0x4357288, size 0x58, virtual true, abstract: false, final false
inline void Add(::System::Net::NetworkInformation::GatewayIPAddressInformation*  address) ;

/// @brief Method Clear, addr 0x4357448, size 0x58, virtual true, abstract: false, final false
inline void Clear() ;

/// @brief Method Contains, addr 0x4357338, size 0x58, virtual true, abstract: false, final false
inline bool Contains(::System::Net::NetworkInformation::GatewayIPAddressInformation*  address) ;

/// @brief Method CopyTo, addr 0x43571c8, size 0x68, virtual true, abstract: false, final false
inline void CopyTo(::ArrayW<::System::Net::NetworkInformation::GatewayIPAddressInformation*,::Array<::System::Net::NetworkInformation::GatewayIPAddressInformation*>*>  array, int32_t  offset) ;

/// @brief Method GetEnumerator, addr 0x4357390, size 0x50, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerator_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>* GetEnumerator() ;

/// @brief Method InternalAdd, addr 0x43572e0, size 0x58, virtual false, abstract: false, final false
inline void InternalAdd(::System::Net::NetworkInformation::GatewayIPAddressInformation*  address) ;

static inline ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* New_ctor() ;

/// @brief Method Remove, addr 0x43573f0, size 0x58, virtual true, abstract: false, final false
inline bool Remove(::System::Net::NetworkInformation::GatewayIPAddressInformation*  address) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x43573e0, size 0x10, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::System::Collections::ObjectModel::Collection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>*& __cordl_internal_get_addresses() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::ObjectModel::Collection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>*> const& __cordl_internal_get_addresses() const;

constexpr void __cordl_internal_set_addresses(::System::Collections::ObjectModel::Collection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>*  value) ;

/// @brief Method .ctor, addr 0x435714c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Count, addr 0x4357230, size 0x50, virtual true, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_IsReadOnly, addr 0x4357280, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>"
constexpr ::System::Collections::Generic::ICollection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>* i___System__Collections__Generic__ICollection_1___System__Net__NetworkInformation__GatewayIPAddressInformation__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>* i___System__Collections__Generic__IEnumerable_1___System__Net__NetworkInformation__GatewayIPAddressInformation__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GatewayIPAddressInformationCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GatewayIPAddressInformationCollection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GatewayIPAddressInformationCollection(GatewayIPAddressInformationCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GatewayIPAddressInformationCollection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GatewayIPAddressInformationCollection(GatewayIPAddressInformationCollection const& ) = delete;

/// @brief Field addresses, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::ObjectModel::Collection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>*  ___addresses;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::GatewayIPAddressInformationCollection, ___addresses) == 0x10, "Offset mismatch!");

} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::GatewayIPAddressInformationCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*, "System.Net.NetworkInformation", "GatewayIPAddressInformationCollection");
