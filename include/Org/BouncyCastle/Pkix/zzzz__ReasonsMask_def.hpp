#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReasonsMask)
namespace Org::BouncyCastle::Asn1::X509 {
class ReasonFlags;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class ReasonsMask;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::ReasonsMask);
// Type: Org.BouncyCastle.Pkix::ReasonsMask
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1729))
// CS Name: ::Org.BouncyCastle.Pkix::ReasonsMask*
class CORDL_TYPE ReasonsMask : public ::System::Object {
public:
  // Declarations
  /// @brief Field _reasons, offset 0x10, size 0x4
  __declspec(property(get = __get__reasons, put = __set__reasons)) int32_t _reasons;

  /// @brief Field AllReasons, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllReasons, put = setStaticF_AllReasons))::Org::BouncyCastle::Pkix::ReasonsMask* AllReasons;

  __declspec(property(get = get_IsAllReasons)) bool IsAllReasons;

  __declspec(property(get = get_Reasons))::Org::BouncyCastle::Asn1::X509::ReasonFlags* Reasons;

  constexpr int32_t& __get__reasons();

  constexpr int32_t const& __get__reasons() const;

  constexpr void __set__reasons(int32_t value);

  static inline void setStaticF_AllReasons(::Org::BouncyCastle::Pkix::ReasonsMask* value);

  static inline ::Org::BouncyCastle::Pkix::ReasonsMask* getStaticF_AllReasons();

  static inline ::Org::BouncyCastle::Pkix::ReasonsMask* New_ctor(int32_t reasons);

  /// @brief Method .ctor addr 0x1113350 size 0x28 virtual false final false
  inline void _ctor(int32_t reasons);

  static inline ::Org::BouncyCastle::Pkix::ReasonsMask* New_ctor();

  /// @brief Method .ctor addr 0x1113378 size 0x1c virtual false final false
  inline void _ctor();

  /// @brief Method AddReasons addr 0x1113394 size 0x48 virtual false final false
  inline void AddReasons(::Org::BouncyCastle::Pkix::ReasonsMask* mask);

  /// @brief Method get_IsAllReasons addr 0x1113444 size 0x74 virtual false final false
  inline bool get_IsAllReasons();

  /// @brief Method Intersect addr 0x11134b8 size 0xc8 virtual false final false
  inline ::Org::BouncyCastle::Pkix::ReasonsMask* Intersect(::Org::BouncyCastle::Pkix::ReasonsMask* mask);

  /// @brief Method HasNewReasons addr 0x1113580 size 0x54 virtual false final false
  inline bool HasNewReasons(::Org::BouncyCastle::Pkix::ReasonsMask* mask);

  /// @brief Method get_Reasons addr 0x11133dc size 0x68 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::ReasonFlags* get_Reasons();

  // Ctor Parameters [CppParam { name: "", ty: "ReasonsMask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReasonsMask(ReasonsMask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReasonsMask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReasonsMask(ReasonsMask const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReasonsMask();

public:
  /// @brief Field _reasons, offset: 0x10, size: 0x4, def value: None
  int32_t ____reasons;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::ReasonsMask, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::ReasonsMask);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::ReasonsMask*, "Org.BouncyCastle.Pkix", "ReasonsMask");
