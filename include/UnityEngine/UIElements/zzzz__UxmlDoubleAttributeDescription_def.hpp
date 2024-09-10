#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlDoubleAttributeDescription.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UxmlDoubleAttributeDescription)
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class __UxmlDoubleAttributeDescription____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlDoubleAttributeDescription;
}
namespace UnityEngine::UIElements {
class __UxmlDoubleAttributeDescription____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlDoubleAttributeDescription);
MARK_REF_PTR_T(::UnityEngine::UIElements::__UxmlDoubleAttributeDescription____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UxmlDoubleAttributeDescription::<>c*
class CORDL_TYPE __UxmlDoubleAttributeDescription____c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::UIElements::__UxmlDoubleAttributeDescription____c*  __9;

/// @brief Field <>9__3_0, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9__3_0, put=setStaticF___9__3_0)) ::System::Func_3<::StringW,double_t,double_t>*  __9__3_0;

static inline ::UnityEngine::UIElements::__UxmlDoubleAttributeDescription____c* New_ctor() ;

/// @brief Method <GetValueFromBag>b__3_0, addr 0x4a0c788, size 0x8, virtual false, abstract: false, final false
inline double_t _GetValueFromBag_b__3_0(::StringW  s, double_t  d) ;

/// @brief Method .ctor, addr 0x4a0c780, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::__UxmlDoubleAttributeDescription____c* getStaticF___9() ;

static inline ::System::Func_3<::StringW,double_t,double_t>* getStaticF___9__3_0() ;

static inline void setStaticF___9(::UnityEngine::UIElements::__UxmlDoubleAttributeDescription____c*  value) ;

static inline void setStaticF___9__3_0(::System::Func_3<::StringW,double_t,double_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __UxmlDoubleAttributeDescription____c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__UxmlDoubleAttributeDescription____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__UxmlDoubleAttributeDescription____c(__UxmlDoubleAttributeDescription____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__UxmlDoubleAttributeDescription____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__UxmlDoubleAttributeDescription____c(__UxmlDoubleAttributeDescription____c const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__UxmlDoubleAttributeDescription____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::UxmlDoubleAttributeDescription
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::UxmlDoubleAttributeDescription*
class CORDL_TYPE UxmlDoubleAttributeDescription : public ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<double_t> {
public:
// Declarations
using __c = ::UnityEngine::UIElements::__UxmlDoubleAttributeDescription____c;

/// @brief Method ConvertValueToDouble, addr 0x4a0c688, size 0x9c, virtual false, abstract: false, final false
static inline double_t ConvertValueToDouble(::StringW  v, double_t  defaultValue) ;

/// @brief Method GetValueFromBag, addr 0x4a0c53c, size 0x14c, virtual true, abstract: false, final false
inline double_t GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

static inline ::UnityEngine::UIElements::UxmlDoubleAttributeDescription* New_ctor() ;

/// @brief Method .ctor, addr 0x4a0c4a4, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UxmlDoubleAttributeDescription() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UxmlDoubleAttributeDescription", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UxmlDoubleAttributeDescription(UxmlDoubleAttributeDescription && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UxmlDoubleAttributeDescription", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UxmlDoubleAttributeDescription(UxmlDoubleAttributeDescription const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlDoubleAttributeDescription, 0x48>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlDoubleAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlDoubleAttributeDescription*, "UnityEngine.UIElements", "UxmlDoubleAttributeDescription");
NEED_NO_BOX(::UnityEngine::UIElements::__UxmlDoubleAttributeDescription____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__UxmlDoubleAttributeDescription____c*, "UnityEngine.UIElements", "UxmlDoubleAttributeDescription/<>c");
