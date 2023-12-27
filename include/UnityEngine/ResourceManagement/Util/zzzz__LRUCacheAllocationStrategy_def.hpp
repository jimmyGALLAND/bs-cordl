#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LRUCacheAllocationStrategy)
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::ResourceManagement::Util {
class IAllocationStrategy;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class LRUCacheAllocationStrategy;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy);
// Type: UnityEngine.ResourceManagement.Util::LRUCacheAllocationStrategy
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13979))
// CS Name: ::UnityEngine.ResourceManagement.Util::LRUCacheAllocationStrategy*
class CORDL_TYPE LRUCacheAllocationStrategy : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_poolMaxSize, offset 0x10, size 0x4
  __declspec(property(get = __get_m_poolMaxSize, put = __set_m_poolMaxSize)) int32_t m_poolMaxSize;

  /// @brief Field m_poolInitialCapacity, offset 0x14, size 0x4
  __declspec(property(get = __get_m_poolInitialCapacity, put = __set_m_poolInitialCapacity)) int32_t m_poolInitialCapacity;

  /// @brief Field m_poolCacheMaxSize, offset 0x18, size 0x4
  __declspec(property(get = __get_m_poolCacheMaxSize, put = __set_m_poolCacheMaxSize)) int32_t m_poolCacheMaxSize;

  /// @brief Field m_poolCache, offset 0x20, size 0x8
  __declspec(property(get = __get_m_poolCache, put = __set_m_poolCache))::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Object*>*>* m_poolCache;

  /// @brief Field m_cache, offset 0x28, size 0x8
  __declspec(property(get = __get_m_cache, put = __set_m_cache))::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::System::Object*>*>* m_cache;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::IAllocationStrategy"
  constexpr operator ::UnityEngine::ResourceManagement::Util::IAllocationStrategy*() noexcept;

  constexpr int32_t& __get_m_poolMaxSize();

  constexpr int32_t const& __get_m_poolMaxSize() const;

  constexpr void __set_m_poolMaxSize(int32_t value);

  constexpr int32_t& __get_m_poolInitialCapacity();

  constexpr int32_t const& __get_m_poolInitialCapacity() const;

  constexpr void __set_m_poolInitialCapacity(int32_t value);

  constexpr int32_t& __get_m_poolCacheMaxSize();

  constexpr int32_t const& __get_m_poolCacheMaxSize() const;

  constexpr void __set_m_poolCacheMaxSize(int32_t value);

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Object*>*>*& __get_m_poolCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Object*>*>*> const& __get_m_poolCache() const;

  constexpr void __set_m_poolCache(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Object*>*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::System::Object*>*>*& __get_m_cache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::System::Object*>*>*> const& __get_m_cache() const;

  constexpr void __set_m_cache(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::System::Object*>*>* value);

  static inline ::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy* New_ctor(int32_t poolMaxSize, int32_t poolCapacity, int32_t poolCacheMaxSize, int32_t initialPoolCacheCapacity);

  /// @brief Method .ctor addr 0x2bca3cc size 0x1d8 virtual false final false
  inline void _ctor(int32_t poolMaxSize, int32_t poolCapacity, int32_t poolCacheMaxSize, int32_t initialPoolCacheCapacity);

  /// @brief Method GetPool addr 0x2bd202c size 0xf0 virtual false final false
  inline ::System::Collections::Generic::List_1<::System::Object*>* GetPool();

  /// @brief Method ReleasePool addr 0x2bd211c size 0xc0 virtual false final false
  inline void ReleasePool(::System::Collections::Generic::List_1<::System::Object*>* pool);

  /// @brief Method New addr 0x2bd21dc size 0x13c virtual true final true
  inline ::System::Object* New(::System::Type* type, int32_t typeHash);

  /// @brief Method Release addr 0x2bd2318 size 0x138 virtual true final true
  inline void Release(int32_t typeHash, ::System::Object* obj);

  // Ctor Parameters [CppParam { name: "", ty: "LRUCacheAllocationStrategy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LRUCacheAllocationStrategy(LRUCacheAllocationStrategy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LRUCacheAllocationStrategy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LRUCacheAllocationStrategy(LRUCacheAllocationStrategy const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LRUCacheAllocationStrategy();

public:
  /// @brief Field m_poolMaxSize, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_poolMaxSize;

  /// @brief Field m_poolInitialCapacity, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_poolInitialCapacity;

  /// @brief Field m_poolCacheMaxSize, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_poolCacheMaxSize;

  /// @brief Field m_poolCache, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Object*>*>* ___m_poolCache;

  /// @brief Field m_cache, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::System::Object*>*>* ___m_cache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy, 0x30>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy*, "UnityEngine.ResourceManagement.Util", "LRUCacheAllocationStrategy");
