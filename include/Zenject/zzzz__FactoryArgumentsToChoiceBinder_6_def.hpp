#pragma once
// IWYU pragma private; include "Zenject/FactoryArgumentsToChoiceBinder_6.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__FactoryToChoiceBinder_6_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(FactoryArgumentsToChoiceBinder_6)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class Object;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TContract>
class FactoryToChoiceBinder_6;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TContract>
class FactoryArgumentsToChoiceBinder_6;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactoryArgumentsToChoiceBinder_6);
// Type: Zenject::FactoryArgumentsToChoiceBinder`6
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TContract>
// Is value type: false
// CS Name: ::Zenject::FactoryArgumentsToChoiceBinder`6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract>*
class CORDL_TYPE FactoryArgumentsToChoiceBinder_6 : public ::Zenject::FactoryToChoiceBinder_6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> {
public:
// Declarations
static inline ::Zenject::FactoryArgumentsToChoiceBinder_6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract>* New_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method WithFactoryArguments, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Zenject::FactoryToChoiceBinder_6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract>* WithFactoryArguments(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method WithFactoryArguments, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Zenject::FactoryToChoiceBinder_6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract>* WithFactoryArguments(T  param) ;

/// @brief Method WithFactoryArguments, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TFactoryParam1,typename TFactoryParam2>
inline ::Zenject::FactoryToChoiceBinder_6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract>* WithFactoryArguments(TFactoryParam1  param1, TFactoryParam2  param2) ;

/// @brief Method WithFactoryArguments, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3>
inline ::Zenject::FactoryToChoiceBinder_6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract>* WithFactoryArguments(TFactoryParam1  param1, TFactoryParam2  param2, TFactoryParam3  param3) ;

/// @brief Method WithFactoryArguments, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3,typename TFactoryParam4>
inline ::Zenject::FactoryToChoiceBinder_6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract>* WithFactoryArguments(TFactoryParam1  param1, TFactoryParam2  param2, TFactoryParam3  param3, TFactoryParam4  param4) ;

/// @brief Method WithFactoryArguments, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3,typename TFactoryParam4,typename TFactoryParam5>
inline ::Zenject::FactoryToChoiceBinder_6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract>* WithFactoryArguments(TFactoryParam1  param1, TFactoryParam2  param2, TFactoryParam3  param3, TFactoryParam4  param4, TFactoryParam5  param5) ;

/// @brief Method WithFactoryArguments, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3,typename TFactoryParam4,typename TFactoryParam5,typename TFactoryParam6>
inline ::Zenject::FactoryToChoiceBinder_6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract>* WithFactoryArguments(TFactoryParam1  param1, TFactoryParam2  param2, TFactoryParam3  param3, TFactoryParam4  param4, TFactoryParam5  param5, TFactoryParam6  param6) ;

/// @brief Method WithFactoryArgumentsExplicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Zenject::FactoryToChoiceBinder_6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract>* WithFactoryArgumentsExplicit(::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*  extraArgs) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FactoryArgumentsToChoiceBinder_6() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FactoryArgumentsToChoiceBinder_6", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FactoryArgumentsToChoiceBinder_6(FactoryArgumentsToChoiceBinder_6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FactoryArgumentsToChoiceBinder_6", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FactoryArgumentsToChoiceBinder_6(FactoryArgumentsToChoiceBinder_6 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryArgumentsToChoiceBinder_6, "Zenject", "FactoryArgumentsToChoiceBinder`6");
