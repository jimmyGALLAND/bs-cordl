#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XObjectChangeAnnotation)
namespace System::Xml::Linq {
class XObjectChangeEventArgs;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
// Forward declare root types
namespace System::Xml::Linq {
class XObjectChangeAnnotation;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::XObjectChangeAnnotation);
// Type: System.Xml.Linq::XObjectChangeAnnotation
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15455))
// CS Name: ::System.Xml.Linq::XObjectChangeAnnotation*
class CORDL_TYPE XObjectChangeAnnotation : public ::System::Object {
public:
  // Declarations
  /// @brief Field changing, offset 0x10, size 0x8
  __declspec(property(get = __get_changing, put = __set_changing))::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>* changing;

  /// @brief Field changed, offset 0x18, size 0x8
  __declspec(property(get = __get_changed, put = __set_changed))::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>* changed;

  constexpr ::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>*& __get_changing();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>*> const& __get_changing() const;

  constexpr void __set_changing(::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>* value);

  constexpr ::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>*& __get_changed();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>*> const& __get_changed() const;

  constexpr void __set_changed(::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>* value);

  // Ctor Parameters [CppParam { name: "", ty: "XObjectChangeAnnotation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XObjectChangeAnnotation(XObjectChangeAnnotation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XObjectChangeAnnotation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XObjectChangeAnnotation(XObjectChangeAnnotation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XObjectChangeAnnotation();

public:
  /// @brief Field changing, offset: 0x10, size: 0x8, def value: None
  ::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>* ___changing;

  /// @brief Field changed, offset: 0x18, size: 0x8, def value: None
  ::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>* ___changed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XObjectChangeAnnotation, 0x20>, "Size mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XObjectChangeAnnotation);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XObjectChangeAnnotation*, "System.Xml.Linq", "XObjectChangeAnnotation");
