/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <folly/futures/Future.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp2/ServiceIncludes.h>
#include <thrift/lib/cpp2/async/FutureRequest.h>
#include <thrift/lib/cpp2/async/HeaderChannel.h>
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/ExtraServiceAsyncClient.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/extra_services_types.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/ParamService.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/module_types.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace extra { namespace svc {

class ExtraServiceSvAsyncIf {
 public:
  virtual ~ExtraServiceSvAsyncIf() {}
  virtual void async_eb_simple_function(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback) = 0;
  virtual folly::Future<bool> future_simple_function() = 0;
  virtual folly::SemiFuture<bool> semifuture_simple_function() = 0;
  virtual void async_eb_throws_function(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) = 0;
  virtual folly::Future<folly::Unit> future_throws_function() = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_throws_function() = 0;
  virtual void async_eb_throws_function2(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback, bool param1) = 0;
  virtual folly::Future<bool> future_throws_function2(bool param1) = 0;
  virtual folly::SemiFuture<bool> semifuture_throws_function2(bool param1) = 0;
  virtual void async_eb_throws_function3(std::unique_ptr<apache::thrift::HandlerCallback<std::map<int32_t, std::string>>> callback, bool param1, const std::string& param2) = 0;
  virtual folly::Future<std::map<int32_t, std::string>> future_throws_function3(bool param1, const std::string& param2) = 0;
  virtual folly::SemiFuture<std::map<int32_t, std::string>> semifuture_throws_function3(bool param1, const std::string& param2) = 0;
  virtual void async_eb_oneway_void_ret(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback) = 0;
  virtual folly::Future<folly::Unit> future_oneway_void_ret() = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_oneway_void_ret() = 0;
  virtual void async_eb_oneway_void_ret_i32_i32_i32_i32_i32_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, int32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5) = 0;
  virtual folly::Future<folly::Unit> future_oneway_void_ret_i32_i32_i32_i32_i32_param(int32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5) = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_oneway_void_ret_i32_i32_i32_i32_i32_param(int32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5) = 0;
  virtual void async_eb_oneway_void_ret_map_setlist_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, const std::map<std::string, int64_t>& param1, const std::set<std::vector<std::string>>& param2) = 0;
  virtual folly::Future<folly::Unit> future_oneway_void_ret_map_setlist_param(const std::map<std::string, int64_t>& param1, const std::set<std::vector<std::string>>& param2) = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_oneway_void_ret_map_setlist_param(const std::map<std::string, int64_t>& param1, const std::set<std::vector<std::string>>& param2) = 0;
  virtual void async_eb_oneway_void_ret_struct_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, const  ::some::valid::ns::MyStruct& param1) = 0;
  virtual folly::Future<folly::Unit> future_oneway_void_ret_struct_param(const  ::some::valid::ns::MyStruct& param1) = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_oneway_void_ret_struct_param(const  ::some::valid::ns::MyStruct& param1) = 0;
  virtual void async_eb_oneway_void_ret_listunion_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, const std::vector< ::some::valid::ns::ComplexUnion>& param1) = 0;
  virtual folly::Future<folly::Unit> future_oneway_void_ret_listunion_param(const std::vector< ::some::valid::ns::ComplexUnion>& param1) = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_oneway_void_ret_listunion_param(const std::vector< ::some::valid::ns::ComplexUnion>& param1) = 0;
};

class ExtraServiceAsyncProcessor;

