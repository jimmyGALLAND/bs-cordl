#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/BezierCurves/BaseBezierCurve_1.hpp"
#include "BGLib/UnityExtension/BezierCurves/zzzz__BaseBezierCurve_impl.hpp"
#include "BGLib/UnityExtension/BezierCurves/zzzz__BaseBezierCurve_1_def.hpp"
template<typename T>
constexpr T& BGLib::UnityExtension::BezierCurves::BaseBezierCurve_1<T>::__cordl_internal_get__bezierCurveData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bezierCurveData;
}
template<typename T>
constexpr T const& BGLib::UnityExtension::BezierCurves::BaseBezierCurve_1<T>::__cordl_internal_get__bezierCurveData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bezierCurveData;
}
template<typename T>
constexpr void BGLib::UnityExtension::BezierCurves::BaseBezierCurve_1<T>::__cordl_internal_set__bezierCurveData(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bezierCurveData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template<typename T>
inline ::BGLib::UnityExtension::BezierCurves::BaseBezierCurve_1<T>* BGLib::UnityExtension::BezierCurves::BaseBezierCurve_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::BezierCurves::BaseBezierCurve_1<T>*>());
}
template<typename T>
inline void BGLib::UnityExtension::BezierCurves::BaseBezierCurve_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::BezierCurves::BaseBezierCurve_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template<typename T>
constexpr ::BGLib::UnityExtension::BezierCurves::BaseBezierCurve_1<T>::BaseBezierCurve_1()   {
}
