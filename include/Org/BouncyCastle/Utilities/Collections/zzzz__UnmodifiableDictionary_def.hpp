#pragma once
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
class IEnumerable;
}
namespace System {
class Object;
}
namespace System {
class Array;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class UnmodifiableDictionary;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary);
// Type: Org.BouncyCastle.Utilities.Collections::UnmodifiableDictionary
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1785))
// CS Name: ::Org.BouncyCastle.Utilities.Collections::UnmodifiableDictionary*
class CORDL_TYPE UnmodifiableDictionary : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  __declspec(property(get = get_Keys))::System::Collections::ICollection* Keys;

  __declspec(property(get = get_Values))::System::Collections::ICollection* Values;

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  /// @brief Convert operator to "::System::Collections::IDictionary"
  constexpr operator ::System::Collections::IDictionary*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  static inline ::Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary* New_ctor();

  /// @brief Method .ctor addr 0x115a14c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method Add addr 0x115a154 size 0x40 virtual true final false
  inline void Add(::System::Object* k, ::System::Object* v);

  /// @brief Method Clear addr 0x115a194 size 0x40 virtual true final false
  inline void Clear();

  /// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool Contains(::System::Object* k);

  /// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_Count();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x115a1d4 size 0x10 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  /// @brief Method Remove addr 0x115a1e4 size 0x40 virtual true final false
  inline void Remove(::System::Object* k);

  /// @brief Method get_IsFixedSize addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly addr 0x115a224 size 0x8 virtual true final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Method get_Keys addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Collections::ICollection* get_Keys();

  /// @brief Method get_Values addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Collections::ICollection* get_Values();

  /// @brief Method get_Item addr 0x115a22c size 0x10 virtual true final false
  inline ::System::Object* get_Item(::System::Object* k);

  /// @brief Method set_Item addr 0x115a23c size 0x40 virtual true final false
  inline void set_Item(::System::Object* k, ::System::Object* value);

  /// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* GetValue(::System::Object* k);

  // Ctor Parameters [CppParam { name: "", ty: "UnmodifiableDictionary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnmodifiableDictionary(UnmodifiableDictionary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnmodifiableDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnmodifiableDictionary(UnmodifiableDictionary const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnmodifiableDictionary();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary*, "Org.BouncyCastle.Utilities.Collections", "UnmodifiableDictionary");