class ExtraServiceSvIf : public ExtraServiceSvAsyncIf, virtual public ::some::valid::ns::ParamServiceSvIf {
 public:
  typedef ExtraServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  virtual bool simple_function();
  folly::Future<bool> future_simple_function() override;
  folly::SemiFuture<bool> semifuture_simple_function() override;
  void async_eb_simple_function(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback) override;
  virtual void throws_function();
  folly::Future<folly::Unit> future_throws_function() override;
  folly::SemiFuture<folly::Unit> semifuture_throws_function() override;
  void async_eb_throws_function(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) override;
  virtual bool throws_function2(bool /*param1*/);
  folly::Future<bool> future_throws_function2(bool param1) override;
  folly::SemiFuture<bool> semifuture_throws_function2(bool param1) override;
  void async_eb_throws_function2(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback, bool param1) override;
  virtual void throws_function3(std::map<int32_t, std::string>& /*_return*/, bool /*param1*/, const std::string& /*param2*/);
  folly::Future<std::map<int32_t, std::string>> future_throws_function3(bool param1, const std::string& param2) override;
  folly::SemiFuture<std::map<int32_t, std::string>> semifuture_throws_function3(bool param1, const std::string& param2) override;
  void async_eb_throws_function3(std::unique_ptr<apache::thrift::HandlerCallback<std::map<int32_t, std::string>>> callback, bool param1, const std::string& param2) override;
  virtual void oneway_void_ret();
  folly::Future<folly::Unit> future_oneway_void_ret() override;
  folly::SemiFuture<folly::Unit> semifuture_oneway_void_ret() override;
  void async_eb_oneway_void_ret(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback) override;
  virtual void oneway_void_ret_i32_i32_i32_i32_i32_param(int32_t /*param1*/, int32_t /*param2*/, int32_t /*param3*/, int32_t /*param4*/, int32_t /*param5*/);
  folly::Future<folly::Unit> future_oneway_void_ret_i32_i32_i32_i32_i32_param(int32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5) override;
  folly::SemiFuture<folly::Unit> semifuture_oneway_void_ret_i32_i32_i32_i32_i32_param(int32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5) override;
  void async_eb_oneway_void_ret_i32_i32_i32_i32_i32_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, int32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5) override;
  virtual void oneway_void_ret_map_setlist_param(const std::map<std::string, int64_t>& /*param1*/, const std::set<std::vector<std::string>>& /*param2*/);
  folly::Future<folly::Unit> future_oneway_void_ret_map_setlist_param(const std::map<std::string, int64_t>& param1, const std::set<std::vector<std::string>>& param2) override;
  folly::SemiFuture<folly::Unit> semifuture_oneway_void_ret_map_setlist_param(const std::map<std::string, int64_t>& param1, const std::set<std::vector<std::string>>& param2) override;
  void async_eb_oneway_void_ret_map_setlist_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, const std::map<std::string, int64_t>& param1, const std::set<std::vector<std::string>>& param2) override;
  virtual void oneway_void_ret_struct_param(const  ::some::valid::ns::MyStruct& /*param1*/);
  folly::Future<folly::Unit> future_oneway_void_ret_struct_param(const  ::some::valid::ns::MyStruct& param1) override;
  folly::SemiFuture<folly::Unit> semifuture_oneway_void_ret_struct_param(const  ::some::valid::ns::MyStruct& param1) override;
  void async_eb_oneway_void_ret_struct_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, const  ::some::valid::ns::MyStruct& param1) override;
  virtual void oneway_void_ret_listunion_param(const std::vector< ::some::valid::ns::ComplexUnion>& /*param1*/);
  folly::Future<folly::Unit> future_oneway_void_ret_listunion_param(const std::vector< ::some::valid::ns::ComplexUnion>& param1) override;
  folly::SemiFuture<folly::Unit> semifuture_oneway_void_ret_listunion_param(const std::vector< ::some::valid::ns::ComplexUnion>& param1) override;
  void async_eb_oneway_void_ret_listunion_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, const std::vector< ::some::valid::ns::ComplexUnion>& param1) override;
};

class ExtraServiceSvNull : public ExtraServiceSvIf, virtual public ::some::valid::ns::ParamServiceSvIf {
 public:
};

class ExtraServiceAsyncProcessor : public ::some::valid::ns::ParamServiceAsyncProcessor {
 public:
  const char* getServiceName() override;
  using BaseAsyncProcessor = ::some::valid::ns::ParamServiceAsyncProcessor;
 protected:
  ExtraServiceSvIf* iface_;
  folly::Optional<std::string> getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) override;
 public:
  void process(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 protected:
  bool isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) override;
 private:
  static std::unordered_set<std::string> onewayMethods_;
  static std::unordered_map<std::string, int16_t> cacheKeyMap_;
 public:
  using BinaryProtocolProcessFunc = ProcessFunc<ExtraServiceAsyncProcessor, apache::thrift::BinaryProtocolReader>;
  using BinaryProtocolProcessMap = ProcessMap<BinaryProtocolProcessFunc>;
  static const ExtraServiceAsyncProcessor::BinaryProtocolProcessMap& getBinaryProtocolProcessMap();
 private:
  static const ExtraServiceAsyncProcessor::BinaryProtocolProcessMap binaryProcessMap_;
 public:
  using CompactProtocolProcessFunc = ProcessFunc<ExtraServiceAsyncProcessor, apache::thrift::CompactProtocolReader>;
  using CompactProtocolProcessMap = ProcessMap<CompactProtocolProcessFunc>;
  static const ExtraServiceAsyncProcessor::CompactProtocolProcessMap& getCompactProtocolProcessMap();
 private:
  static const ExtraServiceAsyncProcessor::CompactProtocolProcessMap compactProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_simple_function(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_simple_function(int32_t protoSeqId, apache::thrift::ContextStack* ctx, bool const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_simple_function(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_throws_function(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_throws_function(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_throws_function(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_throws_function2(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_throws_function2(int32_t protoSeqId, apache::thrift::ContextStack* ctx, bool const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_throws_function2(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_throws_function3(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_throws_function3(int32_t protoSeqId, apache::thrift::ContextStack* ctx, std::map<int32_t, std::string> const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_throws_function3(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_oneway_void_ret(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_oneway_void_ret_i32_i32_i32_i32_i32_param(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_oneway_void_ret_map_setlist_param(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_oneway_void_ret_struct_param(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_oneway_void_ret_listunion_param(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
 public:
  ExtraServiceAsyncProcessor(ExtraServiceSvIf* iface) :
      ::some::valid::ns::ParamServiceAsyncProcessor(iface),
      iface_(iface) {}

  virtual ~ExtraServiceAsyncProcessor() {}
};

}} // extra::svc
namespace apache { namespace thrift {

}} // apache::thrift
