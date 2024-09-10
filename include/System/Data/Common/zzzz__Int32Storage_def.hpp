#pragma once
// IWYU pragma private; include "System/Data/Common/Int32Storage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Int32Storage)
namespace System::Collections {
class BitArray;
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
class Int32Storage;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Common::Int32Storage);
// Type: System.Data.Common::Int32Storage
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data::Common {
// Is value type: false
// CS Name: ::System.Data.Common::Int32Storage*
class CORDL_TYPE Int32Storage : public ::System::Data::Common::DataStorage {
public:
// Declarations
/// @brief Field _values, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__values, put=__cordl_internal_set__values)) ::ArrayW<int32_t,::Array<int32_t>*>  _values;

/// @brief Method Aggregate, addr 0x4156c90, size 0x840, virtual true, abstract: false, final false
inline ::System::Object* Aggregate(::ArrayW<int32_t,::Array<int32_t>*>  records, ::System::Data::AggregateType  kind) ;

/// @brief Method Compare, addr 0x41574d0, size 0x6c, virtual true, abstract: false, final false
inline int32_t Compare(int32_t  recordNo1, int32_t  recordNo2) ;

/// @brief Method CompareValueTo, addr 0x415753c, size 0xf0, virtual true, abstract: false, final false
inline int32_t CompareValueTo(int32_t  recordNo, ::System::Object*  value) ;

/// @brief Method ConvertObjectToXml, addr 0x4157b3c, size 0x98, virtual true, abstract: false, final false
inline ::StringW ConvertObjectToXml(::System::Object*  value) ;

/// @brief Method ConvertValue, addr 0x415762c, size 0x150, virtual true, abstract: false, final false
inline ::System::Object* ConvertValue(::System::Object*  value) ;

/// @brief Method ConvertXmlToObject, addr 0x4157ab0, size 0x8c, virtual true, abstract: false, final false
inline ::System::Object* ConvertXmlToObject(::StringW  s) ;

/// @brief Method Copy, addr 0x415777c, size 0x54, virtual true, abstract: false, final false
inline void Copy(int32_t  recordNo1, int32_t  recordNo2) ;

/// @brief Method CopyValue, addr 0x4157c1c, size 0xfc, virtual true, abstract: false, final false
inline void CopyValue(int32_t  record, ::System::Object*  store, ::System::Collections::BitArray*  nullbits, int32_t  storeIndex) ;

/// @brief Method Get, addr 0x41577d0, size 0x9c, virtual true, abstract: false, final false
inline ::System::Object* Get(int32_t  record) ;

/// @brief Method GetEmptyStorage, addr 0x4157bd4, size 0x48, virtual true, abstract: false, final false
inline ::System::Object* GetEmptyStorage(int32_t  recordCount) ;

static inline ::System::Data::Common::Int32Storage* New_ctor(::System::Data::DataColumn*  column) ;

/// @brief Method Set, addr 0x415786c, size 0x184, virtual true, abstract: false, final false
inline void Set(int32_t  record, ::System::Object*  value) ;

/// @brief Method SetCapacity, addr 0x41579f0, size 0xc0, virtual true, abstract: false, final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method SetStorage, addr 0x4157d18, size 0x94, virtual true, abstract: false, final false
inline void SetStorage(::System::Object*  store, ::System::Collections::BitArray*  nullbits) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __cordl_internal_get__values() const;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __cordl_internal_get__values() ;

constexpr void __cordl_internal_set__values(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

/// @brief Method .ctor, addr 0x414edf8, size 0xf4, virtual false, abstract: false, final false
inline void _ctor(::System::Data::DataColumn*  column) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Int32Storage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Int32Storage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Int32Storage(Int32Storage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Int32Storage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Int32Storage(Int32Storage const& ) = delete;

/// @brief Field _values, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<int32_t,::Array<int32_t>*>  ____values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::Common::Int32Storage, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Data::Common::Int32Storage, ____values) == 0x50, "Offset mismatch!");

} // namespace end def System::Data::Common
NEED_NO_BOX(::System::Data::Common::Int32Storage);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::Int32Storage*, "System.Data.Common", "Int32Storage");
