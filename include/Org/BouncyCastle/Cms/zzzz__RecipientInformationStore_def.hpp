#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/RecipientInformationStore.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RecipientInformationStore)
namespace Org::BouncyCastle::Cms {
class RecipientID;
}
namespace Org::BouncyCastle::Cms {
class RecipientInformation;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class RecipientInformationStore;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::RecipientInformationStore);
// Type: Org.BouncyCastle.Cms::RecipientInformationStore
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Cms::RecipientInformationStore*
class CORDL_TYPE RecipientInformationStore : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) ::Org::BouncyCastle::Cms::RecipientInformation*  Item[];

/// @brief Field all, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_all, put=__cordl_internal_set_all)) ::System::Collections::IList*  all;

/// @brief Field table, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_table, put=__cordl_internal_set_table)) ::System::Collections::IDictionary*  table;

/// @brief Method GetFirstRecipient, addr 0x263144c, size 0x190, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Cms::RecipientInformation* GetFirstRecipient(::Org::BouncyCastle::Cms::RecipientID*  selector) ;

/// @brief Method GetRecipients, addr 0x2631680, size 0x5c, virtual false, abstract: false, final false
inline ::System::Collections::ICollection* GetRecipients() ;

/// @brief Method GetRecipients, addr 0x26316dc, size 0x130, virtual false, abstract: false, final false
inline ::System::Collections::ICollection* GetRecipients(::Org::BouncyCastle::Cms::RecipientID*  selector) ;

static inline ::Org::BouncyCastle::Cms::RecipientInformationStore* New_ctor(::System::Collections::ICollection*  recipientInfos) ;

constexpr ::System::Collections::IList*& __cordl_internal_get_all() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_all() const;

constexpr ::System::Collections::IDictionary*& __cordl_internal_get_table() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get_table() const;

constexpr void __cordl_internal_set_all(::System::Collections::IList*  value) ;

constexpr void __cordl_internal_set_table(::System::Collections::IDictionary*  value) ;

/// @brief Method .ctor, addr 0x260c468, size 0x5b8, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::ICollection*  recipientInfos) ;

/// @brief Method get_Count, addr 0x26315dc, size 0xa4, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0x2631448, size 0x4, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Cms::RecipientInformation* get_Item(::Org::BouncyCastle::Cms::RecipientID*  selector) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RecipientInformationStore() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RecipientInformationStore", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RecipientInformationStore(RecipientInformationStore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecipientInformationStore", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecipientInformationStore(RecipientInformationStore const& ) = delete;

/// @brief Field all, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::IList*  ___all;

/// @brief Field table, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::IDictionary*  ___table;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::RecipientInformationStore, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::RecipientInformationStore, ___all) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::RecipientInformationStore, ___table) == 0x18, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::RecipientInformationStore);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::RecipientInformationStore*, "Org.BouncyCastle.Cms", "RecipientInformationStore");
