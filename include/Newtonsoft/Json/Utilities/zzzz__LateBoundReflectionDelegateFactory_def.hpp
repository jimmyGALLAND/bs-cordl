#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Utilities/zzzz__ReflectionDelegateFactory_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(LateBoundReflectionDelegateFactory)
namespace Newtonsoft::Json::Utilities {
template <typename T> class __LateBoundReflectionDelegateFactory____c__DisplayClass7_0_1;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System {
class Object;
}
namespace Newtonsoft::Json::Utilities {
template <typename T> class __LateBoundReflectionDelegateFactory____c__DisplayClass8_0_1;
}
namespace Newtonsoft::Json::Serialization {
template <typename T> class ObjectConstructor_1;
}
namespace System {
class Type;
}
namespace Newtonsoft::Json::Utilities {
class ReflectionDelegateFactory;
}
namespace System::Reflection {
class MethodBase;
}
namespace Newtonsoft::Json::Utilities {
template <typename T, typename TResult> class MethodCall_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Newtonsoft::Json::Utilities {
template <typename T> class __LateBoundReflectionDelegateFactory____c__DisplayClass6_0_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace Newtonsoft::Json::Utilities {
class __LateBoundReflectionDelegateFactory____c__DisplayClass3_0;
}
namespace Newtonsoft::Json::Utilities {
template <typename T> class __LateBoundReflectionDelegateFactory____c__DisplayClass5_0_1;
}
namespace Newtonsoft::Json::Utilities {
template <typename T> class __LateBoundReflectionDelegateFactory____c__DisplayClass9_0_1;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace Newtonsoft::Json::Utilities {
template <typename T> class __LateBoundReflectionDelegateFactory____c__DisplayClass4_0_1;
}
namespace System::Reflection {
class ConstructorInfo;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class LateBoundReflectionDelegateFactory;
}
namespace Newtonsoft::Json::Utilities {
class __LateBoundReflectionDelegateFactory____c__DisplayClass3_0;
}
namespace Newtonsoft::Json::Utilities {
template <typename T> class __LateBoundReflectionDelegateFactory____c__DisplayClass4_0_1;
}
namespace Newtonsoft::Json::Utilities {
template <typename T> class __LateBoundReflectionDelegateFactory____c__DisplayClass5_0_1;
}
namespace Newtonsoft::Json::Utilities {
template <typename T> class __LateBoundReflectionDelegateFactory____c__DisplayClass6_0_1;
}
namespace Newtonsoft::Json::Utilities {
template <typename T> class __LateBoundReflectionDelegateFactory____c__DisplayClass7_0_1;
}
namespace Newtonsoft::Json::Utilities {
template <typename T> class __LateBoundReflectionDelegateFactory____c__DisplayClass8_0_1;
}
namespace Newtonsoft::Json::Utilities {
template <typename T> class __LateBoundReflectionDelegateFactory____c__DisplayClass9_0_1;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass3_0);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass4_0_1);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass5_0_1);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass6_0_1);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass7_0_1);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass8_0_1);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass9_0_1);
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11852))
// CS Name: ::LateBoundReflectionDelegateFactory::<>c__DisplayClass3_0*
class CORDL_TYPE __LateBoundReflectionDelegateFactory____c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field c, offset 0x10, size 0x8
  __declspec(property(get = __get_c, put = __set_c))::System::Reflection::ConstructorInfo* c;

  /// @brief Field method, offset 0x18, size 0x8
  __declspec(property(get = __get_method, put = __set_method))::System::Reflection::MethodBase* method;

  constexpr ::System::Reflection::ConstructorInfo*& __get_c();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::ConstructorInfo*> const& __get_c() const;

  constexpr void __set_c(::System::Reflection::ConstructorInfo* value);

  constexpr ::System::Reflection::MethodBase*& __get_method();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodBase*> const& __get_method() const;

  constexpr void __set_method(::System::Reflection::MethodBase* value);

  static inline ::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass3_0* New_ctor();

  /// @brief Method .ctor addr 0x265a68c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <CreateParameterizedConstructor>b__0 addr 0x265a700 size 0x1c virtual false final false
  inline ::System::Object* _CreateParameterizedConstructor_b__0(::ArrayW<::System::Object*, ::Array<::System::Object*>*> a);

  /// @brief Method <CreateParameterizedConstructor>b__1 addr 0x265a71c size 0x24 virtual false final false
  inline ::System::Object* _CreateParameterizedConstructor_b__1(::ArrayW<::System::Object*, ::Array<::System::Object*>*> a);

  // Ctor Parameters [CppParam { name: "", ty: "__LateBoundReflectionDelegateFactory____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LateBoundReflectionDelegateFactory____c__DisplayClass3_0(__LateBoundReflectionDelegateFactory____c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LateBoundReflectionDelegateFactory____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LateBoundReflectionDelegateFactory____c__DisplayClass3_0(__LateBoundReflectionDelegateFactory____c__DisplayClass3_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LateBoundReflectionDelegateFactory____c__DisplayClass3_0();

