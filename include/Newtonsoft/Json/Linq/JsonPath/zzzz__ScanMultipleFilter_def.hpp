#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__PathFilter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScanMultipleFilter)
namespace Newtonsoft::Json::Linq::JsonPath {
class __ScanMultipleFilter___ExecuteFilter_d__2;
}
namespace Newtonsoft::Json::Linq {
class JProperty;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Linq {
class JsonSelectSettings;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq::JsonPath {
class ScanMultipleFilter;
}
namespace Newtonsoft::Json::Linq::JsonPath {
class __ScanMultipleFilter___ExecuteFilter_d__2;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::ScanMultipleFilter);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::__ScanMultipleFilter___ExecuteFilter_d__2);
// Type: ::<ExecuteFilter>d__2
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// CS Name: ::ScanMultipleFilter::<ExecuteFilter>d__2*
class CORDL_TYPE __ScanMultipleFilter___ExecuteFilter_d__2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current))::Newtonsoft::Json::Linq::
      JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::Newtonsoft::Json::Linq::JToken* __2__current;

  /// @brief Field <>3__current, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__current, put = __cordl_internal_set___3__current))::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* __3__current;

  /// @brief Field <>4__this, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Newtonsoft::Json::Linq::JsonPath::ScanMultipleFilter* __4__this;

  /// @brief Field <>7__wrap1, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1))::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* __7__wrap1;

  /// @brief Field <>7__wrap5, offset 0x60, size 0x18
  __declspec(property(get = __cordl_internal_get___7__wrap5, put = __cordl_internal_set___7__wrap5))::System::Collections::Generic::__List_1__Enumerator<::StringW> __7__wrap5;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <c>5__3, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__c_5__3, put = __cordl_internal_set__c_5__3))::Newtonsoft::Json::Linq::JToken* _c_5__3;

  /// @brief Field <property>5__5, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__property_5__5, put = __cordl_internal_set__property_5__5))::Newtonsoft::Json::Linq::JProperty* _property_5__5;

  /// @brief Field <value>5__4, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__value_5__4, put = __cordl_internal_set__value_5__4))::Newtonsoft::Json::Linq::JToken* _value_5__4;

  /// @brief Field current, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_current, put = __cordl_internal_set_current))::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2984210, size 0x450, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Newtonsoft::Json::Linq::JsonPath::__ScanMultipleFilter___ExecuteFilter_d__2* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator, addr 0x29847b0, size 0xac, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current, addr 0x2984760, size 0x8, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x298485c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2984768, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x29847a8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2984158, size 0xb8, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get___3__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*> const& __cordl_internal_get___3__current() const;

  constexpr ::Newtonsoft::Json::Linq::JsonPath::ScanMultipleFilter*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JsonPath::ScanMultipleFilter*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::StringW> const& __cordl_internal_get___7__wrap5() const;

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::StringW>& __cordl_internal_get___7__wrap5();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get__c_5__3();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __cordl_internal_get__c_5__3() const;

  constexpr ::Newtonsoft::Json::Linq::JProperty*& __cordl_internal_get__property_5__5();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JProperty*> const& __cordl_internal_get__property_5__5() const;

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get__value_5__4();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __cordl_internal_get__value_5__4() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get_current();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*> const& __cordl_internal_get_current() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::Newtonsoft::Json::Linq::JToken* value);

  constexpr void __cordl_internal_set___3__current(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr void __cordl_internal_set___4__this(::Newtonsoft::Json::Linq::JsonPath::ScanMultipleFilter* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr void __cordl_internal_set___7__wrap5(::System::Collections::Generic::__List_1__Enumerator<::StringW> value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__c_5__3(::Newtonsoft::Json::Linq::JToken* value);

  constexpr void __cordl_internal_set__property_5__5(::Newtonsoft::Json::Linq::JProperty* value);

  constexpr void __cordl_internal_set__value_5__4(::Newtonsoft::Json::Linq::JToken* value);

  constexpr void __cordl_internal_set_current(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* value);

  /// @brief Method <>m__Finally1, addr 0x29846b0, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x2984660, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method .ctor, addr 0x2984124, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerator_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScanMultipleFilter___ExecuteFilter_d__2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ScanMultipleFilter___ExecuteFilter_d__2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScanMultipleFilter___ExecuteFilter_d__2(__ScanMultipleFilter___ExecuteFilter_d__2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScanMultipleFilter___ExecuteFilter_d__2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScanMultipleFilter___ExecuteFilter_d__2(__ScanMultipleFilter___ExecuteFilter_d__2 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field current, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* ___current;

  /// @brief Field <>3__current, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* _____3__current;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JsonPath::ScanMultipleFilter* _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* _____7__wrap1;

  /// @brief Field <c>5__3, offset: 0x48, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* ____c_5__3;

  /// @brief Field <value>5__4, offset: 0x50, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* ____value_5__4;

  /// @brief Field <property>5__5, offset: 0x58, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JProperty* ____property_5__5;

  /// @brief Field <>7__wrap5, offset: 0x60, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::StringW> _____7__wrap5;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::__ScanMultipleFilter___ExecuteFilter_d__2, 0x78>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ScanMultipleFilter___ExecuteFilter_d__2, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ScanMultipleFilter___ExecuteFilter_d__2, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ScanMultipleFilter___ExecuteFilter_d__2, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ScanMultipleFilter___ExecuteFilter_d__2, ___current) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ScanMultipleFilter___ExecuteFilter_d__2, _____3__current) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ScanMultipleFilter___ExecuteFilter_d__2, _____4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ScanMultipleFilter___ExecuteFilter_d__2, _____7__wrap1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ScanMultipleFilter___ExecuteFilter_d__2, ____c_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ScanMultipleFilter___ExecuteFilter_d__2, ____value_5__4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ScanMultipleFilter___ExecuteFilter_d__2, ____property_5__5) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ScanMultipleFilter___ExecuteFilter_d__2, _____7__wrap5) == 0x60, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq::JsonPath
// Type: Newtonsoft.Json.Linq.JsonPath::ScanMultipleFilter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Linq.JsonPath::ScanMultipleFilter*
class CORDL_TYPE ScanMultipleFilter : public ::Newtonsoft::Json::Linq::JsonPath::PathFilter {
public:
  // Declarations
  using _ExecuteFilter_d__2 = ::Newtonsoft::Json::Linq::JsonPath::__ScanMultipleFilter___ExecuteFilter_d__2;

  /// @brief Field _names, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__names, put = __cordl_internal_set__names))::System::Collections::Generic::List_1<::StringW>* _names;

  /// @brief Method ExecuteFilter, addr 0x29840a0, size 0x84, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* ExecuteFilter(::Newtonsoft::Json::Linq::JToken* root,
                                                                                                         ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* current,
                                                                                                         ::Newtonsoft::Json::Linq::JsonSelectSettings* settings);

  static inline ::Newtonsoft::Json::Linq::JsonPath::ScanMultipleFilter* New_ctor(::System::Collections::Generic::List_1<::StringW>* names);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__names();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__names() const;

  constexpr void __cordl_internal_set__names(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x2980e70, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::StringW>* names);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScanMultipleFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScanMultipleFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScanMultipleFilter(ScanMultipleFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScanMultipleFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScanMultipleFilter(ScanMultipleFilter const&) = delete;

  /// @brief Field _names, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____names;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::ScanMultipleFilter, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ScanMultipleFilter, ____names) == 0x10, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq::JsonPath
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::ScanMultipleFilter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::ScanMultipleFilter*, "Newtonsoft.Json.Linq.JsonPath", "ScanMultipleFilter");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::__ScanMultipleFilter___ExecuteFilter_d__2);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::__ScanMultipleFilter___ExecuteFilter_d__2*, "Newtonsoft.Json.Linq.JsonPath", "ScanMultipleFilter/<ExecuteFilter>d__2");
