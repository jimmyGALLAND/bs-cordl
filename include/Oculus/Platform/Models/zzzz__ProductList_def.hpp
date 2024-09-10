#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/ProductList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProductList)
namespace Oculus::Platform::Models {
class Product;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class ProductList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::ProductList);
// Type: Oculus.Platform.Models::ProductList
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: ::Oculus.Platform.Models::ProductList*
class CORDL_TYPE ProductList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::Product*> {
public:
// Declarations
static inline ::Oculus::Platform::Models::ProductList* New_ctor(::System::IntPtr  a) ;

/// @brief Method .ctor, addr 0x3f0278c, size 0x210, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  a) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProductList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProductList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProductList(ProductList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProductList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProductList(ProductList const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::ProductList, 0x28>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::ProductList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::ProductList*, "Oculus.Platform.Models", "ProductList");
