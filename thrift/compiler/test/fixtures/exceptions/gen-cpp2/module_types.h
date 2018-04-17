/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/GeneratedHeaderHelper.h>
#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>


// BEGIN declare_enums

// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace cpp2 {
class Banal;
class Fiery;
} // cpp2
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
class Banal final : private apache::thrift::detail::st::ComparisonOperators<Banal>, public apache::thrift::TException {
 public:

  Banal() {}
  // FragileConstructor for use in initialization lists only.
  Banal(apache::thrift::FragileConstructor);

  Banal(Banal&&) = default;

  Banal(const Banal&) = default;

  Banal& operator=(Banal&&) = default;

  Banal& operator=(const Banal&) = default;
  void __clear();
  bool operator==(const Banal& rhs) const;

  bool operator < (const Banal& rhs) const {
    (void)rhs;
    return false;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

  const char* what() const noexcept override {
    return " ::cpp2::Banal";
  }

 private:
  static void translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype);

  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< Banal >;
};

void swap(Banal& a, Banal& b);
extern template void Banal::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Banal::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Banal::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Banal::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void Banal::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Banal::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Banal::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Banal::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

template <class Protocol_>
uint32_t Banal::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCurrentPosition().getCurrentPosition();
  readNoXfer(iprot);
  return iprot->getCurrentPosition().getCurrentPosition() - _xferStart;
}

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::Banal>::clear( ::cpp2::Banal* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::Banal>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Banal>::write(Protocol* proto,  ::cpp2::Banal const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> void Cpp2Ops< ::cpp2::Banal>::read(Protocol* proto,  ::cpp2::Banal* obj) {
  return obj->readNoXfer(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Banal>::serializedSize(Protocol const* proto,  ::cpp2::Banal const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Banal>::serializedSizeZC(Protocol const* proto,  ::cpp2::Banal const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {
class Fiery final : private apache::thrift::detail::st::ComparisonOperators<Fiery>, public apache::thrift::TException {
 public:

  Fiery() {}
  // FragileConstructor for use in initialization lists only.
  Fiery(apache::thrift::FragileConstructor, std::string message__arg);
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Fiery(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Fiery(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    message = arg.move();
  }

  Fiery(Fiery&&) = default;

  Fiery(const Fiery&) = default;

  Fiery& operator=(Fiery&&) = default;

  Fiery& operator=(const Fiery&) = default;
  void __clear();
  std::string message;
  bool operator==(const Fiery& rhs) const;

  bool operator < (const Fiery& rhs) const {
    if (!(message == rhs.message)) {
      return message < rhs.message;
    }
    (void)rhs;
    return false;
  }

  const std::string& get_message() const& {
    return message;
  }

  std::string get_message() && {
    return std::move(message);
  }

  template <typename T_Fiery_message_struct_setter = std::string>
  std::string& set_message(T_Fiery_message_struct_setter&& message_) {
    message = std::forward<T_Fiery_message_struct_setter>(message_);
    return message;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

  const char* what() const noexcept override {
    return " ::cpp2::Fiery";
  }

 private:
  static void translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype);

  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< Fiery >;
};

void swap(Fiery& a, Fiery& b);
extern template void Fiery::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Fiery::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Fiery::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Fiery::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void Fiery::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Fiery::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Fiery::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Fiery::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

template <class Protocol_>
uint32_t Fiery::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCurrentPosition().getCurrentPosition();
  readNoXfer(iprot);
  return iprot->getCurrentPosition().getCurrentPosition() - _xferStart;
}

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::Fiery>::clear( ::cpp2::Fiery* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::Fiery>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Fiery>::write(Protocol* proto,  ::cpp2::Fiery const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> void Cpp2Ops< ::cpp2::Fiery>::read(Protocol* proto,  ::cpp2::Fiery* obj) {
  return obj->readNoXfer(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Fiery>::serializedSize(Protocol const* proto,  ::cpp2::Fiery const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Fiery>::serializedSizeZC(Protocol const* proto,  ::cpp2::Fiery const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
