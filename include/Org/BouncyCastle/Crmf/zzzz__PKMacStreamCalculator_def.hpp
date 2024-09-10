#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crmf/PKMacStreamCalculator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PKMacStreamCalculator)
namespace Org::BouncyCastle::Crypto::IO {
class MacSink;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCalculator;
}
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class PKMacStreamCalculator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crmf::PKMacStreamCalculator);
// Type: Org.BouncyCastle.Crmf::PKMacStreamCalculator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crmf::PKMacStreamCalculator*
class CORDL_TYPE PKMacStreamCalculator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Stream)) ::System::IO::Stream*  Stream;

/// @brief Field _stream, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__stream, put=__cordl_internal_set__stream)) ::Org::BouncyCastle::Crypto::IO::MacSink*  _stream;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IStreamCalculator"
constexpr operator  ::Org::BouncyCastle::Crypto::IStreamCalculator*() noexcept;

/// @brief Method GetResult, addr 0x2639b9c, size 0x80, virtual true, abstract: false, final true
inline ::System::Object* GetResult() ;

static inline ::Org::BouncyCastle::Crmf::PKMacStreamCalculator* New_ctor(::Org::BouncyCastle::Crypto::IMac*  mac) ;

constexpr ::Org::BouncyCastle::Crypto::IO::MacSink*& __cordl_internal_get__stream() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IO::MacSink*> const& __cordl_internal_get__stream() const;

constexpr void __cordl_internal_set__stream(::Org::BouncyCastle::Crypto::IO::MacSink*  value) ;

/// @brief Method .ctor, addr 0x2639b20, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::IMac*  mac) ;

/// @brief Method get_Stream, addr 0x2639b94, size 0x8, virtual true, abstract: false, final true
inline ::System::IO::Stream* get_Stream() ;

/// @brief Convert to "::Org::BouncyCastle::Crypto::IStreamCalculator"
constexpr ::Org::BouncyCastle::Crypto::IStreamCalculator* i___Org__BouncyCastle__Crypto__IStreamCalculator() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PKMacStreamCalculator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PKMacStreamCalculator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PKMacStreamCalculator(PKMacStreamCalculator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PKMacStreamCalculator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PKMacStreamCalculator(PKMacStreamCalculator const& ) = delete;

/// @brief Field _stream, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::IO::MacSink*  ____stream;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crmf::PKMacStreamCalculator, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crmf::PKMacStreamCalculator, ____stream) == 0x10, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Crmf::PKMacStreamCalculator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::PKMacStreamCalculator*, "Org.BouncyCastle.Crmf", "PKMacStreamCalculator");
