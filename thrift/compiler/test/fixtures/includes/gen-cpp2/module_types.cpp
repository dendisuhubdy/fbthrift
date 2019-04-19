/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/module_types.tcc"

#include <algorithm>
#include <folly/Indestructible.h>

#include "thrift/compiler/test/fixtures/includes/gen-cpp2/module_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::MyStruct>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "MyIncludedField") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
  else if (_fname == "MyOtherIncludedField") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
  else if (_fname == "MyIncludedInt") {
    fid = 3;
    _ftype = apache::thrift::protocol::T_I64;
  }
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

MyStruct::MyStruct(apache::thrift::FragileConstructor,  ::cpp2::Included MyIncludedField__arg,  ::cpp2::Included MyOtherIncludedField__arg,  ::cpp2::IncludedInt64 MyIncludedInt__arg) :
    MyIncludedField(std::move(MyIncludedField__arg)),
    MyOtherIncludedField(std::move(MyOtherIncludedField__arg)),
    MyIncludedInt(std::move(MyIncludedInt__arg)) {
  __isset.MyIncludedField = true;
  __isset.MyOtherIncludedField = true;
  __isset.MyIncludedInt = true;
}

void MyStruct::__clear() {
  // clear all fields
  ::apache::thrift::Cpp2Ops<  ::cpp2::Included>::clear(&MyIncludedField);
  ::apache::thrift::Cpp2Ops<  ::cpp2::Included>::clear(&MyOtherIncludedField);
  MyIncludedInt = 42LL;
  __isset = {};
}

bool MyStruct::operator==(const MyStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.MyIncludedField == rhs.MyIncludedField)) {
    return false;
  }
  if (!(lhs.MyOtherIncludedField == rhs.MyOtherIncludedField)) {
    return false;
  }
  if (!(lhs.MyIncludedInt == rhs.MyIncludedInt)) {
    return false;
  }
  return true;
}

bool MyStruct::operator<(const MyStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.MyIncludedField == rhs.MyIncludedField)) {
    return lhs.MyIncludedField < rhs.MyIncludedField;
  }
  if (!(lhs.MyOtherIncludedField == rhs.MyOtherIncludedField)) {
    return lhs.MyOtherIncludedField < rhs.MyOtherIncludedField;
  }
  if (!(lhs.MyIncludedInt == rhs.MyIncludedInt)) {
    return lhs.MyIncludedInt < rhs.MyIncludedInt;
  }
  return false;
}

const  ::cpp2::Included& MyStruct::get_MyIncludedField() const& {
  return MyIncludedField;
}

 ::cpp2::Included MyStruct::get_MyIncludedField() && {
  return std::move(MyIncludedField);
}

const  ::cpp2::Included& MyStruct::get_MyOtherIncludedField() const& {
  return MyOtherIncludedField;
}

 ::cpp2::Included MyStruct::get_MyOtherIncludedField() && {
  return std::move(MyOtherIncludedField);
}


void swap(MyStruct& a, MyStruct& b) {
  using ::std::swap;
  swap(a.MyIncludedField, b.MyIncludedField);
  swap(a.MyOtherIncludedField, b.MyOtherIncludedField);
  swap(a.MyIncludedInt, b.MyIncludedInt);
  swap(a.__isset, b.__isset);
}

template void MyStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void MyStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
