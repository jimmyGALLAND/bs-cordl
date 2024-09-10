#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Collections/UnmodifiableListProxy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/Collections/zzzz__UnmodifiableList_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnmodifiableListProxy)
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class UnmodifiableListProxy;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Collections::UnmodifiableListProxy);
// Type: Org.BouncyCastle.Utilities.Collections::UnmodifiableListProxy
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.Collections::UnmodifiableListProxy*
class CORDL_TYPE UnmodifiableListProxy : public ::Org::BouncyCastle::Utilities::Collections::UnmodifiableList {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsFixedSize)) bool  IsFixedSize;

 __declspec(property(get=get_IsSynchronized)) bool  IsSynchronized;

 __declspec(property(get=get_SyncRoot)) ::System::Object*  SyncRoot;

/// @brief Field l, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_l, put=__cordl_internal_set_l)) ::System::Collections::IList*  l;

/// @brief Method Contains, addr 0x2588788, size 0xac, virtual true, abstract: false, final false
inline bool Contains(::System::Object*  o) ;

/// @brief Method CopyTo, addr 0x2588834, size 0xb8, virtual true, abstract: false, final false
inline void CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method GetEnumerator, addr 0x2588990, size 0xa0, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* GetEnumerator() ;

/// @brief Method GetValue, addr 0x2588cc8, size 0xa8, virtual true, abstract: false, final false
inline ::System::Object* GetValue(int32_t  i) ;

/// @brief Method IndexOf, addr 0x2588a30, size 0xac, virtual true, abstract: false, final false
inline int32_t IndexOf(::System::Object*  o) ;

static inline ::Org::BouncyCastle::Utilities::Collections::UnmodifiableListProxy* New_ctor(::System::Collections::IList*  l) ;

constexpr ::System::Collections::IList*& __cordl_internal_get_l() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_l() const;

constexpr void __cordl_internal_set_l(::System::Collections::IList*  value) ;

/// @brief Method .ctor, addr 0x25852b0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::IList*  l) ;

/// @brief Method get_Count, addr 0x25888ec, size 0xa4, virtual true, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_IsFixedSize, addr 0x2588adc, size 0xa4, virtual true, abstract: false, final false
inline bool get_IsFixedSize() ;

/// @brief Method get_IsSynchronized, addr 0x2588b80, size 0xa4, virtual true, abstract: false, final false
inline bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot, addr 0x2588c24, size 0xa4, virtual true, abstract: false, final false
inline ::System::Object* get_SyncRoot() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnmodifiableListProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnmodifiableListProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnmodifiableListProxy(UnmodifiableListProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnmodifiableListProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnmodifiableListProxy(UnmodifiableListProxy const& ) = delete;

/// @brief Field l, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::IList*  ___l;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Collections::UnmodifiableListProxy, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Collections::UnmodifiableListProxy, ___l) == 0x10, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Collections::UnmodifiableListProxy);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Collections::UnmodifiableListProxy*, "Org.BouncyCastle.Utilities.Collections", "UnmodifiableListProxy");
