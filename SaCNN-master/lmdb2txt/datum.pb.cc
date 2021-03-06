// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: datum.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "datum.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace caffe {

namespace {

const ::google::protobuf::Descriptor* Datum_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Datum_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_datum_2eproto() {
  protobuf_AddDesc_datum_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "datum.proto");
  GOOGLE_CHECK(file != NULL);
  Datum_descriptor_ = file->message_type(0);
  static const int Datum_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Datum, channels_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Datum, height_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Datum, width_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Datum, data_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Datum, label_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Datum, float_data_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Datum, encoded_),
  };
  Datum_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Datum_descriptor_,
      Datum::default_instance_,
      Datum_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Datum, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Datum, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Datum));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_datum_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Datum_descriptor_, &Datum::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_datum_2eproto() {
  delete Datum::default_instance_;
  delete Datum_reflection_;
}

void protobuf_AddDesc_datum_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013datum.proto\022\005caffe\"\201\001\n\005Datum\022\020\n\010channe"
    "ls\030\001 \001(\005\022\016\n\006height\030\002 \001(\005\022\r\n\005width\030\003 \001(\005\022"
    "\014\n\004data\030\004 \001(\014\022\r\n\005label\030\005 \001(\005\022\022\n\nfloat_da"
    "ta\030\006 \003(\002\022\026\n\007encoded\030\007 \001(\010:\005false", 152);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "datum.proto", &protobuf_RegisterTypes);
  Datum::default_instance_ = new Datum();
  Datum::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_datum_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_datum_2eproto {
  StaticDescriptorInitializer_datum_2eproto() {
    protobuf_AddDesc_datum_2eproto();
  }
} static_descriptor_initializer_datum_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Datum::kChannelsFieldNumber;
const int Datum::kHeightFieldNumber;
const int Datum::kWidthFieldNumber;
const int Datum::kDataFieldNumber;
const int Datum::kLabelFieldNumber;
const int Datum::kFloatDataFieldNumber;
const int Datum::kEncodedFieldNumber;
#endif  // !_MSC_VER

Datum::Datum()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:caffe.Datum)
}

void Datum::InitAsDefaultInstance() {
}

Datum::Datum(const Datum& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:caffe.Datum)
}

void Datum::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  channels_ = 0;
  height_ = 0;
  width_ = 0;
  data_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  label_ = 0;
  encoded_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Datum::~Datum() {
  // @@protoc_insertion_point(destructor:caffe.Datum)
  SharedDtor();
}

void Datum::SharedDtor() {
  if (data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete data_;
  }
  if (this != default_instance_) {
  }
}

void Datum::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Datum::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Datum_descriptor_;
}

const Datum& Datum::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_datum_2eproto();
  return *default_instance_;
}

Datum* Datum::default_instance_ = NULL;

Datum* Datum::New() const {
  return new Datum;
}

void Datum::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<Datum*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 95) {
    ZR_(channels_, height_);
    ZR_(width_, label_);
    if (has_data()) {
      if (data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        data_->clear();
      }
    }
    encoded_ = false;
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  float_data_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Datum::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:caffe.Datum)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 channels = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &channels_)));
          set_has_channels();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_height;
        break;
      }

      // optional int32 height = 2;
      case 2: {
        if (tag == 16) {
         parse_height:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &height_)));
          set_has_height();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_width;
        break;
      }

      // optional int32 width = 3;
      case 3: {
        if (tag == 24) {
         parse_width:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &width_)));
          set_has_width();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_data;
        break;
      }

      // optional bytes data = 4;
      case 4: {
        if (tag == 34) {
         parse_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_data()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_label;
        break;
      }

      // optional int32 label = 5;
      case 5: {
        if (tag == 40) {
         parse_label:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &label_)));
          set_has_label();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(53)) goto parse_float_data;
        break;
      }

      // repeated float float_data = 6;
      case 6: {
        if (tag == 53) {
         parse_float_data:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 53, input, this->mutable_float_data())));
        } else if (tag == 50) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_float_data())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(53)) goto parse_float_data;
        if (input->ExpectTag(56)) goto parse_encoded;
        break;
      }

      // optional bool encoded = 7 [default = false];
      case 7: {
        if (tag == 56) {
         parse_encoded:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &encoded_)));
          set_has_encoded();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:caffe.Datum)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:caffe.Datum)
  return false;
#undef DO_
}

void Datum::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:caffe.Datum)
  // optional int32 channels = 1;
  if (has_channels()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->channels(), output);
  }

  // optional int32 height = 2;
  if (has_height()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->height(), output);
  }

  // optional int32 width = 3;
  if (has_width()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->width(), output);
  }

  // optional bytes data = 4;
  if (has_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      4, this->data(), output);
  }

  // optional int32 label = 5;
  if (has_label()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->label(), output);
  }

  // repeated float float_data = 6;
  for (int i = 0; i < this->float_data_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(
      6, this->float_data(i), output);
  }

  // optional bool encoded = 7 [default = false];
  if (has_encoded()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->encoded(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:caffe.Datum)
}

::google::protobuf::uint8* Datum::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:caffe.Datum)
  // optional int32 channels = 1;
  if (has_channels()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->channels(), target);
  }

  // optional int32 height = 2;
  if (has_height()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->height(), target);
  }

  // optional int32 width = 3;
  if (has_width()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->width(), target);
  }

  // optional bytes data = 4;
  if (has_data()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        4, this->data(), target);
  }

  // optional int32 label = 5;
  if (has_label()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->label(), target);
  }

  // repeated float float_data = 6;
  for (int i = 0; i < this->float_data_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatToArray(6, this->float_data(i), target);
  }

  // optional bool encoded = 7 [default = false];
  if (has_encoded()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(7, this->encoded(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:caffe.Datum)
  return target;
}

int Datum::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 channels = 1;
    if (has_channels()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->channels());
    }

    // optional int32 height = 2;
    if (has_height()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->height());
    }

    // optional int32 width = 3;
    if (has_width()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->width());
    }

    // optional bytes data = 4;
    if (has_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->data());
    }

    // optional int32 label = 5;
    if (has_label()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->label());
    }

    // optional bool encoded = 7 [default = false];
    if (has_encoded()) {
      total_size += 1 + 1;
    }

  }
  // repeated float float_data = 6;
  {
    int data_size = 0;
    data_size = 4 * this->float_data_size();
    total_size += 1 * this->float_data_size() + data_size;
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Datum::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Datum* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Datum*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Datum::MergeFrom(const Datum& from) {
  GOOGLE_CHECK_NE(&from, this);
  float_data_.MergeFrom(from.float_data_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_channels()) {
      set_channels(from.channels());
    }
    if (from.has_height()) {
      set_height(from.height());
    }
    if (from.has_width()) {
      set_width(from.width());
    }
    if (from.has_data()) {
      set_data(from.data());
    }
    if (from.has_label()) {
      set_label(from.label());
    }
    if (from.has_encoded()) {
      set_encoded(from.encoded());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Datum::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Datum::CopyFrom(const Datum& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Datum::IsInitialized() const {

  return true;
}

void Datum::Swap(Datum* other) {
  if (other != this) {
    std::swap(channels_, other->channels_);
    std::swap(height_, other->height_);
    std::swap(width_, other->width_);
    std::swap(data_, other->data_);
    std::swap(label_, other->label_);
    float_data_.Swap(&other->float_data_);
    std::swap(encoded_, other->encoded_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Datum::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Datum_descriptor_;
  metadata.reflection = Datum_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace caffe

// @@protoc_insertion_point(global_scope)
