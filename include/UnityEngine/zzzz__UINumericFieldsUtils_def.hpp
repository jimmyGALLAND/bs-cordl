#pragma once
// IWYU pragma private; include "UnityEngine/UINumericFieldsUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UINumericFieldsUtils)
namespace UnityEngine {
class __ExpressionEvaluator__Expression;
}
// Forward declare root types
namespace UnityEngine {
class UINumericFieldsUtils;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UINumericFieldsUtils);
// Type: UnityEngine::UINumericFieldsUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::UINumericFieldsUtils*
class CORDL_TYPE UINumericFieldsUtils : public ::System::Object {
public:
// Declarations
/// @brief Field k_AllowedCharactersForFloat, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_k_AllowedCharactersForFloat, put=setStaticF_k_AllowedCharactersForFloat)) ::StringW  k_AllowedCharactersForFloat;

/// @brief Field k_AllowedCharactersForInt, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_k_AllowedCharactersForInt, put=setStaticF_k_AllowedCharactersForInt)) ::StringW  k_AllowedCharactersForInt;

/// @brief Field k_DoubleFieldFormatString, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_k_DoubleFieldFormatString, put=setStaticF_k_DoubleFieldFormatString)) ::StringW  k_DoubleFieldFormatString;

/// @brief Field k_FloatFieldFormatString, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_k_FloatFieldFormatString, put=setStaticF_k_FloatFieldFormatString)) ::StringW  k_FloatFieldFormatString;

/// @brief Field k_IntFieldFormatString, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_k_IntFieldFormatString, put=setStaticF_k_IntFieldFormatString)) ::StringW  k_IntFieldFormatString;

/// @brief Method TryConvertStringToDouble, addr 0x4821f88, size 0x108, virtual false, abstract: false, final false
static inline bool TryConvertStringToDouble(::StringW  str, ::StringW  initialValueAsString, ByRef<double_t>  value) ;

/// @brief Method TryConvertStringToDouble, addr 0x4821df8, size 0x190, virtual false, abstract: false, final false
static inline bool TryConvertStringToDouble(::StringW  str, ByRef<double_t>  value, ByRef<::UnityEngine::__ExpressionEvaluator__Expression*>  expr) ;

/// @brief Method TryConvertStringToFloat, addr 0x4822090, size 0xf0, virtual false, abstract: false, final false
static inline bool TryConvertStringToFloat(::StringW  str, ::StringW  initialValueAsString, ByRef<float_t>  value) ;

/// @brief Method TryConvertStringToInt, addr 0x4822490, size 0xa4, virtual false, abstract: false, final false
static inline bool TryConvertStringToInt(::StringW  str, ::StringW  initialValueAsString, ByRef<int32_t>  value) ;

/// @brief Method TryConvertStringToLong, addr 0x4822204, size 0x104, virtual false, abstract: false, final false
static inline bool TryConvertStringToLong(::StringW  str, ::StringW  initialValueAsString, ByRef<int64_t>  value) ;

/// @brief Method TryConvertStringToLong, addr 0x4822180, size 0x84, virtual false, abstract: false, final false
static inline bool TryConvertStringToLong(::StringW  str, ByRef<int64_t>  value, ByRef<::UnityEngine::__ExpressionEvaluator__Expression*>  expr) ;

/// @brief Method TryConvertStringToUInt, addr 0x4822534, size 0x9c, virtual false, abstract: false, final false
static inline bool TryConvertStringToUInt(::StringW  str, ::StringW  initialValueAsString, ByRef<uint32_t>  value) ;

/// @brief Method TryConvertStringToULong, addr 0x482238c, size 0x104, virtual false, abstract: false, final false
static inline bool TryConvertStringToULong(::StringW  str, ::StringW  initialValueAsString, ByRef<uint64_t>  value) ;

/// @brief Method TryConvertStringToULong, addr 0x4822308, size 0x84, virtual false, abstract: false, final false
static inline bool TryConvertStringToULong(::StringW  str, ByRef<uint64_t>  value, ByRef<::UnityEngine::__ExpressionEvaluator__Expression*>  expr) ;

static inline ::StringW getStaticF_k_AllowedCharactersForFloat() ;

static inline ::StringW getStaticF_k_AllowedCharactersForInt() ;

static inline ::StringW getStaticF_k_DoubleFieldFormatString() ;

static inline ::StringW getStaticF_k_FloatFieldFormatString() ;

static inline ::StringW getStaticF_k_IntFieldFormatString() ;

static inline void setStaticF_k_AllowedCharactersForFloat(::StringW  value) ;

static inline void setStaticF_k_AllowedCharactersForInt(::StringW  value) ;

static inline void setStaticF_k_DoubleFieldFormatString(::StringW  value) ;

static inline void setStaticF_k_FloatFieldFormatString(::StringW  value) ;

static inline void setStaticF_k_IntFieldFormatString(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UINumericFieldsUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UINumericFieldsUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UINumericFieldsUtils(UINumericFieldsUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UINumericFieldsUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UINumericFieldsUtils(UINumericFieldsUtils const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UINumericFieldsUtils, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::UINumericFieldsUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UINumericFieldsUtils*, "UnityEngine", "UINumericFieldsUtils");
