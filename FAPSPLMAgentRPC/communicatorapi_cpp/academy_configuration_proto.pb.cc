// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: academy_configuration_proto.proto

#include "academy_configuration_proto.pb.h"

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

namespace protobuf_brain_5fparameter_5fproto_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_brain_5fparameter_5fproto_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_BrainParametersProto;
}  // namespace protobuf_brain_5fparameter_5fproto_2eproto
class AcademyConfigProtoDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AcademyConfigProto>
      _instance;
} _AcademyConfigProto_default_instance_;
namespace protobuf_academy_5fconfiguration_5fproto_2eproto {
static void InitDefaultsAcademyConfigProto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_AcademyConfigProto_default_instance_;
    new (ptr) ::AcademyConfigProto();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::AcademyConfigProto::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_AcademyConfigProto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsAcademyConfigProto}, {
      &protobuf_brain_5fparameter_5fproto_2eproto::scc_info_BrainParametersProto.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_AcademyConfigProto.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::AcademyConfigProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::AcademyConfigProto, academyname_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::AcademyConfigProto, braincount_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::AcademyConfigProto, resetparametersize_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::AcademyConfigProto, resetparameters_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::AcademyConfigProto, brainparameter_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::AcademyConfigProto)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_AcademyConfigProto_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "academy_configuration_proto.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
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
      "\n!academy_configuration_proto.proto\032\033bra"
      "in_parameter_proto.proto\"\241\001\n\022AcademyConf"
      "igProto\022\023\n\013AcademyName\030\001 \001(\t\022\022\n\nbrainCou"
      "nt\030\002 \001(\005\022\032\n\022resetParameterSize\030\003 \001(\005\022\027\n\017"
      "resetParameters\030\004 \003(\002\022-\n\016BrainParameter\030"
      "\006 \003(\0132\025.BrainParametersProtob\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 236);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "academy_configuration_proto.proto", &protobuf_RegisterTypes);
  ::protobuf_brain_5fparameter_5fproto_2eproto::AddDescriptors();
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
}  // namespace protobuf_academy_5fconfiguration_5fproto_2eproto

// ===================================================================

void AcademyConfigProto::InitAsDefaultInstance() {
}
void AcademyConfigProto::clear_brainparameter() {
  brainparameter_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AcademyConfigProto::kAcademyNameFieldNumber;
const int AcademyConfigProto::kBrainCountFieldNumber;
const int AcademyConfigProto::kResetParameterSizeFieldNumber;
const int AcademyConfigProto::kResetParametersFieldNumber;
const int AcademyConfigProto::kBrainParameterFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AcademyConfigProto::AcademyConfigProto()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_academy_5fconfiguration_5fproto_2eproto::scc_info_AcademyConfigProto.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:AcademyConfigProto)
}
AcademyConfigProto::AcademyConfigProto(const AcademyConfigProto& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      resetparameters_(from.resetparameters_),
      brainparameter_(from.brainparameter_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  academyname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.academyname().size() > 0) {
    academyname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.academyname_);
  }
  ::memcpy(&braincount_, &from.braincount_,
    static_cast<size_t>(reinterpret_cast<char*>(&resetparametersize_) -
    reinterpret_cast<char*>(&braincount_)) + sizeof(resetparametersize_));
  // @@protoc_insertion_point(copy_constructor:AcademyConfigProto)
}

void AcademyConfigProto::SharedCtor() {
  academyname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&braincount_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&resetparametersize_) -
      reinterpret_cast<char*>(&braincount_)) + sizeof(resetparametersize_));
}

AcademyConfigProto::~AcademyConfigProto() {
  // @@protoc_insertion_point(destructor:AcademyConfigProto)
  SharedDtor();
}

void AcademyConfigProto::SharedDtor() {
  academyname_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void AcademyConfigProto::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* AcademyConfigProto::descriptor() {
  ::protobuf_academy_5fconfiguration_5fproto_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_academy_5fconfiguration_5fproto_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AcademyConfigProto& AcademyConfigProto::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_academy_5fconfiguration_5fproto_2eproto::scc_info_AcademyConfigProto.base);
  return *internal_default_instance();
}


void AcademyConfigProto::Clear() {
// @@protoc_insertion_point(message_clear_start:AcademyConfigProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  resetparameters_.Clear();
  brainparameter_.Clear();
  academyname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&braincount_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&resetparametersize_) -
      reinterpret_cast<char*>(&braincount_)) + sizeof(resetparametersize_));
  _internal_metadata_.Clear();
}

