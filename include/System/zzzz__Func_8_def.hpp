#pragma once
// IWYU pragma private; include "System/Func_8.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Func_8)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename TResult>
class Func_8;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Func_8);
// Type: System::Func`8
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename TResult>
// Is value type: false
// CS Name: ::System::Func`8<T1,T2,T3,T4,T5,T6,T7,TResult>*
class CORDL_TYPE Func_8 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TResult Invoke(T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7) ;

static inline ::System::Func_8<T1,T2,T3,T4,T5,T6,T7,TResult>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Func_8() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Func_8", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_8(Func_8 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_8", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_8(Func_8 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Func_8, "System", "Func`8");
