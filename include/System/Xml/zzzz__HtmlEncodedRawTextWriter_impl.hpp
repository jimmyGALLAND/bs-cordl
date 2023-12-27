#pragma once
#include "System/Xml/zzzz__AttributeProperties_impl.hpp"
#include "System/Xml/zzzz__ElementProperties_impl.hpp"
#include "System/Xml/zzzz__XmlEncodedRawTextWriter_impl.hpp"
#include "System/Xml/zzzz__HtmlEncodedRawTextWriter_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Xml/zzzz__XmlStandalone_def.hpp"
#include "System/Xml/zzzz__XmlWriterSettings_def.hpp"
#include "System/Xml/zzzz__TernaryTreeReadOnly_def.hpp"
#include "System/Xml/zzzz__ByteStack_def.hpp"
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(::System::IO::TextWriter*, ::System::Xml::XmlWriterSettings*)>(
    &::System::Xml::HtmlEncodedRawTextWriter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x284f060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriterSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(::System::IO::Stream*, ::System::Xml::XmlWriterSettings*)>(
    &::System::Xml::HtmlEncodedRawTextWriter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x284f2d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriterSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteXmlDeclaration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(::System::Xml::XmlStandalone)>(
    &::System::Xml::HtmlEncodedRawTextWriter::WriteXmlDeclaration)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x284f588;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteXmlDeclaration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(::StringW)>(
    &::System::Xml::HtmlEncodedRawTextWriter::WriteXmlDeclaration)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x284f58c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteDocType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(::StringW, ::StringW, ::StringW, ::StringW)>(
    &::System::Xml::HtmlEncodedRawTextWriter::WriteDocType)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x284f590;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::HtmlEncodedRawTextWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x284f868;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.StartElementContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)()>(&::System::Xml::HtmlEncodedRawTextWriter::StartElementContent)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x284fb74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::HtmlEncodedRawTextWriter::WriteEndElement)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x284fcc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteFullEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::HtmlEncodedRawTextWriter::WriteFullEndElement)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x284ff2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteStartAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::HtmlEncodedRawTextWriter::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x285012c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteEndAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)()>(&::System::Xml::HtmlEncodedRawTextWriter::WriteEndAttribute)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x28503bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteProcessingInstruction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(::StringW, ::StringW)>(
    &::System::Xml::HtmlEncodedRawTextWriter::WriteProcessingInstruction)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x28504e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(::StringW)>(
    &::System::Xml::HtmlEncodedRawTextWriter::WriteString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x285091c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteEntityRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(::StringW)>(
    &::System::Xml::HtmlEncodedRawTextWriter::WriteEntityRef)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x28509d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteCharEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(char16_t)>(
    &::System::Xml::HtmlEncodedRawTextWriter::WriteCharEntity)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2850a38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteSurrogateCharEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(char16_t, char16_t)>(
    &::System::Xml::HtmlEncodedRawTextWriter::WriteSurrogateCharEntity)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2850a98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Xml::HtmlEncodedRawTextWriter::WriteChars)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2850af8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(::System::Xml::XmlWriterSettings*)>(
    &::System::Xml::HtmlEncodedRawTextWriter::Init)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x284f164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), "Init", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriterSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteMetaElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)()>(&::System::Xml::HtmlEncodedRawTextWriter::WriteMetaElement)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x284fbc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(),
                                                                               "WriteMetaElement", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteHtmlElementTextBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(
    ::cordl_internals::Ptr<char16_t>, ::cordl_internals::Ptr<char16_t>)>(&::System::Xml::HtmlEncodedRawTextWriter::WriteHtmlElementTextBlock)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28509c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), "WriteHtmlElementTextBlock", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteHtmlAttributeTextBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(
    ::cordl_internals::Ptr<char16_t>, ::cordl_internals::Ptr<char16_t>)>(&::System::Xml::HtmlEncodedRawTextWriter::WriteHtmlAttributeTextBlock)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2850988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), "WriteHtmlAttributeTextBlock", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteHtmlAttributeText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(
    ::cordl_internals::Ptr<char16_t>, ::cordl_internals::Ptr<char16_t>)>(&::System::Xml::HtmlEncodedRawTextWriter::WriteHtmlAttributeText)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x2851638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), "WriteHtmlAttributeText", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.WriteUriAttributeText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)(
    ::cordl_internals::Ptr<char16_t>, ::cordl_internals::Ptr<char16_t>)>(&::System::Xml::HtmlEncodedRawTextWriter::WriteUriAttributeText)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x28512c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), "WriteUriAttributeText", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlEncodedRawTextWriter.OutputRestAmps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlEncodedRawTextWriter::*)()>(&::System::Xml::HtmlEncodedRawTextWriter::OutputRestAmps)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x285044c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(),
                                                                               "OutputRestAmps", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Xml::ByteStack*& System::Xml::HtmlEncodedRawTextWriter::__get_elementScope() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___elementScope;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::ByteStack*> const& System::Xml::HtmlEncodedRawTextWriter::__get_elementScope() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___elementScope;
}
constexpr void System::Xml::HtmlEncodedRawTextWriter::__set_elementScope(::System::Xml::ByteStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elementScope)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::ElementProperties& System::Xml::HtmlEncodedRawTextWriter::__get_currentElementProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___currentElementProperties;
}
constexpr ::System::Xml::ElementProperties const& System::Xml::HtmlEncodedRawTextWriter::__get_currentElementProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___currentElementProperties;
}
constexpr void System::Xml::HtmlEncodedRawTextWriter::__set_currentElementProperties(::System::Xml::ElementProperties value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___currentElementProperties = value;
}
constexpr ::System::Xml::AttributeProperties& System::Xml::HtmlEncodedRawTextWriter::__get_currentAttributeProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___currentAttributeProperties;
}
constexpr ::System::Xml::AttributeProperties const& System::Xml::HtmlEncodedRawTextWriter::__get_currentAttributeProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___currentAttributeProperties;
}
constexpr void System::Xml::HtmlEncodedRawTextWriter::__set_currentAttributeProperties(::System::Xml::AttributeProperties value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___currentAttributeProperties = value;
}
constexpr bool& System::Xml::HtmlEncodedRawTextWriter::__get_endsWithAmpersand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___endsWithAmpersand;
}
constexpr bool const& System::Xml::HtmlEncodedRawTextWriter::__get_endsWithAmpersand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___endsWithAmpersand;
}
constexpr void System::Xml::HtmlEncodedRawTextWriter::__set_endsWithAmpersand(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___endsWithAmpersand = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Xml::HtmlEncodedRawTextWriter::__get_uriEscapingBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___uriEscapingBuffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Xml::HtmlEncodedRawTextWriter::__get_uriEscapingBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___uriEscapingBuffer;
}
constexpr void System::Xml::HtmlEncodedRawTextWriter::__set_uriEscapingBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___uriEscapingBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::HtmlEncodedRawTextWriter::__get_mediaType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mediaType;
}
constexpr ::StringW const& System::Xml::HtmlEncodedRawTextWriter::__get_mediaType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mediaType;
}
constexpr void System::Xml::HtmlEncodedRawTextWriter::__set_mediaType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mediaType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::HtmlEncodedRawTextWriter::__get_doNotEscapeUriAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___doNotEscapeUriAttributes;
}
constexpr bool const& System::Xml::HtmlEncodedRawTextWriter::__get_doNotEscapeUriAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___doNotEscapeUriAttributes;
}
constexpr void System::Xml::HtmlEncodedRawTextWriter::__set_doNotEscapeUriAttributes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___doNotEscapeUriAttributes = value;
}
inline void System::Xml::HtmlEncodedRawTextWriter::setStaticF_elementPropertySearch(::System::Xml::TernaryTreeReadOnly* value) {
  ::cordl_internals::setStaticField<::System::Xml::TernaryTreeReadOnly*, "elementPropertySearch",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get>(std::forward<::System::Xml::TernaryTreeReadOnly*>(value));
}
inline ::System::Xml::TernaryTreeReadOnly* System::Xml::HtmlEncodedRawTextWriter::getStaticF_elementPropertySearch() {
  return ::cordl_internals::getStaticField<::System::Xml::TernaryTreeReadOnly*, "elementPropertySearch",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get>();
}
inline void System::Xml::HtmlEncodedRawTextWriter::setStaticF_attributePropertySearch(::System::Xml::TernaryTreeReadOnly* value) {
  ::cordl_internals::setStaticField<::System::Xml::TernaryTreeReadOnly*, "attributePropertySearch",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get>(std::forward<::System::Xml::TernaryTreeReadOnly*>(value));
}
inline ::System::Xml::TernaryTreeReadOnly* System::Xml::HtmlEncodedRawTextWriter::getStaticF_attributePropertySearch() {
  return ::cordl_internals::getStaticField<::System::Xml::TernaryTreeReadOnly*, "attributePropertySearch",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get>();
}
inline ::System::Xml::HtmlEncodedRawTextWriter* System::Xml::HtmlEncodedRawTextWriter::New_ctor(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::HtmlEncodedRawTextWriter*>(writer, settings));
}
inline void System::Xml::HtmlEncodedRawTextWriter::_ctor(::System::IO::TextWriter* writer, ::System::Xml::XmlWriterSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriterSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, settings);
}
inline ::System::Xml::HtmlEncodedRawTextWriter* System::Xml::HtmlEncodedRawTextWriter::New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::HtmlEncodedRawTextWriter*>(stream, settings));
}
inline void System::Xml::HtmlEncodedRawTextWriter::_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriterSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, settings);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteXmlDeclaration(::System::Xml::XmlStandalone standalone) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), "WriteXmlDeclaration", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlStandalone>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, standalone);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteXmlDeclaration(::StringW xmldecl) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), "WriteXmlDeclaration",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmldecl);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), "WriteDocType", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, pubid, sysid, subset);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), "WriteStartElement", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::HtmlEncodedRawTextWriter::StartElementContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(),
                                                                             "StartElementContent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), "WriteEndElement", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), "WriteFullEndElement", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), "WriteStartAttribute", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteEndAttribute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(),
                                                                             "WriteEndAttribute", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteProcessingInstruction(::StringW target, ::StringW text) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), "WriteProcessingInstruction", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, text);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteString(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), "WriteString", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteEntityRef(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), "WriteEntityRef", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteCharEntity(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), "WriteCharEntity", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ch);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), "WriteSurrogateCharEntity", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lowChar, highChar);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), "WriteChars", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::HtmlEncodedRawTextWriter::Init(::System::Xml::XmlWriterSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), "Init", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriterSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteMetaElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(),
                                                                             "WriteMetaElement", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteHtmlElementTextBlock(::cordl_internals::Ptr<char16_t> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), "WriteHtmlElementTextBlock", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pSrc, pSrcEnd);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteHtmlAttributeTextBlock(::cordl_internals::Ptr<char16_t> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), "WriteHtmlAttributeTextBlock", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pSrc, pSrcEnd);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteHtmlAttributeText(::cordl_internals::Ptr<char16_t> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), "WriteHtmlAttributeText", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pSrc, pSrcEnd);
}
inline void System::Xml::HtmlEncodedRawTextWriter::WriteUriAttributeText(::cordl_internals::Ptr<char16_t> pSrc, ::cordl_internals::Ptr<char16_t> pSrcEnd) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), "WriteUriAttributeText", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pSrc, pSrcEnd);
}
inline void System::Xml::HtmlEncodedRawTextWriter::OutputRestAmps() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlEncodedRawTextWriter*>::get(), "OutputRestAmps",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::HtmlEncodedRawTextWriter::HtmlEncodedRawTextWriter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
