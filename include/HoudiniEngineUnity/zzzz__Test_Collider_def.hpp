#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_Collider)
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivableWrapperClass_1;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_Collider;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_Collider);
// Type: HoudiniEngineUnity::Test_Collider
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9913))
// CS Name: ::HoudiniEngineUnity::Test_Collider*
class CORDL_TYPE Test_Collider : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x8
  __declspec(property(get = __get_self, put = __set_self))::UnityEngine::Collider* self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Collider*>"
  constexpr operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Collider*>*() noexcept;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Collider*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Collider*>*() noexcept;

  constexpr ::UnityEngine::Collider*& __get_self();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Collider*> const& __get_self() const;

  constexpr void __set_self(::UnityEngine::Collider* value);

  static inline ::HoudiniEngineUnity::Test_Collider* New_ctor(::UnityEngine::Collider* self);

  /// @brief Method .ctor addr 0x21e531c size 0x28 virtual false final false
  inline void _ctor(::UnityEngine::Collider* self);

  /// @brief Method IsNull addr 0x21e5344 size 0x60 virtual true final true
  inline bool IsNull();

  /// @brief Method IsEquivalentTo addr 0x21e53a4 size 0x8 virtual true final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_Collider* other);

  // Ctor Parameters [CppParam { name: "", ty: "Test_Collider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_Collider(Test_Collider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_Collider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_Collider(Test_Collider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_Collider();

public:
  /// @brief Field self, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Collider* ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_Collider, 0x18>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_Collider);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_Collider*, "HoudiniEngineUnity", "Test_Collider");
