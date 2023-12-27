#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Asn1EncodableVector)
namespace System::Collections {
class IEnumerator;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Asn1EncodableVector);
// Type: Org.BouncyCastle.Asn1::Asn1EncodableVector
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 29, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(449))
// CS Name: ::Org.BouncyCastle.Asn1::Asn1EncodableVector*
class CORDL_TYPE Asn1EncodableVector : public ::System::Object {
public:
  // Declarations
  /// @brief Field elements, offset 0x10, size 0x8
  __declspec(property(get = __get_elements, put = __set_elements))::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> elements;

  /// @brief Field elementCount, offset 0x18, size 0x4
  __declspec(property(get = __get_elementCount, put = __set_elementCount)) int32_t elementCount;

  /// @brief Field copyOnWrite, offset 0x1c, size 0x1
  __declspec(property(get = __get_copyOnWrite, put = __set_copyOnWrite)) bool copyOnWrite;

  /// @brief Field EmptyElements, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EmptyElements,
                             put = setStaticF_EmptyElements))::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> EmptyElements;

  __declspec(property(get = get_Item))::Org::BouncyCastle::Asn1::Asn1Encodable* Item[];

  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*>& __get_elements();

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> const& __get_elements() const;

  constexpr void __set_elements(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> value);

  constexpr int32_t& __get_elementCount();

  constexpr int32_t const& __get_elementCount() const;

  constexpr void __set_elementCount(int32_t value);

  constexpr bool& __get_copyOnWrite();

  constexpr bool const& __get_copyOnWrite() const;

  constexpr void __set_copyOnWrite(bool value);

  static inline void setStaticF_EmptyElements(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> value);

  static inline ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> getStaticF_EmptyElements();

  /// @brief Method FromEnumerable addr 0x11b329c size 0x35c virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Asn1EncodableVector* FromEnumerable(::System::Collections::IEnumerable* e);

  static inline ::Org::BouncyCastle::Asn1::Asn1EncodableVector* New_ctor();

  /// @brief Method .ctor addr 0x11b0cd4 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::Asn1EncodableVector* New_ctor(int32_t initialCapacity);

  /// @brief Method .ctor addr 0x11b35f8 size 0x10c virtual false final false
  inline void _ctor(int32_t initialCapacity);

  static inline ::Org::BouncyCastle::Asn1::Asn1EncodableVector* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> v);

  /// @brief Method .ctor addr 0x11aad48 size 0x2c virtual false final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> v);

  /// @brief Method Add addr 0x11aae4c size 0xf4 virtual false final false
  inline void Add(::Org::BouncyCastle::Asn1::Asn1Encodable* element);

  /// @brief Method Add addr 0x11b23b8 size 0x6c virtual false final false
  inline void Add(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> objs);

  /// @brief Method AddOptional addr 0x11b37d0 size 0x6c virtual false final false
  inline void AddOptional(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> objs);

  /// @brief Method AddOptionalTagged addr 0x11aad74 size 0x94 virtual false final false
  inline void AddOptionalTagged(bool isExplicit, int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method AddAll addr 0x11b3844 size 0x16c virtual false final false
  inline void AddAll(::Org::BouncyCastle::Asn1::Asn1EncodableVector* other);

  /// @brief Method get_Item addr 0x11b39b0 size 0xf0 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(int32_t index);

  /// @brief Method get_Count addr 0x11b3aa0 size 0x8 virtual false final false
  inline int32_t get_Count();

  /// @brief Method GetEnumerator addr 0x11b3aa8 size 0x1c virtual true final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method CopyElements addr 0x11b3ac4 size 0xac virtual false final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> CopyElements();

  /// @brief Method TakeElements addr 0x11b3b70 size 0xd0 virtual false final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> TakeElements();

  /// @brief Method Reallocate addr 0x11b3704 size 0xcc virtual false final false
  inline void Reallocate(int32_t minCapacity);

  /// @brief Method CloneElements addr 0x11b3c40 size 0xb4 virtual false final false
  static inline ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*>
  CloneElements(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> elements);

  // Ctor Parameters [CppParam { name: "", ty: "Asn1EncodableVector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1EncodableVector(Asn1EncodableVector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1EncodableVector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1EncodableVector(Asn1EncodableVector const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1EncodableVector();

public:
  /// @brief Field elements, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> ___elements;

  /// @brief Field elementCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___elementCount;

  /// @brief Field copyOnWrite, offset: 0x1c, size: 0x1, def value: None
  bool ___copyOnWrite;

  /// @brief Field DefaultCapacity offset 0xffffffff size 0x4
  static constexpr int32_t DefaultCapacity{ static_cast<int32_t>(0xa) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Asn1EncodableVector, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1EncodableVector);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1EncodableVector*, "Org.BouncyCastle.Asn1", "Asn1EncodableVector");
