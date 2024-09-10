#pragma once
// IWYU pragma private; include "System/Data/Common/SqlByteStorage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SqlByteStorage)
namespace System::Collections {
class BitArray;
}
namespace System::Data::SqlTypes {
struct SqlByte;
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
class SqlByteStorage;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Common::SqlByteStorage);
// Type: System.Data.Common::SqlByteStorage
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data::Common {
// Is value type: false
// CS Name: ::System.Data.Common::SqlByteStorage*
class CORDL_TYPE SqlByteStorage : public ::System::Data::Common::DataStorage {
public:
// Declarations
/// @brief Field _values, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__values, put=__cordl_internal_set__values)) ::ArrayW<::System::Data::SqlTypes::SqlByte,::Array<::System::Data::SqlTypes::SqlByte>*>  _values;

/// @brief Method Aggregate, addr 0x416168c, size 0xe48, virtual true, abstract: false, final false
inline ::System::Object* Aggregate(::ArrayW<int32_t,::Array<int32_t>*>  records, ::System::Data::AggregateType  kind) ;

/// @brief Method Compare, addr 0x41624d4, size 0xa0, virtual true, abstract: false, final false
inline int32_t Compare(int32_t  recordNo1, int32_t  recordNo2) ;

/// @brief Method CompareValueTo, addr 0x4162574, size 0xbc, virtual true, abstract: false, final false
inline int32_t CompareValueTo(int32_t  recordNo, ::System::Object*  value) ;

/// @brief Method ConvertObjectToXml, addr 0x4162bc0, size 0x2a4, virtual true, abstract: false, final false
inline ::StringW ConvertObjectToXml(::System::Object*  value) ;

/// @brief Method ConvertValue, addr 0x4162630, size 0x74, virtual true, abstract: false, final false
inline ::System::Object* ConvertValue(::System::Object*  value) ;

/// @brief Method ConvertXmlToObject, addr 0x41628d8, size 0x2e8, virtual true, abstract: false, final false
inline ::System::Object* ConvertXmlToObject(::StringW  s) ;

/// @brief Method Copy, addr 0x41626a4, size 0x3c, virtual true, abstract: false, final false
inline void Copy(int32_t  recordNo1, int32_t  recordNo2) ;

/// @brief Method CopyValue, addr 0x4162eac, size 0x100, virtual true, abstract: false, final false
inline void CopyValue(int32_t  record, ::System::Object*  store, ::System::Collections::BitArray*  nullbits, int32_t  storeIndex) ;

/// @brief Method Get, addr 0x41626e0, size 0x80, virtual true, abstract: false, final false
inline ::System::Object* Get(int32_t  record) ;

/// @brief Method GetEmptyStorage, addr 0x4162e64, size 0x48, virtual true, abstract: false, final false
inline ::System::Object* GetEmptyStorage(int32_t  recordCount) ;

/// @brief Method IsNull, addr 0x4162760, size 0x7c, virtual true, abstract: false, final false
inline bool IsNull(int32_t  record) ;

static inline ::System::Data::Common::SqlByteStorage* New_ctor(::System::Data::DataColumn*  column) ;

/// @brief Method Set, addr 0x41627dc, size 0x44, virtual true, abstract: false, final false
inline void Set(int32_t  record, ::System::Object*  value) ;

/// @brief Method SetCapacity, addr 0x4162820, size 0xb8, virtual true, abstract: false, final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method SetStorage, addr 0x4162fac, size 0x98, virtual true, abstract: false, final false
inline void SetStorage(::System::Object*  store, ::System::Collections::BitArray*  nullbits) ;

constexpr ::ArrayW<::System::Data::SqlTypes::SqlByte,::Array<::System::Data::SqlTypes::SqlByte>*> const& __cordl_internal_get__values() const;

constexpr ::ArrayW<::System::Data::SqlTypes::SqlByte,::Array<::System::Data::SqlTypes::SqlByte>*>& __cordl_internal_get__values() ;

constexpr void __cordl_internal_set__values(::ArrayW<::System::Data::SqlTypes::SqlByte,::Array<::System::Data::SqlTypes::SqlByte>*>  value) ;

/// @brief Method .ctor, addr 0x414f5a8, size 0x138, virtual false, abstract: false, final false
inline void _ctor(::System::Data::DataColumn*  column) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SqlByteStorage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SqlByteStorage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SqlByteStorage(SqlByteStorage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SqlByteStorage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SqlByteStorage(SqlByteStorage const& ) = delete;

/// @brief Field _values, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::System::Data::SqlTypes::SqlByte,::Array<::System::Data::SqlTypes::SqlByte>*>  ____values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::Common::SqlByteStorage, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Data::Common::SqlByteStorage, ____values) == 0x50, "Offset mismatch!");

} // namespace end def System::Data::Common
NEED_NO_BOX(::System::Data::Common::SqlByteStorage);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::SqlByteStorage*, "System.Data.Common", "SqlByteStorage");
