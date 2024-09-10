#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Collections/CollectionUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CollectionUtilities)
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class CollectionUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Collections::CollectionUtilities);
// Type: Org.BouncyCastle.Utilities.Collections::CollectionUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.Collections::CollectionUtilities*
class CORDL_TYPE CollectionUtilities : public ::System::Object {
public:
// Declarations
/// @brief Method AddRange, addr 0x2584bc8, size 0x35c, virtual false, abstract: false, final false
static inline void AddRange(::System::Collections::IList*  to, ::System::Collections::IEnumerable*  range) ;

/// @brief Method CheckElementsAreOfType, addr 0x2584f24, size 0x308, virtual false, abstract: false, final false
static inline bool CheckElementsAreOfType(::System::Collections::IEnumerable*  e, ::System::Type*  t) ;

static inline ::Org::BouncyCastle::Utilities::Collections::CollectionUtilities* New_ctor() ;

/// @brief Method ReadOnly, addr 0x2583b5c, size 0x5c, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Utilities::Collections::ISet* ReadOnly(::Org::BouncyCastle::Utilities::Collections::ISet*  s) ;

/// @brief Method ReadOnly, addr 0x258522c, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Collections::IDictionary* ReadOnly(::System::Collections::IDictionary*  d) ;

/// @brief Method ReadOnly, addr 0x2583bb8, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Collections::IList* ReadOnly(::System::Collections::IList*  l) ;

/// @brief Method RequireNext, addr 0x2585300, size 0x130, virtual false, abstract: false, final false
static inline ::System::Object* RequireNext(::System::Collections::IEnumerator*  e) ;

/// @brief Method ToString, addr 0x2585430, size 0x314, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Collections::IEnumerable*  c) ;

/// @brief Method .ctor, addr 0x2585744, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CollectionUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CollectionUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CollectionUtilities(CollectionUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollectionUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollectionUtilities(CollectionUtilities const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Collections::CollectionUtilities, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Collections::CollectionUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Collections::CollectionUtilities*, "Org.BouncyCastle.Utilities.Collections", "CollectionUtilities");