public:
  /// @brief Field c, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::ConstructorInfo* ___c;

  /// @brief Field method, offset: 0x18, size: 0x8, def value: None
  ::System::Reflection::MethodBase* ___method;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass3_0, 0x20>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
// Type: ::<>c__DisplayClass4_0`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11853))
// CS Name: ::LateBoundReflectionDelegateFactory::<>c__DisplayClass4_0`1<T>*
class CORDL_TYPE __LateBoundReflectionDelegateFactory____c__DisplayClass4_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field c, offset 0x10, size 0x8
  __declspec(property(get = __get_c, put = __set_c))::System::Reflection::ConstructorInfo* c;

  /// @brief Field method, offset 0x18, size 0x8
  __declspec(property(get = __get_method, put = __set_method))::System::Reflection::MethodBase* method;

  constexpr ::System::Reflection::ConstructorInfo*& __get_c();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::ConstructorInfo*> const& __get_c() const;

  constexpr void __set_c(::System::Reflection::ConstructorInfo* value);

  constexpr ::System::Reflection::MethodBase*& __get_method();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodBase*> const& __get_method() const;

  constexpr void __set_method(::System::Reflection::MethodBase* value);

  static inline ::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass4_0_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <CreateMethodCall>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Object* _CreateMethodCall_b__0(T o, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> a);

  /// @brief Method <CreateMethodCall>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Object* _CreateMethodCall_b__1(T o, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> a);

  // Ctor Parameters [CppParam { name: "", ty: "__LateBoundReflectionDelegateFactory____c__DisplayClass4_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LateBoundReflectionDelegateFactory____c__DisplayClass4_0_1(__LateBoundReflectionDelegateFactory____c__DisplayClass4_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LateBoundReflectionDelegateFactory____c__DisplayClass4_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LateBoundReflectionDelegateFactory____c__DisplayClass4_0_1(__LateBoundReflectionDelegateFactory____c__DisplayClass4_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LateBoundReflectionDelegateFactory____c__DisplayClass4_0_1();

public:
  /// @brief Field c, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::ConstructorInfo* ___c;

  /// @brief Field method, offset: 0x18, size: 0x8, def value: None
  ::System::Reflection::MethodBase* ___method;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Utilities
// Type: ::<>c__DisplayClass5_0`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11854))
// CS Name: ::LateBoundReflectionDelegateFactory::<>c__DisplayClass5_0`1<T>*
class CORDL_TYPE __LateBoundReflectionDelegateFactory____c__DisplayClass5_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __get_type, put = __set_type))::System::Type* type;

  /// @brief Field constructorInfo, offset 0x18, size 0x8
  __declspec(property(get = __get_constructorInfo, put = __set_constructorInfo))::System::Reflection::ConstructorInfo* constructorInfo;

  constexpr ::System::Type*& __get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_type() const;

  constexpr void __set_type(::System::Type* value);

  constexpr ::System::Reflection::ConstructorInfo*& __get_constructorInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::ConstructorInfo*> const& __get_constructorInfo() const;

  constexpr void __set_constructorInfo(::System::Reflection::ConstructorInfo* value);

  static inline ::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass5_0_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <CreateDefaultConstructor>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline T _CreateDefaultConstructor_b__0();

  /// @brief Method <CreateDefaultConstructor>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline T _CreateDefaultConstructor_b__1();

  // Ctor Parameters [CppParam { name: "", ty: "__LateBoundReflectionDelegateFactory____c__DisplayClass5_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LateBoundReflectionDelegateFactory____c__DisplayClass5_0_1(__LateBoundReflectionDelegateFactory____c__DisplayClass5_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LateBoundReflectionDelegateFactory____c__DisplayClass5_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LateBoundReflectionDelegateFactory____c__DisplayClass5_0_1(__LateBoundReflectionDelegateFactory____c__DisplayClass5_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LateBoundReflectionDelegateFactory____c__DisplayClass5_0_1();

public:
  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  /// @brief Field constructorInfo, offset: 0x18, size: 0x8, def value: None
  ::System::Reflection::ConstructorInfo* ___constructorInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Utilities
