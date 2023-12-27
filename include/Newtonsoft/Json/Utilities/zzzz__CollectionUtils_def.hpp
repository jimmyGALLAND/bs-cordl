#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CollectionUtils)
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IList;
}
namespace System {
class Object;
}
namespace System {
class Array;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class CollectionUtils;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::CollectionUtils);
// Type: Newtonsoft.Json.Utilities::CollectionUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11891))
// CS Name: ::Newtonsoft.Json.Utilities::CollectionUtils*
class CORDL_TYPE CollectionUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsNullOrEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool IsNullOrEmpty(::System::Collections::Generic::ICollection_1<T>* collection);

  /// @brief Method AddRange addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void AddRange(::System::Collections::Generic::IList_1<T>* initial, ::System::Collections::Generic::IEnumerable_1<T>* collection);

  /// @brief Method AddRange addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void AddRange(::System::Collections::Generic::IList_1<T>* initial, ::System::Collections::IEnumerable* collection);

  /// @brief Method IsDictionaryType addr 0x2664430 size 0x138 virtual false final false
  static inline bool IsDictionaryType(::System::Type* type);

  /// @brief Method ResolveEnumerableCollectionConstructor addr 0x26645dc size 0x110 virtual false final false
  static inline ::System::Reflection::ConstructorInfo* ResolveEnumerableCollectionConstructor(::System::Type* collectionType, ::System::Type* collectionItemType);

  /// @brief Method ResolveEnumerableCollectionConstructor addr 0x26646ec size 0x2c4 virtual false final false
  static inline ::System::Reflection::ConstructorInfo* ResolveEnumerableCollectionConstructor(::System::Type* collectionType, ::System::Type* collectionItemType,
                                                                                              ::System::Type* constructorArgumentType);

  /// @brief Method AddDistinct addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool AddDistinct(::System::Collections::Generic::IList_1<T>* list, T value);

  /// @brief Method AddDistinct addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool AddDistinct(::System::Collections::Generic::IList_1<T>* list, T value, ::System::Collections::Generic::IEqualityComparer_1<T>* comparer);

  /// @brief Method ContainsValue addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TSource>
  static inline bool ContainsValue(::System::Collections::Generic::IEnumerable_1<TSource>* source, TSource value, ::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer);

  /// @brief Method AddRangeDistinct addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  static inline bool AddRangeDistinct(::System::Collections::Generic::IList_1<T>* list, ::System::Collections::Generic::IEnumerable_1<T>* values,
                                      ::System::Collections::Generic::IEqualityComparer_1<T>* comparer);

  /// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline int32_t IndexOf(::System::Collections::Generic::IEnumerable_1<T>* collection, ::System::Func_2<T, bool>* predicate);

  /// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool Contains(::System::Collections::Generic::List_1<T>* list, T value, ::System::Collections::IEqualityComparer* comparer);

  /// @brief Method IndexOfReference addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline int32_t IndexOfReference(::System::Collections::Generic::List_1<T>* list, T item);

  /// @brief Method GetDimensions addr 0x26649b0 size 0x2e4 virtual false final false
  static inline ::System::Collections::Generic::IList_1<int32_t>* GetDimensions(::System::Collections::IList* values, int32_t dimensionsCount);

  /// @brief Method CopyFromJaggedToMultidimensionalArray addr 0x2664c94 size 0x2c0 virtual false final false
  static inline void CopyFromJaggedToMultidimensionalArray(::System::Collections::IList* values, ::System::Array* multidimensionalArray, ::ArrayW<int32_t, ::Array<int32_t>*> indices);

  /// @brief Method JaggedArrayGetValue addr 0x2664f54 size 0x13c virtual false final false
  static inline ::System::Object* JaggedArrayGetValue(::System::Collections::IList* values, ::ArrayW<int32_t, ::Array<int32_t>*> indices);

  /// @brief Method ToMultidimensionalArray addr 0x2665090 size 0x1a0 virtual false final false
  static inline ::System::Array* ToMultidimensionalArray(::System::Collections::IList* values, ::System::Type* type, int32_t rank);

  // Ctor Parameters [CppParam { name: "", ty: "CollectionUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionUtils(CollectionUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionUtils(CollectionUtils const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionUtils();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::CollectionUtils, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::CollectionUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::CollectionUtils*, "Newtonsoft.Json.Utilities", "CollectionUtils");
