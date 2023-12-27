#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__InteriorNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ChoiceNode)
namespace System::Xml::Schema {
class SyntaxTreeNode;
}
namespace System::Xml::Schema {
class SymbolsDictionary;
}
namespace System::Xml::Schema {
class InteriorNode;
}
namespace System::Xml::Schema {
class Positions;
}
namespace System::Xml::Schema {
class BitSet;
}
// Forward declare root types
namespace System::Xml::Schema {
class ChoiceNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::ChoiceNode);
// Type: System.Xml.Schema::ChoiceNode
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11602))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11605))
// CS Name: ::System.Xml.Schema::ChoiceNode*
class CORDL_TYPE ChoiceNode : public ::System::Xml::Schema::InteriorNode {
public:
  // Declarations
  __declspec(property(get = get_IsNullable)) bool IsNullable;

  /// @brief Method ConstructChildPos addr 0x28ae8d8 size 0xdc virtual false final false
  static inline void ConstructChildPos(::System::Xml::Schema::SyntaxTreeNode* child, ::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos,
                                       ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos);

  /// @brief Method ConstructPos addr 0x28ae9b4 size 0x118 virtual true final false
  inline void ConstructPos(::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos,
                           ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos);

  /// @brief Method get_IsNullable addr 0x28aeacc size 0x90 virtual true final false
  inline bool get_IsNullable();

  /// @brief Method ExpandTree addr 0x28aeb5c size 0x4 virtual true final false
  inline void ExpandTree(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions);

  static inline ::System::Xml::Schema::ChoiceNode* New_ctor();

  /// @brief Method .ctor addr 0x28ae124 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ChoiceNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChoiceNode(ChoiceNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChoiceNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChoiceNode(ChoiceNode const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChoiceNode();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::ChoiceNode, 0x20>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::ChoiceNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::ChoiceNode*, "System.Xml.Schema", "ChoiceNode");
