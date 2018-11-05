# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: brain_state_proto.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='brain_state_proto.proto',
  package='',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n\x17\x62rain_state_proto.proto\"\xb8\x01\n\x0f\x42rainStateProto\x12\x11\n\tbrainName\x18\x01 \x01(\t\x12\x13\n\x0blast_states\x18\x02 \x03(\x02\x12\x1e\n\x16last_actions_continous\x18\x03 \x03(\x02\x12\x1d\n\x15last_actions_discrete\x18\x04 \x03(\x05\x12\x0e\n\x06states\x18\x05 \x03(\x02\x12\x0e\n\x06reward\x18\x06 \x01(\x02\x12\x10\n\x08memories\x18\x07 \x03(\x05\x12\x0c\n\x04\x64one\x18\x08 \x01(\x05\x62\x06proto3')
)




_BRAINSTATEPROTO = _descriptor.Descriptor(
  name='BrainStateProto',
  full_name='BrainStateProto',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='brainName', full_name='BrainStateProto.brainName', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='last_states', full_name='BrainStateProto.last_states', index=1,
      number=2, type=2, cpp_type=6, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='last_actions_continous', full_name='BrainStateProto.last_actions_continous', index=2,
      number=3, type=2, cpp_type=6, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='last_actions_discrete', full_name='BrainStateProto.last_actions_discrete', index=3,
      number=4, type=5, cpp_type=1, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='states', full_name='BrainStateProto.states', index=4,
      number=5, type=2, cpp_type=6, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='reward', full_name='BrainStateProto.reward', index=5,
      number=6, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='memories', full_name='BrainStateProto.memories', index=6,
      number=7, type=5, cpp_type=1, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='done', full_name='BrainStateProto.done', index=7,
      number=8, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=28,
  serialized_end=212,
)

DESCRIPTOR.message_types_by_name['BrainStateProto'] = _BRAINSTATEPROTO
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

BrainStateProto = _reflection.GeneratedProtocolMessageType('BrainStateProto', (_message.Message,), dict(
  DESCRIPTOR = _BRAINSTATEPROTO,
  __module__ = 'brain_state_proto_pb2'
  # @@protoc_insertion_point(class_scope:BrainStateProto)
  ))
_sym_db.RegisterMessage(BrainStateProto)


# @@protoc_insertion_point(module_scope)