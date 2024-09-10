#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/SerializableDictionary_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
CORDL_MODULE_EXPORT(SerializableDictionary_2)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace BGLib::UnityExtension {
template<typename TKey,typename TValue>
class SerializableDictionary_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::BGLib::UnityExtension::SerializableDictionary_2);
// Type: BGLib.UnityExtension::SerializableDictionary`2
// SizeInfo { instance_size: 96, native_size: 96, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::UnityExtension {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// CS Name: ::BGLib.UnityExtension::SerializableDictionary`2<TKey,TValue>*
class CORDL_TYPE SerializableDictionary_2 : public ::System::Collections::Generic::Dictionary_2<TKey,TValue> {
public:
// Declarations
/// @brief Field keys, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_keys, put=__cordl_internal_set_keys)) ::System::Collections::Generic::List_1<TKey>*  keys;

/// @brief Field values, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_values, put=__cordl_internal_set_values)) ::System::Collections::Generic::List_1<TValue>*  values;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

static inline ::BGLib::UnityExtension::SerializableDictionary_2<TKey,TValue>* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

constexpr ::System::Collections::Generic::List_1<TKey>*& __cordl_internal_get_keys() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<TKey>*> const& __cordl_internal_get_keys() const;

constexpr ::System::Collections::Generic::List_1<TValue>*& __cordl_internal_get_values() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<TValue>*> const& __cordl_internal_get_values() const;

constexpr void __cordl_internal_set_keys(::System::Collections::Generic::List_1<TKey>*  value) ;

constexpr void __cordl_internal_set_values(::System::Collections::Generic::List_1<TValue>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializableDictionary_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializableDictionary_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializableDictionary_2(SerializableDictionary_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializableDictionary_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializableDictionary_2(SerializableDictionary_2 const& ) = delete;

/// @brief Field keys, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<TKey>*  ___keys;

/// @brief Field values, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<TValue>*  ___values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGLib::UnityExtension
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGLib::UnityExtension::SerializableDictionary_2, "BGLib.UnityExtension", "SerializableDictionary`2");
