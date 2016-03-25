/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "module_types.h"
#include <thrift/lib/cpp2/protocol/Protocol.h>
namespace cpp2 {

struct module_constants {
  static constexpr int32_t const myInt_ = 1337;

  static constexpr int32_t myInt() {
    return myInt_;
  }
  // consider using folly::StringPiece instead of std::string whenever possible
  // to referencing this statically allocated string constant, in order to
  // prevent unnecessary allocations

  static constexpr char const * const name_ = "Mark Zuckerberg";

  static constexpr char const * name() {
    return name_;
  }

  static std::vector<std::map<std::string, int32_t>> const& states() {
    static std::vector<std::map<std::string, int32_t>> const instance(std::initializer_list<std::map<std::string, int32_t>>{std::initializer_list<std::pair<const std::string, int32_t>>{{apache::thrift::StringTraits< std::string>::fromStringLiteral("San Diego"), 3211000}, {apache::thrift::StringTraits< std::string>::fromStringLiteral("Sacramento"), 479600}, {apache::thrift::StringTraits< std::string>::fromStringLiteral("SF"), 837400}}, std::initializer_list<std::pair<const std::string, int32_t>>{{apache::thrift::StringTraits< std::string>::fromStringLiteral("New York"), 8406000}, {apache::thrift::StringTraits< std::string>::fromStringLiteral("Albany"), 98400}}});
    return instance;
  }

  static constexpr double const x_ = 1.0;

  static constexpr double x() {
    return x_;
  }

  static constexpr double const y_ = 1000000;

  static constexpr double y() {
    return y_;
  }

  static constexpr double const z_ = 1000000000.0;

  static constexpr double z() {
    return z_;
  }

  static  ::cpp2::Internship const& instagram() {
    static  ::cpp2::Internship const instance( ::cpp2::Internship(::apache::thrift::wrap_argument<1>(12), ::apache::thrift::wrap_argument<2>(apache::thrift::StringTraits< std::string>::fromStringLiteral("Software Engineer")), ::apache::thrift::wrap_argument<3>( ::cpp2::Company::INSTAGRAM)));
    return instance;
  }

  static std::vector< ::cpp2::Range> const& kRanges() {
    static std::vector< ::cpp2::Range> const instance(std::initializer_list< ::cpp2::Range>{ ::cpp2::Range(::apache::thrift::wrap_argument<1>(1), ::apache::thrift::wrap_argument<2>(2)),  ::cpp2::Range(::apache::thrift::wrap_argument<1>(5), ::apache::thrift::wrap_argument<2>(6))});
    return instance;
  }

  static std::vector< ::cpp2::Internship> const& internList() {
    static std::vector< ::cpp2::Internship> const instance(std::initializer_list< ::cpp2::Internship>{ ::cpp2::Internship(::apache::thrift::wrap_argument<1>(12), ::apache::thrift::wrap_argument<2>(apache::thrift::StringTraits< std::string>::fromStringLiteral("Software Engineer")), ::apache::thrift::wrap_argument<3>( ::cpp2::Company::INSTAGRAM)),  ::cpp2::Internship(::apache::thrift::wrap_argument<1>(10), ::apache::thrift::wrap_argument<2>(apache::thrift::StringTraits< std::string>::fromStringLiteral("Sales Intern")), ::apache::thrift::wrap_argument<3>( ::cpp2::Company::FACEBOOK))});
    return instance;
  }
  // consider using folly::StringPiece instead of std::string whenever possible
  // to referencing this statically allocated string constant, in order to
  // prevent unnecessary allocations

  static constexpr char const * const apostrophe_ = "'";

  static constexpr char const * apostrophe() {
    return apostrophe_;
  }
  // consider using folly::StringPiece instead of std::string whenever possible
  // to referencing this statically allocated string constant, in order to
  // prevent unnecessary allocations

  static constexpr char const * const tripleApostrophe_ = "'''";

  static constexpr char const * tripleApostrophe() {
    return tripleApostrophe_;
  }
  // consider using folly::StringPiece instead of std::string whenever possible
  // to referencing this statically allocated string constant, in order to
  // prevent unnecessary allocations

  static constexpr char const * const quotationMark_ = "\"";

  static constexpr char const * quotationMark() {
    return quotationMark_;
  }
  // consider using folly::StringPiece instead of std::string whenever possible
  // to referencing this statically allocated string constant, in order to
  // prevent unnecessary allocations

  static constexpr char const * const backslash_ = "\\";

  static constexpr char const * backslash() {
    return backslash_;
  }
  // consider using folly::StringPiece instead of std::string whenever possible
  // to referencing this statically allocated string constant, in order to
  // prevent unnecessary allocations

