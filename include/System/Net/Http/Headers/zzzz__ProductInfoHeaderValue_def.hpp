#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProductInfoHeaderValue)
namespace System {
class ICloneable;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace System::Net::Http::Headers {
class ProductHeaderValue;
}
namespace System::Net::Http::Headers {
class Lexer;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class ProductInfoHeaderValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::ProductInfoHeaderValue);
// Type: System.Net.Http.Headers::ProductInfoHeaderValue
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14702))
// CS Name: ::System.Net.Http.Headers::ProductInfoHeaderValue*
class CORDL_TYPE ProductInfoHeaderValue : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Comment>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Comment_k__BackingField, put = __set__Comment_k__BackingField))::StringW _Comment_k__BackingField;

  /// @brief Field <Product>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__Product_k__BackingField, put = __set__Product_k__BackingField))::System::Net::Http::Headers::ProductHeaderValue* _Product_k__BackingField;

  __declspec(property(get = get_Comment, put = set_Comment))::StringW Comment;

  __declspec(property(get = get_Product, put = set_Product))::System::Net::Http::Headers::ProductHeaderValue* Product;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  constexpr ::StringW& __get__Comment_k__BackingField();

  constexpr ::StringW const& __get__Comment_k__BackingField() const;

  constexpr void __set__Comment_k__BackingField(::StringW value);

  constexpr ::System::Net::Http::Headers::ProductHeaderValue*& __get__Product_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::ProductHeaderValue*> const& __get__Product_k__BackingField() const;

  constexpr void __set__Product_k__BackingField(::System::Net::Http::Headers::ProductHeaderValue* value);

  static inline ::System::Net::Http::Headers::ProductInfoHeaderValue* New_ctor(::System::Net::Http::Headers::ProductHeaderValue* product);

  /// @brief Method .ctor addr 0x283f55c size 0x68 virtual false final false
  inline void _ctor(::System::Net::Http::Headers::ProductHeaderValue* product);

  static inline ::System::Net::Http::Headers::ProductInfoHeaderValue* New_ctor();

  /// @brief Method .ctor addr 0x283f5c4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method get_Comment addr 0x283f5cc size 0x8 virtual false final false
  inline ::StringW get_Comment();

  /// @brief Method set_Comment addr 0x283f5d4 size 0x8 virtual false final false
  inline void set_Comment(::StringW value);

  /// @brief Method get_Product addr 0x283f5dc size 0x8 virtual false final false
  inline ::System::Net::Http::Headers::ProductHeaderValue* get_Product();

  /// @brief Method set_Product addr 0x283f5e4 size 0x8 virtual false final false
  inline void set_Product(::System::Net::Http::Headers::ProductHeaderValue* value);

  /// @brief Method System.ICloneable.Clone addr 0x283f5ec size 0x8 virtual true final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method Equals addr 0x283f5f4 size 0xc0 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x283f6b4 size 0x2c virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method TryParse addr 0x283f6e0 size 0x1a8 virtual false final false
  static inline bool TryParse(::StringW input, int32_t minimalCount, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::ProductInfoHeaderValue*>*> result);

  /// @brief Method TryParseElement addr 0x283f888 size 0x1ec virtual false final false
  static inline bool TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ByRef<::System::Net::Http::Headers::ProductInfoHeaderValue*> parsedValue);

  /// @brief Method ToString addr 0x283fa74 size 0x20 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "ProductInfoHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProductInfoHeaderValue(ProductInfoHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProductInfoHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProductInfoHeaderValue(ProductInfoHeaderValue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProductInfoHeaderValue();

public:
  /// @brief Field <Comment>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Comment_k__BackingField;

  /// @brief Field <Product>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Net::Http::Headers::ProductHeaderValue* ____Product_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::ProductInfoHeaderValue, 0x20>, "Size mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::ProductInfoHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::ProductInfoHeaderValue*, "System.Net.Http.Headers", "ProductInfoHeaderValue");
