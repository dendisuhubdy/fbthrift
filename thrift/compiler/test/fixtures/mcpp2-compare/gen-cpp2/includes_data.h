/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <array>
#include <cstddef>
#include <thrift/lib/cpp/Thrift.h>

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/includes_types.h"

namespace a { namespace different { namespace ns {

struct _AnEnumEnumDataStorage {
  using type = AnEnum;
  static constexpr const std::size_t size = 2;
  static constexpr const std::array<AnEnum, 2> values = {{
    AnEnum::FIELDA,
    AnEnum::FIELDB,
  }};
  static constexpr const std::array<folly::StringPiece, 2> names = {{
    "FIELDA",
    "FIELDB",
  }};
};

}}} // a::different::ns
namespace apache { namespace thrift {

template <> struct TEnumDataStorage<::a::different::ns::AnEnum> {
  using storage_type = ::a::different::ns::_AnEnumEnumDataStorage;
};

}} // apache::thrift

