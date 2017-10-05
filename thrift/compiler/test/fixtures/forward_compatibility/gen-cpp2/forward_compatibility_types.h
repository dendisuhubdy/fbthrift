/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/Cursor.h>

#include <thrift/lib/cpp2/GeneratedHeaderHelper.h>



namespace cpp2 {

class OldStructure;
class NewStructure;
class NewStructure2;
typedef std::map<int16_t, float> FloatFeatures;

class OldStructure : private apache::thrift::detail::st::ComparisonOperators<OldStructure> {
 public:

  OldStructure() {}
  // FragileConstructor for use in initialization lists only

  OldStructure(apache::thrift::FragileConstructor, std::map<int16_t, double> features__arg) :
      features(std::move(features__arg)) {
    __isset.features = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  OldStructure(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    OldStructure(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    features = arg.move();
    __isset.features = true;
  }

  OldStructure(OldStructure&&) = default;

  OldStructure(const OldStructure&) = default;

  OldStructure& operator=(OldStructure&&) = default;

  OldStructure& operator=(const OldStructure&) = default;
  void __clear();

  virtual ~OldStructure() {}

  std::map<int16_t, double> features;

  struct __isset {
    void __clear() {
      features = false;
    }

    bool features = false;
  } __isset;
  bool operator==(const OldStructure& rhs) const;

  bool operator < (const OldStructure& rhs) const {
    if (!(features == rhs.features)) {
      return features < rhs.features;
    }
    (void)rhs;
    return false;
  }
  const std::map<int16_t, double>& get_features() const&;
  std::map<int16_t, double> get_features() &&;

  template <typename T_OldStructure_features_struct_setter>
  std::map<int16_t, double>& set_features(T_OldStructure_features_struct_setter&& features_) {
    features = std::forward<T_OldStructure_features_struct_setter>(features_);
    __isset.features = true;
    return features;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  static void translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype);
};

void swap(OldStructure& a, OldStructure& b);
extern template uint32_t OldStructure::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t OldStructure::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t OldStructure::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t OldStructure::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t OldStructure::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t OldStructure::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t OldStructure::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t OldStructure::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t OldStructure::read<>(apache::thrift::SimpleJSONProtocolReader*);
extern template uint32_t OldStructure::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
extern template uint32_t OldStructure::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
extern template uint32_t OldStructure::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::OldStructure>::clear( ::cpp2::OldStructure* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::OldStructure>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::OldStructure>::write(Protocol* proto,  ::cpp2::OldStructure const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::OldStructure>::read(Protocol* proto,  ::cpp2::OldStructure* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::OldStructure>::serializedSize(Protocol const* proto,  ::cpp2::OldStructure const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::OldStructure>::serializedSizeZC(Protocol const* proto,  ::cpp2::OldStructure const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

class NewStructure : private apache::thrift::detail::st::ComparisonOperators<NewStructure> {
 public:

  NewStructure() {}
  // FragileConstructor for use in initialization lists only

  NewStructure(apache::thrift::FragileConstructor, std::map<int16_t, double> features__arg) :
      features(std::move(features__arg)) {
    __isset.features = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  NewStructure(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    NewStructure(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    features = arg.move();
    __isset.features = true;
  }

  NewStructure(NewStructure&&) = default;

  NewStructure(const NewStructure&) = default;

  NewStructure& operator=(NewStructure&&) = default;

  NewStructure& operator=(const NewStructure&) = default;
  void __clear();

  virtual ~NewStructure() {}

  std::map<int16_t, double> features;

  struct __isset {
    void __clear() {
      features = false;
    }

    bool features = false;
  } __isset;
  bool operator==(const NewStructure& rhs) const;

  bool operator < (const NewStructure& rhs) const {
    if (!(features == rhs.features)) {
      return features < rhs.features;
    }
    (void)rhs;
    return false;
  }
  const std::map<int16_t, double>& get_features() const&;
  std::map<int16_t, double> get_features() &&;

  template <typename T_NewStructure_features_struct_setter>
  std::map<int16_t, double>& set_features(T_NewStructure_features_struct_setter&& features_) {
    features = std::forward<T_NewStructure_features_struct_setter>(features_);
    __isset.features = true;
    return features;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  static void translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype);
};

void swap(NewStructure& a, NewStructure& b);
extern template uint32_t NewStructure::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t NewStructure::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t NewStructure::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t NewStructure::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t NewStructure::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t NewStructure::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t NewStructure::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t NewStructure::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t NewStructure::read<>(apache::thrift::SimpleJSONProtocolReader*);
extern template uint32_t NewStructure::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
extern template uint32_t NewStructure::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
extern template uint32_t NewStructure::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::NewStructure>::clear( ::cpp2::NewStructure* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::NewStructure>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::NewStructure>::write(Protocol* proto,  ::cpp2::NewStructure const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::NewStructure>::read(Protocol* proto,  ::cpp2::NewStructure* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::NewStructure>::serializedSize(Protocol const* proto,  ::cpp2::NewStructure const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::NewStructure>::serializedSizeZC(Protocol const* proto,  ::cpp2::NewStructure const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

class NewStructure2 : private apache::thrift::detail::st::ComparisonOperators<NewStructure2> {
 public:

  NewStructure2() {}
  // FragileConstructor for use in initialization lists only

  NewStructure2(apache::thrift::FragileConstructor,  ::cpp2::FloatFeatures features__arg) :
      features(std::move(features__arg)) {
    __isset.features = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  NewStructure2(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    NewStructure2(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    features = arg.move();
    __isset.features = true;
  }

  NewStructure2(NewStructure2&&) = default;

  NewStructure2(const NewStructure2&) = default;

  NewStructure2& operator=(NewStructure2&&) = default;

  NewStructure2& operator=(const NewStructure2&) = default;
  void __clear();

  virtual ~NewStructure2() {}

   ::cpp2::FloatFeatures features;

  struct __isset {
    void __clear() {
      features = false;
    }

    bool features = false;
  } __isset;
  bool operator==(const NewStructure2& rhs) const;
  bool operator < (const NewStructure2& rhs) const;
  const  ::cpp2::FloatFeatures& get_features() const&;
   ::cpp2::FloatFeatures get_features() &&;

  template <typename T_NewStructure2_features_struct_setter>
   ::cpp2::FloatFeatures& set_features(T_NewStructure2_features_struct_setter&& features_) {
    features = std::forward<T_NewStructure2_features_struct_setter>(features_);
    __isset.features = true;
    return features;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  static void translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype);
};

void swap(NewStructure2& a, NewStructure2& b);
extern template uint32_t NewStructure2::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t NewStructure2::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t NewStructure2::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t NewStructure2::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t NewStructure2::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t NewStructure2::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t NewStructure2::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t NewStructure2::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t NewStructure2::read<>(apache::thrift::SimpleJSONProtocolReader*);
extern template uint32_t NewStructure2::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
extern template uint32_t NewStructure2::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
extern template uint32_t NewStructure2::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::NewStructure2>::clear( ::cpp2::NewStructure2* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::NewStructure2>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::NewStructure2>::write(Protocol* proto,  ::cpp2::NewStructure2 const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::NewStructure2>::read(Protocol* proto,  ::cpp2::NewStructure2* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::NewStructure2>::serializedSize(Protocol const* proto,  ::cpp2::NewStructure2 const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::NewStructure2>::serializedSizeZC(Protocol const* proto,  ::cpp2::NewStructure2 const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

} // cpp2
