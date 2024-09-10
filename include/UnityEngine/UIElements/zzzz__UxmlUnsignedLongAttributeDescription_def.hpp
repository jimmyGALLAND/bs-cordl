#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlUnsignedLongAttributeDescription.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UxmlUnsignedLongAttributeDescription)
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
class __UxmlUnsignedLongAttributeDescription____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlUnsignedLongAttributeDescription;
}
namespace UnityEngine::UIElements {
class __UxmlUnsignedLongAttributeDescription____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlUnsignedLongAttributeDescription);
MARK_REF_PTR_T(::UnityEngine::UIElements::__UxmlUnsignedLongAttributeDescription____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UxmlUnsignedLongAttributeDescription::<>c*
class CORDL_TYPE __UxmlUnsignedLongAttributeDescription____c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::UIElements::__UxmlUnsignedLongAttributeDescription____c*  __9;

/// @brief Field <>9__3_0, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9__3_0, put=setStaticF___9__3_0)) ::System::Func_3<::StringW,uint64_t,uint64_t>*  __9__3_0;

static inline ::UnityEngine::UIElements::__UxmlUnsignedLongAttributeDescription____c* New_ctor() ;

/// @brief Method <GetValueFromBag>b__3_0, addr 0x4a0d13c, size 0x40, virtual false, abstract: false, final false
inline uint64_t _GetValueFromBag_b__3_0(::StringW  s, uint64_t  l) ;

/// @brief Method .ctor, addr 0x4a0d134, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::__UxmlUnsignedLongAttributeDescription____c* getStaticF___9() ;

static inline ::System::Func_3<::StringW,uint64_t,uint64_t>* getStaticF___9__3_0() ;

static inline void setStaticF___9(::UnityEngine::UIElements::__UxmlUnsignedLongAttributeDescription____c*  value) ;

static inline void setStaticF___9__3_0(::System::Func_3<::StringW,uint64_t,uint64_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __UxmlUnsignedLongAttributeDescription____c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__UxmlUnsignedLongAttributeDescription____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__UxmlUnsignedLongAttributeDescription____c(__UxmlUnsignedLongAttributeDescription____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__UxmlUnsignedLongAttributeDescription____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__UxmlUnsignedLongAttributeDescription____c(__UxmlUnsignedLongAttributeDescription____c const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__UxmlUnsignedLongAttributeDescription____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::UxmlUnsignedLongAttributeDescription
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::UxmlUnsignedLongAttributeDescription*
class CORDL_TYPE UxmlUnsignedLongAttributeDescription : public ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<uint64_t> {
public:
// Declarations
using __c = ::UnityEngine::UIElements::__UxmlUnsignedLongAttributeDescription____c;

/// @brief Method ConvertValueToUlong, addr 0x4a0d09c, size 0x3c, virtual false, abstract: false, final false
static inline uint64_t ConvertValueToUlong(::StringW  v, uint64_t  defaultValue) ;

/// @brief Method GetValueFromBag, addr 0x4a0cf50, size 0x14c, virtual true, abstract: false, final false
inline uint64_t GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

static inline ::UnityEngine::UIElements::UxmlUnsignedLongAttributeDescription* New_ctor() ;

/// @brief Method .ctor, addr 0x4a0ceb8, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UxmlUnsignedLongAttributeDescription() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UxmlUnsignedLongAttributeDescription", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UxmlUnsignedLongAttributeDescription(UxmlUnsignedLongAttributeDescription && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UxmlUnsignedLongAttributeDescription", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UxmlUnsignedLongAttributeDescription(UxmlUnsignedLongAttributeDescription const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlUnsignedLongAttributeDescription, 0x48>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlUnsignedLongAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlUnsignedLongAttributeDescription*, "UnityEngine.UIElements", "UxmlUnsignedLongAttributeDescription");
NEED_NO_BOX(::UnityEngine::UIElements::__UxmlUnsignedLongAttributeDescription____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__UxmlUnsignedLongAttributeDescription____c*, "UnityEngine.UIElements", "UxmlUnsignedLongAttributeDescription/<>c");