bool AcademyConfigProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:AcademyConfigProto)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string AcademyName = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_academyname()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->academyname().data(), static_cast<int>(this->academyname().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "AcademyConfigProto.AcademyName"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 brainCount = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &braincount_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 resetParameterSize = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &resetparametersize_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated float resetParameters = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_resetparameters())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(37u /* 37 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 34u, input, this->mutable_resetparameters())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .BrainParametersProto BrainParameter = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_brainparameter()));
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
  // @@protoc_insertion_point(parse_success:AcademyConfigProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:AcademyConfigProto)
  return false;
#undef DO_
}

void AcademyConfigProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:AcademyConfigProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string AcademyName = 1;
  if (this->academyname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->academyname().data(), static_cast<int>(this->academyname().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "AcademyConfigProto.AcademyName");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->academyname(), output);
  }

  // int32 brainCount = 2;
  if (this->braincount() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->braincount(), output);
  }

  // int32 resetParameterSize = 3;
  if (this->resetparametersize() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->resetparametersize(), output);
  }

  // repeated float resetParameters = 4;
  if (this->resetparameters_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(4, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _resetparameters_cached_byte_size_));
    ::google::protobuf::internal::WireFormatLite::WriteFloatArray(
      this->resetparameters().data(), this->resetparameters_size(), output);
  }

  // repeated .BrainParametersProto BrainParameter = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->brainparameter_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6,
      this->brainparameter(static_cast<int>(i)),
      output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:AcademyConfigProto)
}

::google::protobuf::uint8* AcademyConfigProto::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:AcademyConfigProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string AcademyName = 1;
  if (this->academyname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->academyname().data(), static_cast<int>(this->academyname().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "AcademyConfigProto.AcademyName");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->academyname(), target);
  }

  // int32 brainCount = 2;
  if (this->braincount() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->braincount(), target);
  }

  // int32 resetParameterSize = 3;
  if (this->resetparametersize() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->resetparametersize(), target);
  }

  // repeated float resetParameters = 4;
  if (this->resetparameters_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      4,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::int32>(
            _resetparameters_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->resetparameters_, target);
  }

  // repeated .BrainParametersProto BrainParameter = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->brainparameter_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        6, this->brainparameter(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcademyConfigProto)
  return target;
}

size_t AcademyConfigProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcademyConfigProto)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated float resetParameters = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->resetparameters_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _resetparameters_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated .BrainParametersProto BrainParameter = 6;
  {
    unsigned int count = static_cast<unsigned int>(this->brainparameter_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->brainparameter(static_cast<int>(i)));
    }
  }

  // string AcademyName = 1;
  if (this->academyname().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->academyname());
  }

  // int32 brainCount = 2;
  if (this->braincount() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->braincount());
  }

  // int32 resetParameterSize = 3;
  if (this->resetparametersize() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->resetparametersize());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AcademyConfigProto::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AcademyConfigProto)
  GOOGLE_DCHECK_NE(&from, this);
  const AcademyConfigProto* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AcademyConfigProto>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AcademyConfigProto)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AcademyConfigProto)
    MergeFrom(*source);
  }
}

void AcademyConfigProto::MergeFrom(const AcademyConfigProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AcademyConfigProto)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  resetparameters_.MergeFrom(from.resetparameters_);
  brainparameter_.MergeFrom(from.brainparameter_);
  if (from.academyname().size() > 0) {

    academyname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.academyname_);
  }
  if (from.braincount() != 0) {
    set_braincount(from.braincount());
  }
  if (from.resetparametersize() != 0) {
    set_resetparametersize(from.resetparametersize());
  }
}

void AcademyConfigProto::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AcademyConfigProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AcademyConfigProto::CopyFrom(const AcademyConfigProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcademyConfigProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AcademyConfigProto::IsInitialized() const {
  return true;
}

void AcademyConfigProto::Swap(AcademyConfigProto* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AcademyConfigProto::InternalSwap(AcademyConfigProto* other) {
  using std::swap;
  resetparameters_.InternalSwap(&other->resetparameters_);
  CastToBase(&brainparameter_)->InternalSwap(CastToBase(&other->brainparameter_));
  academyname_.Swap(&other->academyname_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(braincount_, other->braincount_);
  swap(resetparametersize_, other->resetparametersize_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata AcademyConfigProto::GetMetadata() const {
  protobuf_academy_5fconfiguration_5fproto_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_academy_5fconfiguration_5fproto_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::AcademyConfigProto* Arena::CreateMaybeMessage< ::AcademyConfigProto >(Arena* arena) {
  return Arena::CreateInternal< ::AcademyConfigProto >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)