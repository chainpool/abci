// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: types/types.proto

#include "types.pb.h"
#include "types.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace types {

static const char* ABCIApplication_method_names[] = {
  "/types.ABCIApplication/Echo",
  "/types.ABCIApplication/Flush",
  "/types.ABCIApplication/Info",
  "/types.ABCIApplication/SetOption",
  "/types.ABCIApplication/DeliverTx",
  "/types.ABCIApplication/CheckTx",
  "/types.ABCIApplication/Query",
  "/types.ABCIApplication/Commit",
  "/types.ABCIApplication/InitChain",
  "/types.ABCIApplication/BeginBlock",
  "/types.ABCIApplication/EndBlock",
};

std::unique_ptr< ABCIApplication::Stub> ABCIApplication::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< ABCIApplication::Stub> stub(new ABCIApplication::Stub(channel));
  return stub;
}

ABCIApplication::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Echo_(ABCIApplication_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Flush_(ABCIApplication_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Info_(ABCIApplication_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetOption_(ABCIApplication_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeliverTx_(ABCIApplication_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CheckTx_(ABCIApplication_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Query_(ABCIApplication_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Commit_(ABCIApplication_method_names[7], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_InitChain_(ABCIApplication_method_names[8], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_BeginBlock_(ABCIApplication_method_names[9], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_EndBlock_(ABCIApplication_method_names[10], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status ABCIApplication::Stub::Echo(::grpc::ClientContext* context, const ::types::RequestEcho& request, ::types::ResponseEcho* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Echo_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::types::ResponseEcho>* ABCIApplication::Stub::AsyncEchoRaw(::grpc::ClientContext* context, const ::types::RequestEcho& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::types::ResponseEcho>::Create(channel_.get(), cq, rpcmethod_Echo_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::types::ResponseEcho>* ABCIApplication::Stub::PrepareAsyncEchoRaw(::grpc::ClientContext* context, const ::types::RequestEcho& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::types::ResponseEcho>::Create(channel_.get(), cq, rpcmethod_Echo_, context, request, false);
}

::grpc::Status ABCIApplication::Stub::Flush(::grpc::ClientContext* context, const ::types::RequestFlush& request, ::types::ResponseFlush* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Flush_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::types::ResponseFlush>* ABCIApplication::Stub::AsyncFlushRaw(::grpc::ClientContext* context, const ::types::RequestFlush& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::types::ResponseFlush>::Create(channel_.get(), cq, rpcmethod_Flush_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::types::ResponseFlush>* ABCIApplication::Stub::PrepareAsyncFlushRaw(::grpc::ClientContext* context, const ::types::RequestFlush& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::types::ResponseFlush>::Create(channel_.get(), cq, rpcmethod_Flush_, context, request, false);
}

::grpc::Status ABCIApplication::Stub::Info(::grpc::ClientContext* context, const ::types::RequestInfo& request, ::types::ResponseInfo* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Info_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::types::ResponseInfo>* ABCIApplication::Stub::AsyncInfoRaw(::grpc::ClientContext* context, const ::types::RequestInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::types::ResponseInfo>::Create(channel_.get(), cq, rpcmethod_Info_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::types::ResponseInfo>* ABCIApplication::Stub::PrepareAsyncInfoRaw(::grpc::ClientContext* context, const ::types::RequestInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::types::ResponseInfo>::Create(channel_.get(), cq, rpcmethod_Info_, context, request, false);
}

::grpc::Status ABCIApplication::Stub::SetOption(::grpc::ClientContext* context, const ::types::RequestSetOption& request, ::types::ResponseSetOption* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SetOption_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::types::ResponseSetOption>* ABCIApplication::Stub::AsyncSetOptionRaw(::grpc::ClientContext* context, const ::types::RequestSetOption& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::types::ResponseSetOption>::Create(channel_.get(), cq, rpcmethod_SetOption_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::types::ResponseSetOption>* ABCIApplication::Stub::PrepareAsyncSetOptionRaw(::grpc::ClientContext* context, const ::types::RequestSetOption& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::types::ResponseSetOption>::Create(channel_.get(), cq, rpcmethod_SetOption_, context, request, false);
}

::grpc::Status ABCIApplication::Stub::DeliverTx(::grpc::ClientContext* context, const ::types::RequestDeliverTx& request, ::types::ResponseDeliverTx* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeliverTx_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::types::ResponseDeliverTx>* ABCIApplication::Stub::AsyncDeliverTxRaw(::grpc::ClientContext* context, const ::types::RequestDeliverTx& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::types::ResponseDeliverTx>::Create(channel_.get(), cq, rpcmethod_DeliverTx_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::types::ResponseDeliverTx>* ABCIApplication::Stub::PrepareAsyncDeliverTxRaw(::grpc::ClientContext* context, const ::types::RequestDeliverTx& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::types::ResponseDeliverTx>::Create(channel_.get(), cq, rpcmethod_DeliverTx_, context, request, false);
}

::grpc::Status ABCIApplication::Stub::CheckTx(::grpc::ClientContext* context, const ::types::RequestCheckTx& request, ::types::ResponseCheckTx* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CheckTx_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::types::ResponseCheckTx>* ABCIApplication::Stub::AsyncCheckTxRaw(::grpc::ClientContext* context, const ::types::RequestCheckTx& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::types::ResponseCheckTx>::Create(channel_.get(), cq, rpcmethod_CheckTx_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::types::ResponseCheckTx>* ABCIApplication::Stub::PrepareAsyncCheckTxRaw(::grpc::ClientContext* context, const ::types::RequestCheckTx& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::types::ResponseCheckTx>::Create(channel_.get(), cq, rpcmethod_CheckTx_, context, request, false);
}

::grpc::Status ABCIApplication::Stub::Query(::grpc::ClientContext* context, const ::types::RequestQuery& request, ::types::ResponseQuery* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Query_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::types::ResponseQuery>* ABCIApplication::Stub::AsyncQueryRaw(::grpc::ClientContext* context, const ::types::RequestQuery& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::types::ResponseQuery>::Create(channel_.get(), cq, rpcmethod_Query_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::types::ResponseQuery>* ABCIApplication::Stub::PrepareAsyncQueryRaw(::grpc::ClientContext* context, const ::types::RequestQuery& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::types::ResponseQuery>::Create(channel_.get(), cq, rpcmethod_Query_, context, request, false);
}

::grpc::Status ABCIApplication::Stub::Commit(::grpc::ClientContext* context, const ::types::RequestCommit& request, ::types::ResponseCommit* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Commit_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::types::ResponseCommit>* ABCIApplication::Stub::AsyncCommitRaw(::grpc::ClientContext* context, const ::types::RequestCommit& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::types::ResponseCommit>::Create(channel_.get(), cq, rpcmethod_Commit_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::types::ResponseCommit>* ABCIApplication::Stub::PrepareAsyncCommitRaw(::grpc::ClientContext* context, const ::types::RequestCommit& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::types::ResponseCommit>::Create(channel_.get(), cq, rpcmethod_Commit_, context, request, false);
}

::grpc::Status ABCIApplication::Stub::InitChain(::grpc::ClientContext* context, const ::types::RequestInitChain& request, ::types::ResponseInitChain* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_InitChain_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::types::ResponseInitChain>* ABCIApplication::Stub::AsyncInitChainRaw(::grpc::ClientContext* context, const ::types::RequestInitChain& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::types::ResponseInitChain>::Create(channel_.get(), cq, rpcmethod_InitChain_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::types::ResponseInitChain>* ABCIApplication::Stub::PrepareAsyncInitChainRaw(::grpc::ClientContext* context, const ::types::RequestInitChain& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::types::ResponseInitChain>::Create(channel_.get(), cq, rpcmethod_InitChain_, context, request, false);
}

::grpc::Status ABCIApplication::Stub::BeginBlock(::grpc::ClientContext* context, const ::types::RequestBeginBlock& request, ::types::ResponseBeginBlock* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_BeginBlock_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::types::ResponseBeginBlock>* ABCIApplication::Stub::AsyncBeginBlockRaw(::grpc::ClientContext* context, const ::types::RequestBeginBlock& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::types::ResponseBeginBlock>::Create(channel_.get(), cq, rpcmethod_BeginBlock_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::types::ResponseBeginBlock>* ABCIApplication::Stub::PrepareAsyncBeginBlockRaw(::grpc::ClientContext* context, const ::types::RequestBeginBlock& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::types::ResponseBeginBlock>::Create(channel_.get(), cq, rpcmethod_BeginBlock_, context, request, false);
}

::grpc::Status ABCIApplication::Stub::EndBlock(::grpc::ClientContext* context, const ::types::RequestEndBlock& request, ::types::ResponseEndBlock* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_EndBlock_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::types::ResponseEndBlock>* ABCIApplication::Stub::AsyncEndBlockRaw(::grpc::ClientContext* context, const ::types::RequestEndBlock& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::types::ResponseEndBlock>::Create(channel_.get(), cq, rpcmethod_EndBlock_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::types::ResponseEndBlock>* ABCIApplication::Stub::PrepareAsyncEndBlockRaw(::grpc::ClientContext* context, const ::types::RequestEndBlock& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::types::ResponseEndBlock>::Create(channel_.get(), cq, rpcmethod_EndBlock_, context, request, false);
}

ABCIApplication::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ABCIApplication_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ABCIApplication::Service, ::types::RequestEcho, ::types::ResponseEcho>(
          std::mem_fn(&ABCIApplication::Service::Echo), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ABCIApplication_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ABCIApplication::Service, ::types::RequestFlush, ::types::ResponseFlush>(
          std::mem_fn(&ABCIApplication::Service::Flush), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ABCIApplication_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ABCIApplication::Service, ::types::RequestInfo, ::types::ResponseInfo>(
          std::mem_fn(&ABCIApplication::Service::Info), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ABCIApplication_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ABCIApplication::Service, ::types::RequestSetOption, ::types::ResponseSetOption>(
          std::mem_fn(&ABCIApplication::Service::SetOption), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ABCIApplication_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ABCIApplication::Service, ::types::RequestDeliverTx, ::types::ResponseDeliverTx>(
          std::mem_fn(&ABCIApplication::Service::DeliverTx), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ABCIApplication_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ABCIApplication::Service, ::types::RequestCheckTx, ::types::ResponseCheckTx>(
          std::mem_fn(&ABCIApplication::Service::CheckTx), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ABCIApplication_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ABCIApplication::Service, ::types::RequestQuery, ::types::ResponseQuery>(
          std::mem_fn(&ABCIApplication::Service::Query), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ABCIApplication_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ABCIApplication::Service, ::types::RequestCommit, ::types::ResponseCommit>(
          std::mem_fn(&ABCIApplication::Service::Commit), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ABCIApplication_method_names[8],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ABCIApplication::Service, ::types::RequestInitChain, ::types::ResponseInitChain>(
          std::mem_fn(&ABCIApplication::Service::InitChain), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ABCIApplication_method_names[9],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ABCIApplication::Service, ::types::RequestBeginBlock, ::types::ResponseBeginBlock>(
          std::mem_fn(&ABCIApplication::Service::BeginBlock), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ABCIApplication_method_names[10],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ABCIApplication::Service, ::types::RequestEndBlock, ::types::ResponseEndBlock>(
          std::mem_fn(&ABCIApplication::Service::EndBlock), this)));
}

ABCIApplication::Service::~Service() {
}

::grpc::Status ABCIApplication::Service::Echo(::grpc::ServerContext* context, const ::types::RequestEcho* request, ::types::ResponseEcho* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ABCIApplication::Service::Flush(::grpc::ServerContext* context, const ::types::RequestFlush* request, ::types::ResponseFlush* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ABCIApplication::Service::Info(::grpc::ServerContext* context, const ::types::RequestInfo* request, ::types::ResponseInfo* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ABCIApplication::Service::SetOption(::grpc::ServerContext* context, const ::types::RequestSetOption* request, ::types::ResponseSetOption* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ABCIApplication::Service::DeliverTx(::grpc::ServerContext* context, const ::types::RequestDeliverTx* request, ::types::ResponseDeliverTx* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ABCIApplication::Service::CheckTx(::grpc::ServerContext* context, const ::types::RequestCheckTx* request, ::types::ResponseCheckTx* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ABCIApplication::Service::Query(::grpc::ServerContext* context, const ::types::RequestQuery* request, ::types::ResponseQuery* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ABCIApplication::Service::Commit(::grpc::ServerContext* context, const ::types::RequestCommit* request, ::types::ResponseCommit* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ABCIApplication::Service::InitChain(::grpc::ServerContext* context, const ::types::RequestInitChain* request, ::types::ResponseInitChain* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ABCIApplication::Service::BeginBlock(::grpc::ServerContext* context, const ::types::RequestBeginBlock* request, ::types::ResponseBeginBlock* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ABCIApplication::Service::EndBlock(::grpc::ServerContext* context, const ::types::RequestEndBlock* request, ::types::ResponseEndBlock* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace types

