#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/AbstractFpFieldElement.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_impl.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpFieldElement_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractFpFieldElement._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::AbstractFpFieldElement::*)()>(&::Org::BouncyCastle::Math::EC::AbstractFpFieldElement::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24067a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractFpFieldElement*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Math::EC::AbstractFpFieldElement* Org::BouncyCastle::Math::EC::AbstractFpFieldElement::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::EC::AbstractFpFieldElement*>());
}
inline void Org::BouncyCastle::Math::EC::AbstractFpFieldElement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractFpFieldElement*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::AbstractFpFieldElement::AbstractFpFieldElement()   {
}