// Type: ::<>c__DisplayClass6_0`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11855))
// CS Name: ::LateBoundReflectionDelegateFactory::<>c__DisplayClass6_0`1<T>*
class CORDL_TYPE __LateBoundReflectionDelegateFactory____c__DisplayClass6_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field propertyInfo, offset 0x10, size 0x8
  __declspec(property(get = __get_propertyInfo, put = __set_propertyInfo))::System::Reflection::PropertyInfo* propertyInfo;

  constexpr ::System::Reflection::PropertyInfo*& __get_propertyInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::PropertyInfo*> const& __get_propertyInfo() const;

  constexpr void __set_propertyInfo(::System::Reflection::PropertyInfo* value);

  static inline ::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass6_0_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <CreateGet>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Object* _CreateGet_b__0(T o);

  // Ctor Parameters [CppParam { name: "", ty: "__LateBoundReflectionDelegateFactory____c__DisplayClass6_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LateBoundReflectionDelegateFactory____c__DisplayClass6_0_1(__LateBoundReflectionDelegateFactory____c__DisplayClass6_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LateBoundReflectionDelegateFactory____c__DisplayClass6_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LateBoundReflectionDelegateFactory____c__DisplayClass6_0_1(__LateBoundReflectionDelegateFactory____c__DisplayClass6_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LateBoundReflectionDelegateFactory____c__DisplayClass6_0_1();

public:
  /// @brief Field propertyInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::PropertyInfo* ___propertyInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Utilities
// Type: ::<>c__DisplayClass7_0`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11856))
// CS Name: ::LateBoundReflectionDelegateFactory::<>c__DisplayClass7_0`1<T>*
class CORDL_TYPE __LateBoundReflectionDelegateFactory____c__DisplayClass7_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field fieldInfo, offset 0x10, size 0x8
  __declspec(property(get = __get_fieldInfo, put = __set_fieldInfo))::System::Reflection::FieldInfo* fieldInfo;

  constexpr ::System::Reflection::FieldInfo*& __get_fieldInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::FieldInfo*> const& __get_fieldInfo() const;

  constexpr void __set_fieldInfo(::System::Reflection::FieldInfo* value);

  static inline ::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass7_0_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <CreateGet>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Object* _CreateGet_b__0(T o);

  // Ctor Parameters [CppParam { name: "", ty: "__LateBoundReflectionDelegateFactory____c__DisplayClass7_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LateBoundReflectionDelegateFactory____c__DisplayClass7_0_1(__LateBoundReflectionDelegateFactory____c__DisplayClass7_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LateBoundReflectionDelegateFactory____c__DisplayClass7_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LateBoundReflectionDelegateFactory____c__DisplayClass7_0_1(__LateBoundReflectionDelegateFactory____c__DisplayClass7_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LateBoundReflectionDelegateFactory____c__DisplayClass7_0_1();

public:
  /// @brief Field fieldInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::FieldInfo* ___fieldInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Utilities
// Type: ::<>c__DisplayClass8_0`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11857))
// CS Name: ::LateBoundReflectionDelegateFactory::<>c__DisplayClass8_0`1<T>*
class CORDL_TYPE __LateBoundReflectionDelegateFactory____c__DisplayClass8_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field fieldInfo, offset 0x10, size 0x8
  __declspec(property(get = __get_fieldInfo, put = __set_fieldInfo))::System::Reflection::FieldInfo* fieldInfo;

  constexpr ::System::Reflection::FieldInfo*& __get_fieldInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::FieldInfo*> const& __get_fieldInfo() const;

  constexpr void __set_fieldInfo(::System::Reflection::FieldInfo* value);

  static inline ::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass8_0_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <CreateSet>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _CreateSet_b__0(T o, ::System::Object* v);

  // Ctor Parameters [CppParam { name: "", ty: "__LateBoundReflectionDelegateFactory____c__DisplayClass8_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LateBoundReflectionDelegateFactory____c__DisplayClass8_0_1(__LateBoundReflectionDelegateFactory____c__DisplayClass8_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LateBoundReflectionDelegateFactory____c__DisplayClass8_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LateBoundReflectionDelegateFactory____c__DisplayClass8_0_1(__LateBoundReflectionDelegateFactory____c__DisplayClass8_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LateBoundReflectionDelegateFactory____c__DisplayClass8_0_1();

public:
  /// @brief Field fieldInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::FieldInfo* ___fieldInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Utilities
// Type: ::<>c__DisplayClass9_0`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11858))
// CS Name: ::LateBoundReflectionDelegateFactory::<>c__DisplayClass9_0`1<T>*
class CORDL_TYPE __LateBoundReflectionDelegateFactory____c__DisplayClass9_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field propertyInfo, offset 0x10, size 0x8
  __declspec(property(get = __get_propertyInfo, put = __set_propertyInfo))::System::Reflection::PropertyInfo* propertyInfo;

  constexpr ::System::Reflection::PropertyInfo*& __get_propertyInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::PropertyInfo*> const& __get_propertyInfo() const;

  constexpr void __set_propertyInfo(::System::Reflection::PropertyInfo* value);

  static inline ::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass9_0_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <CreateSet>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _CreateSet_b__0(T o, ::System::Object* v);

  // Ctor Parameters [CppParam { name: "", ty: "__LateBoundReflectionDelegateFactory____c__DisplayClass9_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LateBoundReflectionDelegateFactory____c__DisplayClass9_0_1(__LateBoundReflectionDelegateFactory____c__DisplayClass9_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LateBoundReflectionDelegateFactory____c__DisplayClass9_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LateBoundReflectionDelegateFactory____c__DisplayClass9_0_1(__LateBoundReflectionDelegateFactory____c__DisplayClass9_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LateBoundReflectionDelegateFactory____c__DisplayClass9_0_1();

