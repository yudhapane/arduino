// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: friction.proto

#ifndef PROTOBUF_friction_2eproto__INCLUDED
#define PROTOBUF_friction_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "vector3d.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_friction_2eproto();
void protobuf_AssignDesc_friction_2eproto();
void protobuf_ShutdownFile_friction_2eproto();

class Friction;

// ===================================================================

class Friction : public ::google::protobuf::Message {
 public:
  Friction();
  virtual ~Friction();

  Friction(const Friction& from);

  inline Friction& operator=(const Friction& from) {
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
  static const Friction& default_instance();

  void Swap(Friction* other);

  // implements Message ----------------------------------------------

  Friction* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Friction& from);
  void MergeFrom(const Friction& from);
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

  // optional double mu = 1;
  inline bool has_mu() const;
  inline void clear_mu();
  static const int kMuFieldNumber = 1;
  inline double mu() const;
  inline void set_mu(double value);

  // optional double mu2 = 2;
  inline bool has_mu2() const;
  inline void clear_mu2();
  static const int kMu2FieldNumber = 2;
  inline double mu2() const;
  inline void set_mu2(double value);

  // optional .gazebo.msgs.Vector3d fdir1 = 3;
  inline bool has_fdir1() const;
  inline void clear_fdir1();
  static const int kFdir1FieldNumber = 3;
  inline const ::gazebo::msgs::Vector3d& fdir1() const;
  inline ::gazebo::msgs::Vector3d* mutable_fdir1();
  inline ::gazebo::msgs::Vector3d* release_fdir1();
  inline void set_allocated_fdir1(::gazebo::msgs::Vector3d* fdir1);

  // optional double slip1 = 4;
  inline bool has_slip1() const;
  inline void clear_slip1();
  static const int kSlip1FieldNumber = 4;
  inline double slip1() const;
  inline void set_slip1(double value);

  // optional double slip2 = 5;
  inline bool has_slip2() const;
  inline void clear_slip2();
  static const int kSlip2FieldNumber = 5;
  inline double slip2() const;
  inline void set_slip2(double value);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Friction)
 private:
  inline void set_has_mu();
  inline void clear_has_mu();
  inline void set_has_mu2();
  inline void clear_has_mu2();
  inline void set_has_fdir1();
  inline void clear_has_fdir1();
  inline void set_has_slip1();
  inline void clear_has_slip1();
  inline void set_has_slip2();
  inline void clear_has_slip2();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  double mu_;
  double mu2_;
  ::gazebo::msgs::Vector3d* fdir1_;
  double slip1_;
  double slip2_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_friction_2eproto();
  friend void protobuf_AssignDesc_friction_2eproto();
  friend void protobuf_ShutdownFile_friction_2eproto();

  void InitAsDefaultInstance();
  static Friction* default_instance_;
};
// ===================================================================


// ===================================================================

// Friction

// optional double mu = 1;
inline bool Friction::has_mu() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Friction::set_has_mu() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Friction::clear_has_mu() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Friction::clear_mu() {
  mu_ = 0;
  clear_has_mu();
}
inline double Friction::mu() const {
  return mu_;
}
inline void Friction::set_mu(double value) {
  set_has_mu();
  mu_ = value;
}

// optional double mu2 = 2;
inline bool Friction::has_mu2() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Friction::set_has_mu2() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Friction::clear_has_mu2() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Friction::clear_mu2() {
  mu2_ = 0;
  clear_has_mu2();
}
inline double Friction::mu2() const {
  return mu2_;
}
inline void Friction::set_mu2(double value) {
  set_has_mu2();
  mu2_ = value;
}

// optional .gazebo.msgs.Vector3d fdir1 = 3;
inline bool Friction::has_fdir1() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Friction::set_has_fdir1() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Friction::clear_has_fdir1() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Friction::clear_fdir1() {
  if (fdir1_ != NULL) fdir1_->::gazebo::msgs::Vector3d::Clear();
  clear_has_fdir1();
}
inline const ::gazebo::msgs::Vector3d& Friction::fdir1() const {
  return fdir1_ != NULL ? *fdir1_ : *default_instance_->fdir1_;
}
inline ::gazebo::msgs::Vector3d* Friction::mutable_fdir1() {
  set_has_fdir1();
  if (fdir1_ == NULL) fdir1_ = new ::gazebo::msgs::Vector3d;
  return fdir1_;
}
inline ::gazebo::msgs::Vector3d* Friction::release_fdir1() {
  clear_has_fdir1();
  ::gazebo::msgs::Vector3d* temp = fdir1_;
  fdir1_ = NULL;
  return temp;
}
inline void Friction::set_allocated_fdir1(::gazebo::msgs::Vector3d* fdir1) {
  delete fdir1_;
  fdir1_ = fdir1;
  if (fdir1) {
    set_has_fdir1();
  } else {
    clear_has_fdir1();
  }
}

// optional double slip1 = 4;
inline bool Friction::has_slip1() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Friction::set_has_slip1() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Friction::clear_has_slip1() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Friction::clear_slip1() {
  slip1_ = 0;
  clear_has_slip1();
}
inline double Friction::slip1() const {
  return slip1_;
}
inline void Friction::set_slip1(double value) {
  set_has_slip1();
  slip1_ = value;
}

// optional double slip2 = 5;
inline bool Friction::has_slip2() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Friction::set_has_slip2() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Friction::clear_has_slip2() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Friction::clear_slip2() {
  slip2_ = 0;
  clear_has_slip2();
}
inline double Friction::slip2() const {
  return slip2_;
}
inline void Friction::set_slip2(double value) {
  set_has_slip2();
  slip2_ = value;
}


typedef boost::shared_ptr<gazebo::msgs::Friction> FrictionPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

typedef const boost::shared_ptr<gazebo::msgs::Friction const> ConstFrictionPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_friction_2eproto__INCLUDED
