#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Collections/UnmodifiableDictionary.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnmodifiableDictionary)
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionaryEnumerator;
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
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class UnmodifiableDictionary;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary);
// Type: Org.BouncyCastle.Utilities.Collections::UnmodifiableDictionary
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.Collections::UnmodifiableDictionary*
class CORDL_TYPE UnmodifiableDictionary : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsFixedSize)) bool  IsFixedSize;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_IsSynchronized)) bool  IsSynchronized;

 __declspec(property(get=get_Item, put=set_Item)) ::System::Object*  Item[];

 __declspec(property(get=get_Keys)) ::System::Collections::ICollection*  Keys;

 __declspec(property(get=get_SyncRoot)) ::System::Object*  SyncRoot;

 __declspec(property(get=get_Values)) ::System::Collections::ICollection*  Values;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::IDictionary"
constexpr operator  ::System::Collections::IDictionary*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0x2587e88, size 0x38, virtual true, abstract: false, final false
inline void Add(::System::Object*  k, ::System::Object*  v) ;

/// @brief Method Clear, addr 0x2587ec0, size 0x38, virtual true, abstract: false, final false
inline void Clear() ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Contains(::System::Object*  k) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::IDictionaryEnumerator* GetEnumerator() ;

/// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* GetValue(::System::Object*  k) ;

static inline ::Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary* New_ctor() ;

/// @brief Method Remove, addr 0x2587f08, size 0x38, virtual true, abstract: false, final false
inline void Remove(::System::Object*  k) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2587ef8, size 0x10, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method .ctor, addr 0x2587e80, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_Count() ;

/// @brief Method get_IsFixedSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsFixedSize() ;

/// @brief Method get_IsReadOnly, addr 0x2587f40, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_IsSynchronized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsSynchronized() ;

/// @brief Method get_Item, addr 0x2587f48, size 0x10, virtual true, abstract: false, final false
inline ::System::Object* get_Item(::System::Object*  k) ;

/// @brief Method get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::ICollection* get_Keys() ;

/// @brief Method get_SyncRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* get_SyncRoot() ;

/// @brief Method get_Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::ICollection* get_Values() ;

/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

/// @brief Convert to "::System::Collections::IDictionary"
constexpr ::System::Collections::IDictionary* i___System__Collections__IDictionary() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method set_Item, addr 0x2587f58, size 0x38, virtual true, abstract: false, final false
inline void set_Item(::System::Object*  k, ::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnmodifiableDictionary() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnmodifiableDictionary", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnmodifiableDictionary(UnmodifiableDictionary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnmodifiableDictionary", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnmodifiableDictionary(UnmodifiableDictionary const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary*, "Org.BouncyCastle.Utilities.Collections", "UnmodifiableDictionary");