  static constexpr char const * const escaped_a_ = "\x61";

  static constexpr char const * escaped_a() {
    return escaped_a_;
  }

  static std::map<std::string, int32_t> const& char2ascii() {
    static std::map<std::string, int32_t> const instance(std::initializer_list<std::pair<const std::string, int32_t>>{{apache::thrift::StringTraits< std::string>::fromStringLiteral("'"), 39}, {apache::thrift::StringTraits< std::string>::fromStringLiteral("\""), 34}, {apache::thrift::StringTraits< std::string>::fromStringLiteral("\\"), 92}, {apache::thrift::StringTraits< std::string>::fromStringLiteral("\x61"), 97}});
    return instance;
  }
};

class __attribute__((__deprecated__("moduleConstants suffers from the 'static initialization order fiasco' (https://isocpp.org/wiki/faq/ctors#static-init-order) and may CRASH you program. Instead, use module_constants::CONSTANT_NAME()"))) moduleConstants {
 public:
  moduleConstants() :
      myInt(1337),
      name(apache::thrift::StringTraits< std::string>::fromStringLiteral("Mark Zuckerberg")),
      states(std::initializer_list<std::map<std::string, int32_t>>{std::initializer_list<std::pair<const std::string, int32_t>>{{apache::thrift::StringTraits< std::string>::fromStringLiteral("San Diego"), 3211000}, {apache::thrift::StringTraits< std::string>::fromStringLiteral("Sacramento"), 479600}, {apache::thrift::StringTraits< std::string>::fromStringLiteral("SF"), 837400}}, std::initializer_list<std::pair<const std::string, int32_t>>{{apache::thrift::StringTraits< std::string>::fromStringLiteral("New York"), 8406000}, {apache::thrift::StringTraits< std::string>::fromStringLiteral("Albany"), 98400}}}),
      x(1.0),
      y(1000000),
      z(1000000000.0),
      instagram( ::cpp2::Internship(::apache::thrift::wrap_argument<1>(12), ::apache::thrift::wrap_argument<2>(apache::thrift::StringTraits< std::string>::fromStringLiteral("Software Engineer")), ::apache::thrift::wrap_argument<3>( ::cpp2::Company::INSTAGRAM))),
      kRanges(std::initializer_list< ::cpp2::Range>{ ::cpp2::Range(::apache::thrift::wrap_argument<1>(1), ::apache::thrift::wrap_argument<2>(2)),  ::cpp2::Range(::apache::thrift::wrap_argument<1>(5), ::apache::thrift::wrap_argument<2>(6))}),
      internList(std::initializer_list< ::cpp2::Internship>{ ::cpp2::Internship(::apache::thrift::wrap_argument<1>(12), ::apache::thrift::wrap_argument<2>(apache::thrift::StringTraits< std::string>::fromStringLiteral("Software Engineer")), ::apache::thrift::wrap_argument<3>( ::cpp2::Company::INSTAGRAM)),  ::cpp2::Internship(::apache::thrift::wrap_argument<1>(10), ::apache::thrift::wrap_argument<2>(apache::thrift::StringTraits< std::string>::fromStringLiteral("Sales Intern")), ::apache::thrift::wrap_argument<3>( ::cpp2::Company::FACEBOOK))}),
      apostrophe(apache::thrift::StringTraits< std::string>::fromStringLiteral("'")),
      tripleApostrophe(apache::thrift::StringTraits< std::string>::fromStringLiteral("'''")),
      quotationMark(apache::thrift::StringTraits< std::string>::fromStringLiteral("\"")),
      backslash(apache::thrift::StringTraits< std::string>::fromStringLiteral("\\")),
      escaped_a(apache::thrift::StringTraits< std::string>::fromStringLiteral("\x61")),
      char2ascii(std::initializer_list<std::pair<const std::string, int32_t>>{{apache::thrift::StringTraits< std::string>::fromStringLiteral("'"), 39}, {apache::thrift::StringTraits< std::string>::fromStringLiteral("\""), 34}, {apache::thrift::StringTraits< std::string>::fromStringLiteral("\\"), 92}, {apache::thrift::StringTraits< std::string>::fromStringLiteral("\x61"), 97}}) {}

  int32_t myInt;

  std::string name;

  std::vector<std::map<std::string, int32_t>> states;

  double x;

  double y;

  double z;

   ::cpp2::Internship instagram;

  std::vector< ::cpp2::Range> kRanges;

  std::vector< ::cpp2::Internship> internList;

  std::string apostrophe;

  std::string tripleApostrophe;

  std::string quotationMark;

  std::string backslash;

  std::string escaped_a;

  std::map<std::string, int32_t> char2ascii;
};

} // cpp2