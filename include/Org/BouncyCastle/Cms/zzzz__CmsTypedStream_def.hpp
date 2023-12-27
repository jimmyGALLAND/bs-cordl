#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__FilterStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsTypedStream)
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Cms {
class __CmsTypedStream__FullReaderStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsTypedStream;
}
namespace Org::BouncyCastle::Cms {
class __CmsTypedStream__FullReaderStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsTypedStream);
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream);
// Type: ::FullReaderStream
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(452))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(662))
// CS Name: ::CmsTypedStream::FullReaderStream*
class CORDL_TYPE __CmsTypedStream__FullReaderStream : public ::Org::BouncyCastle::Utilities::IO::FilterStream {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream* New_ctor(::System::IO::Stream* input);

  /// @brief Method .ctor addr 0x11ffff8 size 0x8 virtual false final false
  inline void _ctor(::System::IO::Stream* input);

  /// @brief Method Read addr 0x1200010 size 0xc virtual true final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  // Ctor Parameters [CppParam { name: "", ty: "__CmsTypedStream__FullReaderStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CmsTypedStream__FullReaderStream(__CmsTypedStream__FullReaderStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CmsTypedStream__FullReaderStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CmsTypedStream__FullReaderStream(__CmsTypedStream__FullReaderStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CmsTypedStream__FullReaderStream();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
// Type: Org.BouncyCastle.Cms::CmsTypedStream
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(663))
// CS Name: ::Org.BouncyCastle.Cms::CmsTypedStream*
class CORDL_TYPE CmsTypedStream : public ::System::Object {
public:
  // Declarations
  using FullReaderStream = ::Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream;

  /// @brief Field _oid, offset 0x10, size 0x8
  __declspec(property(get = __get__oid, put = __set__oid))::StringW _oid;

  /// @brief Field _in, offset 0x18, size 0x8
  __declspec(property(get = __get__in, put = __set__in))::System::IO::Stream* _in;

  __declspec(property(get = get_ContentType))::StringW ContentType;

  __declspec(property(get = get_ContentStream))::System::IO::Stream* ContentStream;

  constexpr ::StringW& __get__oid();

  constexpr ::StringW const& __get__oid() const;

  constexpr void __set__oid(::StringW value);

  constexpr ::System::IO::Stream*& __get__in();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get__in() const;

  constexpr void __set__in(::System::IO::Stream* value);

  static inline ::Org::BouncyCastle::Cms::CmsTypedStream* New_ctor(::System::IO::Stream* inStream);

  /// @brief Method .ctor addr 0x11ffeb4 size 0x80 virtual false final false
  inline void _ctor(::System::IO::Stream* inStream);

  static inline ::Org::BouncyCastle::Cms::CmsTypedStream* New_ctor(::StringW oid, ::System::IO::Stream* inStream);

  /// @brief Method .ctor addr 0x11ee154 size 0x8 virtual false final false
  inline void _ctor(::StringW oid, ::System::IO::Stream* inStream);

  static inline ::Org::BouncyCastle::Cms::CmsTypedStream* New_ctor(::StringW oid, ::System::IO::Stream* inStream, int32_t bufSize);

  /// @brief Method .ctor addr 0x11fff34 size 0xc4 virtual false final false
  inline void _ctor(::StringW oid, ::System::IO::Stream* inStream, int32_t bufSize);

  /// @brief Method get_ContentType addr 0x1200000 size 0x8 virtual false final false
  inline ::StringW get_ContentType();

  /// @brief Method get_ContentStream addr 0x1200008 size 0x8 virtual false final false
  inline ::System::IO::Stream* get_ContentStream();

  /// @brief Method Drain addr 0x11ee15c size 0x68 virtual false final false
  inline void Drain();

  // Ctor Parameters [CppParam { name: "", ty: "CmsTypedStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsTypedStream(CmsTypedStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsTypedStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsTypedStream(CmsTypedStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsTypedStream();

public:
  /// @brief Field _oid, offset: 0x10, size: 0x8, def value: None
  ::StringW ____oid;

  /// @brief Field _in, offset: 0x18, size: 0x8, def value: None
  ::System::IO::Stream* ____in;

  /// @brief Field BufferSize offset 0xffffffff size 0x4
  static constexpr int32_t BufferSize{ static_cast<int32_t>(0x8000) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsTypedStream, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsTypedStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsTypedStream*, "Org.BouncyCastle.Cms", "CmsTypedStream");
NEED_NO_BOX(::Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream*, "Org.BouncyCastle.Cms", "CmsTypedStream/FullReaderStream");
