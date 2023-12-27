#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LODGroup)
namespace UnityEngine {
struct LOD;
}
// Forward declare root types
namespace UnityEngine {
class LODGroup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::LODGroup);
// Type: UnityEngine::LODGroup
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10238))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10091))
// CS Name: ::UnityEngine::LODGroup*
class CORDL_TYPE LODGroup : public ::UnityEngine::Component {
public:
  // Declarations
  __declspec(property(get = get_size)) float_t size;

  __declspec(property(get = get_lodCount)) int32_t lodCount;

  /// @brief Method get_size addr 0x2cb7104 size 0x3c virtual false final false
  inline float_t get_size();

  /// @brief Method get_lodCount addr 0x2cb7140 size 0x3c virtual false final false
  inline int32_t get_lodCount();

  /// @brief Method RecalculateBounds addr 0x2cb717c size 0x3c virtual false final false
  inline void RecalculateBounds();

  /// @brief Method GetLODs addr 0x2cb71b8 size 0x3c virtual false final false
  inline ::ArrayW<::UnityEngine::LOD, ::Array<::UnityEngine::LOD>*> GetLODs();

  /// @brief Method SetLODs addr 0x2cb71f4 size 0x44 virtual false final false
  inline void SetLODs(::ArrayW<::UnityEngine::LOD, ::Array<::UnityEngine::LOD>*> lods);

  // Ctor Parameters [CppParam { name: "", ty: "LODGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LODGroup(LODGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LODGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LODGroup(LODGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LODGroup();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LODGroup, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::LODGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LODGroup*, "UnityEngine", "LODGroup");
