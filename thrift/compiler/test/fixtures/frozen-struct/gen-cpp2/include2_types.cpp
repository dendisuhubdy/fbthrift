/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "src/gen-cpp2/include2_types.h"
#include "src/gen-cpp2/include2_types.tcc"

#include <algorithm>
#include <folly/Indestructible.h>

#include "src/gen-cpp2/include2_data.h"

namespace some { namespace ns {

IncludedB::IncludedB(apache::thrift::FragileConstructor, int32_t i32Field__arg, std::string strField__arg) :
    i32Field(std::move(i32Field__arg)),
    strField(std::move(strField__arg)) {
  __isset.i32Field = true;
  __isset.strField = true;
}

void IncludedB::__clear() {
  // clear all fields
  i32Field = 0;
  strField = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  __isset = {};
}

bool IncludedB::operator==(const IncludedB& rhs) const {
  (void)rhs;
  if (!((i32Field == rhs.i32Field))) {
    return false;
  }
  if (!((strField == rhs.strField))) {
    return false;
  }
  return true;
}

void IncludedB::translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "i32Field") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "strField") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_STRING;
  }
}

void swap(IncludedB& a, IncludedB& b) {
  using ::std::swap;
  swap(a.i32Field, b.i32Field);
  swap(a.strField, b.strField);
  swap(a.__isset, b.__isset);
}

template void IncludedB::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t IncludedB::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t IncludedB::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t IncludedB::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void IncludedB::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t IncludedB::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t IncludedB::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t IncludedB::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // some::ns