public:
  /// @brief Field propertyInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::PropertyInfo* ___propertyInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Utilities
// Type: Newtonsoft.Json.Utilities::LateBoundReflectionDelegateFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11851))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11859))
// CS Name: ::Newtonsoft.Json.Utilities::LateBoundReflectionDelegateFactory*
class CORDL_TYPE LateBoundReflectionDelegateFactory : public ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory {
public:
  // Declarations
  template <typename T> using __c__DisplayClass9_0_1 = ::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass9_0_1<T>;

  template <typename T> using __c__DisplayClass8_0_1 = ::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass8_0_1<T>;

  template <typename T> using __c__DisplayClass7_0_1 = ::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass7_0_1<T>;

  template <typename T> using __c__DisplayClass6_0_1 = ::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass6_0_1<T>;

  template <typename T> using __c__DisplayClass5_0_1 = ::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass5_0_1<T>;

  template <typename T> using __c__DisplayClass4_0_1 = ::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass4_0_1<T>;

  using __c__DisplayClass3_0 = ::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass3_0;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance, put = setStaticF__instance))::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory* _instance;

  static inline void setStaticF__instance(::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory* value);

  static inline ::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory* getStaticF__instance();

  /// @brief Method get_Instance addr 0x265a4e4 size 0x58 virtual false final false
  static inline ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory* get_Instance();

  /// @brief Method CreateParameterizedConstructor addr 0x265a53c size 0x150 virtual true final false
  inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* CreateParameterizedConstructor(::System::Reflection::MethodBase* method);

  /// @brief Method CreateMethodCall addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline ::Newtonsoft::Json::Utilities::MethodCall_2<T, ::System::Object*>* CreateMethodCall(::System::Reflection::MethodBase* method);

  /// @brief Method CreateDefaultConstructor addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline ::System::Func_1<T>* CreateDefaultConstructor(::System::Type* type);

  /// @brief Method CreateGet addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline ::System::Func_2<T, ::System::Object*>* CreateGet(::System::Reflection::PropertyInfo* propertyInfo);

  /// @brief Method CreateGet addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline ::System::Func_2<T, ::System::Object*>* CreateGet(::System::Reflection::FieldInfo* fieldInfo);

  /// @brief Method CreateSet addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline ::System::Action_2<T, ::System::Object*>* CreateSet(::System::Reflection::FieldInfo* fieldInfo);

  /// @brief Method CreateSet addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline ::System::Action_2<T, ::System::Object*>* CreateSet(::System::Reflection::PropertyInfo* propertyInfo);

  static inline ::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory* New_ctor();

  /// @brief Method .ctor addr 0x265a694 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LateBoundReflectionDelegateFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LateBoundReflectionDelegateFactory(LateBoundReflectionDelegateFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LateBoundReflectionDelegateFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LateBoundReflectionDelegateFactory(LateBoundReflectionDelegateFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LateBoundReflectionDelegateFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::LateBoundReflectionDelegateFactory*, "Newtonsoft.Json.Utilities", "LateBoundReflectionDelegateFactory");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass3_0*, "Newtonsoft.Json.Utilities",
                       "LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass4_0_1, "Newtonsoft.Json.Utilities",
                                     "LateBoundReflectionDelegateFactory/<>c__DisplayClass4_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass5_0_1, "Newtonsoft.Json.Utilities",
                                     "LateBoundReflectionDelegateFactory/<>c__DisplayClass5_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass6_0_1, "Newtonsoft.Json.Utilities",
                                     "LateBoundReflectionDelegateFactory/<>c__DisplayClass6_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass7_0_1, "Newtonsoft.Json.Utilities",
                                     "LateBoundReflectionDelegateFactory/<>c__DisplayClass7_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass8_0_1, "Newtonsoft.Json.Utilities",
                                     "LateBoundReflectionDelegateFactory/<>c__DisplayClass8_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::__LateBoundReflectionDelegateFactory____c__DisplayClass9_0_1, "Newtonsoft.Json.Utilities",
                                     "LateBoundReflectionDelegateFactory/<>c__DisplayClass9_0`1");
