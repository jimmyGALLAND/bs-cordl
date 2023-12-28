#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SpriteAtlasManager)
namespace UnityEngine::U2D {
class SpriteAtlas;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace UnityEngine::U2D {
class SpriteAtlasManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::U2D::SpriteAtlasManager);
// Type: UnityEngine.U2D::SpriteAtlasManager
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::U2D {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10295))
// CS Name: ::UnityEngine.U2D::SpriteAtlasManager*
class CORDL_TYPE SpriteAtlasManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field atlasRequested, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_atlasRequested, put = setStaticF_atlasRequested))::System::Action_2<::StringW, ::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>*>* atlasRequested;

  /// @brief Field atlasRegistered, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_atlasRegistered, put = setStaticF_atlasRegistered))::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>* atlasRegistered;

  static inline void setStaticF_atlasRequested(::System::Action_2<::StringW, ::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>*>* value);

  static inline ::System::Action_2<::StringW, ::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>*>* getStaticF_atlasRequested();

  static inline void setStaticF_atlasRegistered(::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>* value);

  static inline ::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>* getStaticF_atlasRegistered();

  /// @brief Method RequestAtlas addr 0x2ce6574 size 0xc0 virtual false final false
  static inline bool RequestAtlas(::StringW tag);

  /// @brief Method add_atlasRegistered addr 0x2ce6634 size 0xd0 virtual false final false
  static inline void add_atlasRegistered(::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>* value);

  /// @brief Method remove_atlasRegistered addr 0x2ce6704 size 0xd0 virtual false final false
  static inline void remove_atlasRegistered(::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>* value);

  /// @brief Method PostRegisteredAtlas addr 0x2ce67d4 size 0x6c virtual false final false
  static inline void PostRegisteredAtlas(::UnityEngine::U2D::SpriteAtlas* spriteAtlas);

  /// @brief Method Register addr 0x2ce6840 size 0x3c virtual false final false
  static inline void Register(::UnityEngine::U2D::SpriteAtlas* spriteAtlas);

  // Ctor Parameters [CppParam { name: "", ty: "SpriteAtlasManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpriteAtlasManager(SpriteAtlasManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpriteAtlasManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpriteAtlasManager(SpriteAtlasManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteAtlasManager();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::U2D::SpriteAtlasManager, 0x10>, "Size mismatch!");

} // namespace UnityEngine::U2D
NEED_NO_BOX(::UnityEngine::U2D::SpriteAtlasManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::U2D::SpriteAtlasManager*, "UnityEngine.U2D", "SpriteAtlasManager");
