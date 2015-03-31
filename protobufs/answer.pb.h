// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: answer.proto

#ifndef PROTOBUF_answer_2eproto__INCLUDED
#define PROTOBUF_answer_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include "dna.pb.h"
// @@protoc_insertion_point(includes)

namespace AnswerBuffers {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_answer_2eproto();
void protobuf_AssignDesc_answer_2eproto();
void protobuf_ShutdownFile_answer_2eproto();

class SenderResults;
class ThroughputsDelays;
class Outcome;

// ===================================================================

class SenderResults : public ::google::protobuf::Message {
 public:
  SenderResults();
  virtual ~SenderResults();
  
  SenderResults(const SenderResults& from);
  
  inline SenderResults& operator=(const SenderResults& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const SenderResults& default_instance();
  
  void Swap(SenderResults* other);
  
  // implements Message ----------------------------------------------
  
  SenderResults* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SenderResults& from);
  void MergeFrom(const SenderResults& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional double throughput = 11;
  inline bool has_throughput() const;
  inline void clear_throughput();
  static const int kThroughputFieldNumber = 11;
  inline double throughput() const;
  inline void set_throughput(double value);
  
  // optional double delay = 12;
  inline bool has_delay() const;
  inline void clear_delay();
  static const int kDelayFieldNumber = 12;
  inline double delay() const;
  inline void set_delay(double value);
  
  // @@protoc_insertion_point(class_scope:AnswerBuffers.SenderResults)
 private:
  inline void set_has_throughput();
  inline void clear_has_throughput();
  inline void set_has_delay();
  inline void clear_has_delay();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  double throughput_;
  double delay_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_answer_2eproto();
  friend void protobuf_AssignDesc_answer_2eproto();
  friend void protobuf_ShutdownFile_answer_2eproto();
  
  void InitAsDefaultInstance();
  static SenderResults* default_instance_;
};
// -------------------------------------------------------------------

class ThroughputsDelays : public ::google::protobuf::Message {
 public:
  ThroughputsDelays();
  virtual ~ThroughputsDelays();
  
  ThroughputsDelays(const ThroughputsDelays& from);
  
  inline ThroughputsDelays& operator=(const ThroughputsDelays& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const ThroughputsDelays& default_instance();
  
  void Swap(ThroughputsDelays* other);
  
  // implements Message ----------------------------------------------
  
  ThroughputsDelays* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ThroughputsDelays& from);
  void MergeFrom(const ThroughputsDelays& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional .RemyBuffers.NetConfig config = 21;
  inline bool has_config() const;
  inline void clear_config();
  static const int kConfigFieldNumber = 21;
  inline const ::RemyBuffers::NetConfig& config() const;
  inline ::RemyBuffers::NetConfig* mutable_config();
  inline ::RemyBuffers::NetConfig* release_config();
  
  // repeated .AnswerBuffers.SenderResults results = 22;
  inline int results_size() const;
  inline void clear_results();
  static const int kResultsFieldNumber = 22;
  inline const ::AnswerBuffers::SenderResults& results(int index) const;
  inline ::AnswerBuffers::SenderResults* mutable_results(int index);
  inline ::AnswerBuffers::SenderResults* add_results();
  inline const ::google::protobuf::RepeatedPtrField< ::AnswerBuffers::SenderResults >&
      results() const;
  inline ::google::protobuf::RepeatedPtrField< ::AnswerBuffers::SenderResults >*
      mutable_results();
  
  // @@protoc_insertion_point(class_scope:AnswerBuffers.ThroughputsDelays)
 private:
  inline void set_has_config();
  inline void clear_has_config();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::RemyBuffers::NetConfig* config_;
  ::google::protobuf::RepeatedPtrField< ::AnswerBuffers::SenderResults > results_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_answer_2eproto();
  friend void protobuf_AssignDesc_answer_2eproto();
  friend void protobuf_ShutdownFile_answer_2eproto();
  
  void InitAsDefaultInstance();
  static ThroughputsDelays* default_instance_;
};
// -------------------------------------------------------------------

class Outcome : public ::google::protobuf::Message {
 public:
  Outcome();
  virtual ~Outcome();
  
  Outcome(const Outcome& from);
  
