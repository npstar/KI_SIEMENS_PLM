// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: configuration_reply_proto.proto

#include "configuration_reply_proto.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

class HelloReplyDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<HelloReply>
      _instance;
} _HelloReply_default_instance_;
namespace protobuf_configuration_5freply_5fproto_2eproto {
static void InitDefaultsHelloReply() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_HelloReply_default_instance_;
    new (ptr) ::HelloReply();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::HelloReply::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_HelloReply =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsHelloReply}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_HelloReply.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::HelloReply, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::HelloReply, message_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::HelloReply)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_HelloReply_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "configuration_reply_proto.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\037configuration_reply_proto.proto\"/\n\nHel"
      "loReply\022!\n\007message\030\001 \001(\0162\020.ConfigTypePro"
      "to*\"\n\017ConfigTypeProto\022\006\n\002OK\020\000\022\007\n\003ERR\020\001b\006"
      "proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 126);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "configuration_reply_proto.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_configuration_5freply_5fproto_2eproto
const ::google::protobuf::EnumDescriptor* ConfigTypeProto_descriptor() {
  protobuf_configuration_5freply_5fproto_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_configuration_5freply_5fproto_2eproto::file_level_enum_descriptors[0];
}
bool ConfigTypeProto_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void HelloReply::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int HelloReply::kMessageFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

HelloReply::HelloReply()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_configuration_5freply_5fproto_2eproto::scc_info_HelloReply.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:HelloReply)
}
HelloReply::HelloReply(const HelloReply& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  message_ = from.message_;
  // @@protoc_insertion_point(copy_constructor:HelloReply)
}

void HelloReply::SharedCtor() {
  message_ = 0;
}

HelloReply::~HelloReply() {
  // @@protoc_insertion_point(destructor:HelloReply)
  SharedDtor();
}

void HelloReply::SharedDtor() {
}

void HelloReply::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* HelloReply::descriptor() {
  ::protobuf_configuration_5freply_5fproto_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_configuration_5freply_5fproto_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const HelloReply& HelloReply::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_configuration_5freply_5fproto_2eproto::scc_info_HelloReply.base);
  return *internal_default_instance();
}


void HelloReply::Clear() {
// @@protoc_insertion_point(message_clear_start:HelloReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  message_ = 0;
  _internal_metadata_.Clear();
}

bool HelloReply::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:HelloReply)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .ConfigTypeProto message = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_message(static_cast< ::ConfigTypeProto >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:HelloReply)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:HelloReply)
  return false;
#undef DO_
}

void HelloReply::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:HelloReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .ConfigTypeProto message = 1;
  if (this->message() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->message(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:HelloReply)
}

::google::protobuf::uint8* HelloReply::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:HelloReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .ConfigTypeProto message = 1;
  if (this->message() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->message(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:HelloReply)
  return target;
}

size_t HelloReply::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:HelloReply)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .ConfigTypeProto message = 1;
  if (this->message() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->message());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void HelloReply::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:HelloReply)
  GOOGLE_DCHECK_NE(&from, this);
  const HelloReply* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const HelloReply>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:HelloReply)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:HelloReply)
    MergeFrom(*source);
  }
}

void HelloReply::MergeFrom(const HelloReply& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:HelloReply)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.message() != 0) {
    set_message(from.message());
  }
}

void HelloReply::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:HelloReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HelloReply::CopyFrom(const HelloReply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:HelloReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HelloReply::IsInitialized() const {
  return true;
}

void HelloReply::Swap(HelloReply* other) {
  if (other == this) return;
  InternalSwap(other);
}
void HelloReply::InternalSwap(HelloReply* other) {
  using std::swap;
  swap(message_, other->message_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata HelloReply::GetMetadata() const {
  protobuf_configuration_5freply_5fproto_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_configuration_5freply_5fproto_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::HelloReply* Arena::CreateMaybeMessage< ::HelloReply >(Arena* arena) {
  return Arena::CreateInternal< ::HelloReply >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)