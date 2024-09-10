#pragma once
// IWYU pragma private; include "System/Data/Common/SqlBinaryStorage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SqlBinaryStorage)
namespace System::Collections {
class BitArray;
}
namespace System::Data::SqlTypes {
struct SqlBinary;
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
class SqlBinaryStorage;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Common::SqlBinaryStorage);
// Type: System.Data.Common::SqlBinaryStorage
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data::Common {
// Is value type: false
// CS Name: ::System.Data.Common::SqlBinaryStorage*
class CORDL_TYPE SqlBinaryStorage : public ::System::Data::Common::DataStorage {
public:
// Declarations
/// @brief Field _values, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__values, put=__cordl_internal_set__values)) ::ArrayW<::System::Data::SqlTypes::SqlBinary,::Array<::System::Data::SqlTypes::SqlBinary>*>  _values;

/// @brief Method Aggregate, addr 0x41608e0, size 0x23c, virtual true, abstract: false, final false
inline ::System::Object* Aggregate(::ArrayW<int32_t,::Array<int32_t>*>  records, ::System::Data::AggregateType  kind) ;

/// @brief Method Compare, addr 0x4160b1c, size 0xa0, virtual true, abstract: false, final false
inline int32_t Compare(int32_t  recordNo1, int32_t  recordNo2) ;

/// @brief Method CompareValueTo, addr 0x4160bbc, size 0xbc, virtual true, abstract: false, final false
inline int32_t CompareValueTo(int32_t  recordNo, ::System::Object*  value) ;

/// @brief Method ConvertObjectToXml, addr 0x4161208, size 0x2a4, virtual true, abstract: false, final false
inline ::StringW ConvertObjectToXml(::System::Object*  value) ;

/// @brief Method ConvertValue, addr 0x4160c78, size 0x74, virtual true, abstract: false, final false
inline ::System::Object* ConvertValue(::System::Object*  value) ;

/// @brief Method ConvertXmlToObject, addr 0x4160f20, size 0x2e8, virtual true, abstract: false, final false
inline ::System::Object* ConvertXmlToObject(::StringW  s) ;

/// @brief Method Copy, addr 0x4160cec, size 0x3c, virtual true, abstract: false, final false
inline void Copy(int32_t  recordNo1, int32_t  recordNo2) ;

/// @brief Method CopyValue, addr 0x41614f4, size 0x100, virtual true, abstract: false, final false
inline void CopyValue(int32_t  record, ::System::Object*  store, ::System::Collections::BitArray*  nullbits, int32_t  storeIndex) ;

/// @brief Method Get, addr 0x4160d28, size 0x80, virtual true, abstract: false, final false
inline ::System::Object* Get(int32_t  record) ;

/// @brief Method GetEmptyStorage, addr 0x41614ac, size 0x48, virtual true, abstract: false, final false
inline ::System::Object* GetEmptyStorage(int32_t  recordCount) ;

/// @brief Method IsNull, addr 0x4160da8, size 0x7c, virtual true, abstract: false, final false
inline bool IsNull(int32_t  record) ;

static inline ::System::Data::Common::SqlBinaryStorage* New_ctor(::System::Data::DataColumn*  column) ;

/// @brief Method Set, addr 0x4160e24, size 0x44, virtual true, abstract: false, final false
inline void Set(int32_t  record, ::System::Object*  value) ;

/// @brief Method SetCapacity, addr 0x4160e68, size 0xb8, virtual true, abstract: false, final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method SetStorage, addr 0x41615f4, size 0x98, virtual true, abstract: false, final false
inline void SetStorage(::System::Object*  store, ::System::Collections::BitArray*  nullbits) ;

constexpr ::ArrayW<::System::Data::SqlTypes::SqlBinary,::Array<::System::Data::SqlTypes::SqlBinary>*> const& __cordl_internal_get__values() const;

constexpr ::ArrayW<::System::Data::SqlTypes::SqlBinary,::Array<::System::Data::SqlTypes::SqlBinary>*>& __cordl_internal_get__values() ;

constexpr void __cordl_internal_set__values(::ArrayW<::System::Data::SqlTypes::SqlBinary,::Array<::System::Data::SqlTypes::SqlBinary>*>  value) ;

/// @brief Method .ctor, addr 0x414f468, size 0x140, virtual false, abstract: false, final false
inline void _ctor(::System::Data::DataColumn*  column) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SqlBinaryStorage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SqlBinaryStorage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SqlBinaryStorage(SqlBinaryStorage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SqlBinaryStorage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SqlBinaryStorage(SqlBinaryStorage const& ) = delete;

/// @brief Field _values, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::System::Data::SqlTypes::SqlBinary,::Array<::System::Data::SqlTypes::SqlBinary>*>  ____values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::Common::SqlBinaryStorage, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Data::Common::SqlBinaryStorage, ____values) == 0x50, "Offset mismatch!");

} // namespace end def System::Data::Common
NEED_NO_BOX(::System::Data::Common::SqlBinaryStorage);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::SqlBinaryStorage*, "System.Data.Common", "SqlBinaryStorage");
