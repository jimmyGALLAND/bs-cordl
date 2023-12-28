#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_LoadBufferMesh)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace HoudiniEngineUnity {
class HEU_GenerateGeoCache;
}
namespace HoudiniEngineUnity {
class HEU_GeoGroup;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_LoadBufferMesh;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_LoadBufferMesh);
// Type: HoudiniEngineUnity::HEU_LoadBufferMesh
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9804))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9805))
// CS Name: ::HoudiniEngineUnity::HEU_LoadBufferMesh*
class CORDL_TYPE HEU_LoadBufferMesh : public ::HoudiniEngineUnity::HEU_LoadBufferBase {
public:
  // Declarations
  /// @brief Field _geoCache, offset 0x30, size 0x8
  __declspec(property(get = __get__geoCache, put = __set__geoCache))::HoudiniEngineUnity::HEU_GenerateGeoCache* _geoCache;

  /// @brief Field _LODGroupMeshes, offset 0x38, size 0x8
  __declspec(property(get = __get__LODGroupMeshes, put = __set__LODGroupMeshes))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>* _LODGroupMeshes;

  /// @brief Field _defaultMaterialKey, offset 0x40, size 0x4
  __declspec(property(get = __get__defaultMaterialKey, put = __set__defaultMaterialKey)) int32_t _defaultMaterialKey;

  /// @brief Field _bGenerateUVs, offset 0x44, size 0x1
  __declspec(property(get = __get__bGenerateUVs, put = __set__bGenerateUVs)) bool _bGenerateUVs;

  /// @brief Field _bGenerateTangents, offset 0x45, size 0x1
  __declspec(property(get = __get__bGenerateTangents, put = __set__bGenerateTangents)) bool _bGenerateTangents;

  /// @brief Field _bGenerateNormals, offset 0x46, size 0x1
  __declspec(property(get = __get__bGenerateNormals, put = __set__bGenerateNormals)) bool _bGenerateNormals;

  /// @brief Field _bPartInstanced, offset 0x47, size 0x1
  __declspec(property(get = __get__bPartInstanced, put = __set__bPartInstanced)) bool _bPartInstanced;

  constexpr ::HoudiniEngineUnity::HEU_GenerateGeoCache*& __get__geoCache();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_GenerateGeoCache*> const& __get__geoCache() const;

  constexpr void __set__geoCache(::HoudiniEngineUnity::HEU_GenerateGeoCache* value);

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*& __get__LODGroupMeshes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*> const& __get__LODGroupMeshes() const;

  constexpr void __set__LODGroupMeshes(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>* value);

  constexpr int32_t& __get__defaultMaterialKey();

  constexpr int32_t const& __get__defaultMaterialKey() const;

  constexpr void __set__defaultMaterialKey(int32_t value);

  constexpr bool& __get__bGenerateUVs();

  constexpr bool const& __get__bGenerateUVs() const;

  constexpr void __set__bGenerateUVs(bool value);

  constexpr bool& __get__bGenerateTangents();

  constexpr bool const& __get__bGenerateTangents() const;

  constexpr void __set__bGenerateTangents(bool value);

  constexpr bool& __get__bGenerateNormals();

  constexpr bool const& __get__bGenerateNormals() const;

  constexpr void __set__bGenerateNormals(bool value);

  constexpr bool& __get__bPartInstanced();

  constexpr bool const& __get__bPartInstanced() const;

  constexpr void __set__bPartInstanced(bool value);

  static inline ::HoudiniEngineUnity::HEU_LoadBufferMesh* New_ctor();

  /// @brief Method .ctor addr 0x21abc0c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferMesh", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_LoadBufferMesh(HEU_LoadBufferMesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferMesh", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_LoadBufferMesh(HEU_LoadBufferMesh const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_LoadBufferMesh();

public:
  /// @brief Field _geoCache, offset: 0x30, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_GenerateGeoCache* ____geoCache;

  /// @brief Field _LODGroupMeshes, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>* ____LODGroupMeshes;

  /// @brief Field _defaultMaterialKey, offset: 0x40, size: 0x4, def value: None
  int32_t ____defaultMaterialKey;

  /// @brief Field _bGenerateUVs, offset: 0x44, size: 0x1, def value: None
  bool ____bGenerateUVs;

  /// @brief Field _bGenerateTangents, offset: 0x45, size: 0x1, def value: None
  bool ____bGenerateTangents;

  /// @brief Field _bGenerateNormals, offset: 0x46, size: 0x1, def value: None
  bool ____bGenerateNormals;

  /// @brief Field _bPartInstanced, offset: 0x47, size: 0x1, def value: None
  bool ____bPartInstanced;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_LoadBufferMesh, 0x48>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_LoadBufferMesh);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_LoadBufferMesh*, "HoudiniEngineUnity", "HEU_LoadBufferMesh");