  inline Outcome& operator=(const Outcome& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const Outcome& default_instance();
  
  void Swap(Outcome* other);
  
  // implements Message ----------------------------------------------
  
  Outcome* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Outcome& from);
  void MergeFrom(const Outcome& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // repeated .AnswerBuffers.ThroughputsDelays throughputs_delays = 32;
  inline int throughputs_delays_size() const;
  inline void clear_throughputs_delays();
  static const int kThroughputsDelaysFieldNumber = 32;
  inline const ::AnswerBuffers::ThroughputsDelays& throughputs_delays(int index) const;
  inline ::AnswerBuffers::ThroughputsDelays* mutable_throughputs_delays(int index);
  inline ::AnswerBuffers::ThroughputsDelays* add_throughputs_delays();
  inline const ::google::protobuf::RepeatedPtrField< ::AnswerBuffers::ThroughputsDelays >&
      throughputs_delays() const;
  inline ::google::protobuf::RepeatedPtrField< ::AnswerBuffers::ThroughputsDelays >*
      mutable_throughputs_delays();
  
  // optional double score = 33;
  inline bool has_score() const;
  inline void clear_score();
  static const int kScoreFieldNumber = 33;
  inline double score() const;
  inline void set_score(double value);
  
  // @@protoc_insertion_point(class_scope:AnswerBuffers.Outcome)
 private:
  inline void set_has_score();
  inline void clear_has_score();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::AnswerBuffers::ThroughputsDelays > throughputs_delays_;
  double score_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_answer_2eproto();
  friend void protobuf_AssignDesc_answer_2eproto();
  friend void protobuf_ShutdownFile_answer_2eproto();
  
  void InitAsDefaultInstance();
  static Outcome* default_instance_;
};
// ===================================================================


// ===================================================================

// SenderResults

// optional double throughput = 11;
inline bool SenderResults::has_throughput() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SenderResults::set_has_throughput() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SenderResults::clear_has_throughput() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SenderResults::clear_throughput() {
  throughput_ = 0;
  clear_has_throughput();
}
inline double SenderResults::throughput() const {
  return throughput_;
}
inline void SenderResults::set_throughput(double value) {
  set_has_throughput();
  throughput_ = value;
}

// optional double delay = 12;
inline bool SenderResults::has_delay() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SenderResults::set_has_delay() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SenderResults::clear_has_delay() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SenderResults::clear_delay() {
  delay_ = 0;
  clear_has_delay();
}
inline double SenderResults::delay() const {
  return delay_;
}
inline void SenderResults::set_delay(double value) {
  set_has_delay();
  delay_ = value;
}

// -------------------------------------------------------------------

// ThroughputsDelays

// optional .RemyBuffers.NetConfig config = 21;
inline bool ThroughputsDelays::has_config() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ThroughputsDelays::set_has_config() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ThroughputsDelays::clear_has_config() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ThroughputsDelays::clear_config() {
  if (config_ != NULL) config_->::RemyBuffers::NetConfig::Clear();
  clear_has_config();
}
inline const ::RemyBuffers::NetConfig& ThroughputsDelays::config() const {
  return config_ != NULL ? *config_ : *default_instance_->config_;
}
inline ::RemyBuffers::NetConfig* ThroughputsDelays::mutable_config() {
  set_has_config();
  if (config_ == NULL) config_ = new ::RemyBuffers::NetConfig;
  return config_;
}
inline ::RemyBuffers::NetConfig* ThroughputsDelays::release_config() {
  clear_has_config();
  ::RemyBuffers::NetConfig* temp = config_;
  config_ = NULL;
  return temp;
}

// repeated .AnswerBuffers.SenderResults results = 22;
inline int ThroughputsDelays::results_size() const {
  return results_.size();
}
inline void ThroughputsDelays::clear_results() {
  results_.Clear();
}
inline const ::AnswerBuffers::SenderResults& ThroughputsDelays::results(int index) const {
  return results_.Get(index);
}
inline ::AnswerBuffers::SenderResults* ThroughputsDelays::mutable_results(int index) {
  return results_.Mutable(index);
}
inline ::AnswerBuffers::SenderResults* ThroughputsDelays::add_results() {
  return results_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::AnswerBuffers::SenderResults >&
ThroughputsDelays::results() const {
  return results_;
}
inline ::google::protobuf::RepeatedPtrField< ::AnswerBuffers::SenderResults >*
ThroughputsDelays::mutable_results() {
  return &results_;
}

// -------------------------------------------------------------------

// Outcome

// repeated .AnswerBuffers.ThroughputsDelays throughputs_delays = 32;
inline int Outcome::throughputs_delays_size() const {
  return throughputs_delays_.size();
}
inline void Outcome::clear_throughputs_delays() {
  throughputs_delays_.Clear();
}
inline const ::AnswerBuffers::ThroughputsDelays& Outcome::throughputs_delays(int index) const {
  return throughputs_delays_.Get(index);
}
inline ::AnswerBuffers::ThroughputsDelays* Outcome::mutable_throughputs_delays(int index) {
  return throughputs_delays_.Mutable(index);
}
inline ::AnswerBuffers::ThroughputsDelays* Outcome::add_throughputs_delays() {
  return throughputs_delays_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::AnswerBuffers::ThroughputsDelays >&
Outcome::throughputs_delays() const {
  return throughputs_delays_;
}
inline ::google::protobuf::RepeatedPtrField< ::AnswerBuffers::ThroughputsDelays >*
Outcome::mutable_throughputs_delays() {
  return &throughputs_delays_;
}

// optional double score = 33;
inline bool Outcome::has_score() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Outcome::set_has_score() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Outcome::clear_has_score() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Outcome::clear_score() {
  score_ = 0;
  clear_has_score();
}
inline double Outcome::score() const {
  return score_;
}
inline void Outcome::set_score(double value) {
  set_has_score();
  score_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace AnswerBuffers

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_answer_2eproto__INCLUDED