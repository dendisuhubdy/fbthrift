/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "src/gen-cpp2/includes_types.h"
#include "src/gen-cpp2/includes_types.tcc"

#include <algorithm>
#include <folly/Indestructible.h>

#include "src/gen-cpp2/includes_data.h"

namespace cpp2 {

Included::Included(apache::thrift::FragileConstructor, int64_t MyIntField__arg,  ::cpp2::Foo MyTransitiveField__arg) :
    MyIntField(std::move(MyIntField__arg)),
    MyTransitiveField(std::move(MyTransitiveField__arg)) {
  __isset.MyIntField = true;
  __isset.MyTransitiveField = true;
}

void Included::__clear() {
  // clear all fields
  MyIntField = 0LL;
  ::apache::thrift::Cpp2Ops<  ::cpp2::Foo>::clear(&MyTransitiveField);
  __isset = {};
}

bool Included::operator==(const Included& rhs) const {
  (void)rhs;
  if (!((MyIntField == rhs.MyIntField))) {
    return false;
  }
  if (!((MyTransitiveField == rhs.MyTransitiveField))) {
    return false;
  }
  return true;
}

const  ::cpp2::Foo& Included::get_MyTransitiveField() const& {
  return MyTransitiveField;
}

 ::cpp2::Foo Included::get_MyTransitiveField() && {
  return std::move(MyTransitiveField);
}

void Included::translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "MyIntField") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_I64;
  }
  else if (_fname == "MyTransitiveField") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
}

void swap(Included& a, Included& b) {
  using ::std::swap;
  swap(a.MyIntField, b.MyIntField);
  swap(a.MyTransitiveField, b.MyTransitiveField);
  swap(a.__isset, b.__isset);
}

template void Included::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Included::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Included::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Included::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Included::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Included::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Included::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Included::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
