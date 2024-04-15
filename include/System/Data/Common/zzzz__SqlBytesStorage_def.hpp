#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SqlBytesStorage)
namespace System::Collections {
class BitArray;
}
namespace System::Data::SqlTypes {
class SqlBytes;
}
namespace System::Data {
struct AggregateType;
}
namespace System::Data {
class DataColumn;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data::Common {
class SqlBytesStorage;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Common::SqlBytesStorage);
// Type: System.Data.Common::SqlBytesStorage
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data::Common {
// Is value type: false
// CS Name: ::System.Data.Common::SqlBytesStorage*
class CORDL_TYPE SqlBytesStorage : public ::System::Data::Common::DataStorage {
public:
  // Declarations
  /// @brief Field _values, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values))::ArrayW<::System::Data::SqlTypes::SqlBytes*, ::Array<::System::Data::SqlTypes::SqlBytes*>*> _values;

  /// @brief Method Aggregate, addr 0x2c4bbc8, size 0x214, virtual true, abstract: false, final false
  inline ::System::Object* Aggregate(::ArrayW<int32_t, ::Array<int32_t>*> records, ::System::Data::AggregateType kind);

  /// @brief Method Compare, addr 0x2c4bddc, size 0x8, virtual true, abstract: false, final false
  inline int32_t Compare(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CompareValueTo, addr 0x2c4bde4, size 0x8, virtual true, abstract: false, final false
  inline int32_t CompareValueTo(int32_t recordNo, ::System::Object* value);

  /// @brief Method ConvertObjectToXml, addr 0x2c4c3c0, size 0x2a0, virtual true, abstract: false, final false
  inline ::StringW ConvertObjectToXml(::System::Object* value);

  /// @brief Method ConvertXmlToObject, addr 0x2c4c0b8, size 0x308, virtual true, abstract: false, final false
  inline ::System::Object* ConvertXmlToObject(::StringW s);

  /// @brief Method Copy, addr 0x2c4bdec, size 0x74, virtual true, abstract: false, final false
  inline void Copy(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CopyValue, addr 0x2c4c6a8, size 0x138, virtual true, abstract: false, final false
  inline void CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex);

  /// @brief Method Get, addr 0x2c4be60, size 0x30, virtual true, abstract: false, final false
  inline ::System::Object* Get(int32_t record);

  /// @brief Method GetEmptyStorage, addr 0x2c4c660, size 0x48, virtual true, abstract: false, final false
  inline ::System::Object* GetEmptyStorage(int32_t recordCount);

  /// @brief Method IsNull, addr 0x2c4be90, size 0x38, virtual true, abstract: false, final false
  inline bool IsNull(int32_t record);

  static inline ::System::Data::Common::SqlBytesStorage* New_ctor(::System::Data::DataColumn* column);

  /// @brief Method Set, addr 0x2c4bec8, size 0x138, virtual true, abstract: false, final false
  inline void Set(int32_t record, ::System::Object* value);

  /// @brief Method SetCapacity, addr 0x2c4c000, size 0xb8, virtual true, abstract: false, final false
  inline void SetCapacity(int32_t capacity);

  /// @brief Method SetStorage, addr 0x2c4c7e0, size 0x98, virtual true, abstract: false, final false
  inline void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits);

  constexpr ::ArrayW<::System::Data::SqlTypes::SqlBytes*, ::Array<::System::Data::SqlTypes::SqlBytes*>*> const& __cordl_internal_get__values() const;

  constexpr ::ArrayW<::System::Data::SqlTypes::SqlBytes*, ::Array<::System::Data::SqlTypes::SqlBytes*>*>& __cordl_internal_get__values();

  constexpr void __cordl_internal_set__values(::ArrayW<::System::Data::SqlTypes::SqlBytes*, ::Array<::System::Data::SqlTypes::SqlBytes*>*> value);

  /// @brief Method .ctor, addr 0x2c35568, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataColumn* column);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SqlBytesStorage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SqlBytesStorage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SqlBytesStorage(SqlBytesStorage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SqlBytesStorage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SqlBytesStorage(SqlBytesStorage const&) = delete;

  /// @brief Field _values, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::Data::SqlTypes::SqlBytes*, ::Array<::System::Data::SqlTypes::SqlBytes*>*> ____values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::Common::SqlBytesStorage, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Data::Common::SqlBytesStorage, ____values) == 0x50, "Offset mismatch!");

} // namespace System::Data::Common
NEED_NO_BOX(::System::Data::Common::SqlBytesStorage);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::SqlBytesStorage*, "System.Data.Common", "SqlBytesStorage");
