# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
import grpc

from FAPSPLMAgentRPC.communicatorapi_python import academy_action_proto_pb2 as academy__action__proto__pb2
from FAPSPLMAgentRPC.communicatorapi_python import academy_configuration_proto_pb2 as academy__configuration__proto__pb2
from FAPSPLMAgentRPC.communicatorapi_python import academy_state_proto_pb2 as academy__state__proto__pb2
from FAPSPLMAgentRPC.communicatorapi_python import handle_type_proto_pb2 as handle__type__proto__pb2


class FAPSPLMServicesStub(object):
  """The greeting service definition.
  """

  def __init__(self, channel):
    """Constructor.

    Args:
      channel: A grpc.Channel.
    """
    self.FAPSAGENT_Initialize = channel.unary_unary(
        '/communicator_objects.FAPSPLMServices/FAPSAGENT_Initialize',
        request_serializer=academy__configuration__proto__pb2.AcademyConfigProto.SerializeToString,
        response_deserializer=handle__type__proto__pb2.HandleTypeProto.FromString,
        )
    self.FAPSAGENT_Clear = channel.unary_unary(
        '/communicator_objects.FAPSPLMServices/FAPSAGENT_Clear',
        request_serializer=handle__type__proto__pb2.HandleTypeProto.SerializeToString,
        response_deserializer=handle__type__proto__pb2.HandleTypeProto.FromString,
        )
    self.FAPSAGENT_Start = channel.unary_unary(
        '/communicator_objects.FAPSPLMServices/FAPSAGENT_Start',
        request_serializer=handle__type__proto__pb2.HandleTypeProto.SerializeToString,
        response_deserializer=handle__type__proto__pb2.HandleTypeProto.FromString,
        )
    self.FAPSAGENT_Stop = channel.unary_unary(
        '/communicator_objects.FAPSPLMServices/FAPSAGENT_Stop',
        request_serializer=handle__type__proto__pb2.HandleTypeProto.SerializeToString,
        response_deserializer=handle__type__proto__pb2.HandleTypeProto.FromString,
        )
    self.FAPSAGENT_getAction = channel.unary_unary(
        '/communicator_objects.FAPSPLMServices/FAPSAGENT_getAction',
        request_serializer=academy__state__proto__pb2.AcademyStateProto.SerializeToString,
        response_deserializer=academy__action__proto__pb2.AcademyActionProto.FromString,
        )


class FAPSPLMServicesServicer(object):
  """The greeting service definition.
  """

  def FAPSAGENT_Initialize(self, request, context):
    # missing associated documentation comment in .proto file
    pass
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def FAPSAGENT_Clear(self, request, context):
    # missing associated documentation comment in .proto file
    pass
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def FAPSAGENT_Start(self, request, context):
    # missing associated documentation comment in .proto file
    pass
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def FAPSAGENT_Stop(self, request, context):
    # missing associated documentation comment in .proto file
    pass
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def FAPSAGENT_getAction(self, request, context):
    # missing associated documentation comment in .proto file
    pass
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')


def add_FAPSPLMServicesServicer_to_server(servicer, server):
  rpc_method_handlers = {
      'FAPSAGENT_Initialize': grpc.unary_unary_rpc_method_handler(
          servicer.FAPSAGENT_Initialize,
          request_deserializer=academy__configuration__proto__pb2.AcademyConfigProto.FromString,
          response_serializer=handle__type__proto__pb2.HandleTypeProto.SerializeToString,
      ),
      'FAPSAGENT_Clear': grpc.unary_unary_rpc_method_handler(
          servicer.FAPSAGENT_Clear,
          request_deserializer=handle__type__proto__pb2.HandleTypeProto.FromString,
          response_serializer=handle__type__proto__pb2.HandleTypeProto.SerializeToString,
      ),
      'FAPSAGENT_Start': grpc.unary_unary_rpc_method_handler(
          servicer.FAPSAGENT_Start,
          request_deserializer=handle__type__proto__pb2.HandleTypeProto.FromString,
          response_serializer=handle__type__proto__pb2.HandleTypeProto.SerializeToString,
      ),
      'FAPSAGENT_Stop': grpc.unary_unary_rpc_method_handler(
          servicer.FAPSAGENT_Stop,
          request_deserializer=handle__type__proto__pb2.HandleTypeProto.FromString,
          response_serializer=handle__type__proto__pb2.HandleTypeProto.SerializeToString,
      ),
      'FAPSAGENT_getAction': grpc.unary_unary_rpc_method_handler(
          servicer.FAPSAGENT_getAction,
          request_deserializer=academy__state__proto__pb2.AcademyStateProto.FromString,
          response_serializer=academy__action__proto__pb2.AcademyActionProto.SerializeToString,
      ),
  }
  generic_handler = grpc.method_handlers_generic_handler(
      'communicator_objects.FAPSPLMServices', rpc_method_handlers)
  server.add_generic_rpc_handlers((generic_handler,))