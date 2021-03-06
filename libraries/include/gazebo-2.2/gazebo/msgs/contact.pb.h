// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: contact.proto

#ifndef PROTOBUF_contact_2eproto__INCLUDED
#define PROTOBUF_contact_2eproto__INCLUDED

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
#include "time.pb.h"
#include "joint_wrench.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_contact_2eproto();
void protobuf_AssignDesc_contact_2eproto();
void protobuf_ShutdownFile_contact_2eproto();

class Contact;

// ===================================================================

class Contact : public ::google::protobuf::Message {
 public:
  Contact();
  virtual ~Contact();

  Contact(const Contact& from);

  inline Contact& operator=(const Contact& from) {
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
  static const Contact& default_instance();

  void Swap(Contact* other);

  // implements Message ----------------------------------------------

  Contact* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Contact& from);
  void MergeFrom(const Contact& from);
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

  // required string collision1 = 1;
  inline bool has_collision1() const;
  inline void clear_collision1();
  static const int kCollision1FieldNumber = 1;
  inline const ::std::string& collision1() const;
  inline void set_collision1(const ::std::string& value);
  inline void set_collision1(const char* value);
  inline void set_collision1(const char* value, size_t size);
  inline ::std::string* mutable_collision1();
  inline ::std::string* release_collision1();
  inline void set_allocated_collision1(::std::string* collision1);

  // required string collision2 = 2;
  inline bool has_collision2() const;
  inline void clear_collision2();
  static const int kCollision2FieldNumber = 2;
  inline const ::std::string& collision2() const;
  inline void set_collision2(const ::std::string& value);
  inline void set_collision2(const char* value);
  inline void set_collision2(const char* value, size_t size);
  inline ::std::string* mutable_collision2();
  inline ::std::string* release_collision2();
  inline void set_allocated_collision2(::std::string* collision2);

  // repeated .gazebo.msgs.Vector3d position = 3;
  inline int position_size() const;
  inline void clear_position();
  static const int kPositionFieldNumber = 3;
  inline const ::gazebo::msgs::Vector3d& position(int index) const;
  inline ::gazebo::msgs::Vector3d* mutable_position(int index);
  inline ::gazebo::msgs::Vector3d* add_position();
  inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d >&
      position() const;
  inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d >*
      mutable_position();

  // repeated .gazebo.msgs.Vector3d normal = 4;
  inline int normal_size() const;
  inline void clear_normal();
  static const int kNormalFieldNumber = 4;
  inline const ::gazebo::msgs::Vector3d& normal(int index) const;
  inline ::gazebo::msgs::Vector3d* mutable_normal(int index);
  inline ::gazebo::msgs::Vector3d* add_normal();
  inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d >&
      normal() const;
  inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d >*
      mutable_normal();

  // repeated double depth = 5;
  inline int depth_size() const;
  inline void clear_depth();
  static const int kDepthFieldNumber = 5;
  inline double depth(int index) const;
  inline void set_depth(int index, double value);
  inline void add_depth(double value);
  inline const ::google::protobuf::RepeatedField< double >&
      depth() const;
  inline ::google::protobuf::RepeatedField< double >*
      mutable_depth();

  // repeated .gazebo.msgs.JointWrench wrench = 6;
  inline int wrench_size() const;
  inline void clear_wrench();
  static const int kWrenchFieldNumber = 6;
  inline const ::gazebo::msgs::JointWrench& wrench(int index) const;
  inline ::gazebo::msgs::JointWrench* mutable_wrench(int index);
  inline ::gazebo::msgs::JointWrench* add_wrench();
  inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::JointWrench >&
      wrench() const;
  inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::JointWrench >*
      mutable_wrench();

  // required .gazebo.msgs.Time time = 7;
  inline bool has_time() const;
  inline void clear_time();
  static const int kTimeFieldNumber = 7;
  inline const ::gazebo::msgs::Time& time() const;
  inline ::gazebo::msgs::Time* mutable_time();
  inline ::gazebo::msgs::Time* release_time();
  inline void set_allocated_time(::gazebo::msgs::Time* time);

  // required string world = 8;
  inline bool has_world() const;
  inline void clear_world();
  static const int kWorldFieldNumber = 8;
  inline const ::std::string& world() const;
  inline void set_world(const ::std::string& value);
  inline void set_world(const char* value);
  inline void set_world(const char* value, size_t size);
  inline ::std::string* mutable_world();
  inline ::std::string* release_world();
  inline void set_allocated_world(::std::string* world);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Contact)
 private:
  inline void set_has_collision1();
  inline void clear_has_collision1();
  inline void set_has_collision2();
  inline void clear_has_collision2();
  inline void set_has_time();
  inline void clear_has_time();
  inline void set_has_world();
  inline void clear_has_world();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* collision1_;
  ::std::string* collision2_;
  ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d > position_;
  ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d > normal_;
  ::google::protobuf::RepeatedField< double > depth_;
  ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::JointWrench > wrench_;
  ::gazebo::msgs::Time* time_;
  ::std::string* world_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(8 + 31) / 32];

  friend void  protobuf_AddDesc_contact_2eproto();
  friend void protobuf_AssignDesc_contact_2eproto();
  friend void protobuf_ShutdownFile_contact_2eproto();

  void InitAsDefaultInstance();
  static Contact* default_instance_;
};
// ===================================================================


// ===================================================================

// Contact

// required string collision1 = 1;
inline bool Contact::has_collision1() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Contact::set_has_collision1() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Contact::clear_has_collision1() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Contact::clear_collision1() {
  if (collision1_ != &::google::protobuf::internal::kEmptyString) {
    collision1_->clear();
  }
  clear_has_collision1();
}
inline const ::std::string& Contact::collision1() const {
  return *collision1_;
}
inline void Contact::set_collision1(const ::std::string& value) {
  set_has_collision1();
  if (collision1_ == &::google::protobuf::internal::kEmptyString) {
    collision1_ = new ::std::string;
  }
  collision1_->assign(value);
}
inline void Contact::set_collision1(const char* value) {
  set_has_collision1();
  if (collision1_ == &::google::protobuf::internal::kEmptyString) {
    collision1_ = new ::std::string;
  }
  collision1_->assign(value);
}
inline void Contact::set_collision1(const char* value, size_t size) {
  set_has_collision1();
  if (collision1_ == &::google::protobuf::internal::kEmptyString) {
    collision1_ = new ::std::string;
  }
  collision1_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Contact::mutable_collision1() {
  set_has_collision1();
  if (collision1_ == &::google::protobuf::internal::kEmptyString) {
    collision1_ = new ::std::string;
  }
  return collision1_;
}
inline ::std::string* Contact::release_collision1() {
  clear_has_collision1();
  if (collision1_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = collision1_;
    collision1_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Contact::set_allocated_collision1(::std::string* collision1) {
  if (collision1_ != &::google::protobuf::internal::kEmptyString) {
    delete collision1_;
  }
  if (collision1) {
    set_has_collision1();
    collision1_ = collision1;
  } else {
    clear_has_collision1();
    collision1_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string collision2 = 2;
inline bool Contact::has_collision2() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Contact::set_has_collision2() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Contact::clear_has_collision2() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Contact::clear_collision2() {
  if (collision2_ != &::google::protobuf::internal::kEmptyString) {
    collision2_->clear();
  }
  clear_has_collision2();
}
inline const ::std::string& Contact::collision2() const {
  return *collision2_;
}
inline void Contact::set_collision2(const ::std::string& value) {
  set_has_collision2();
  if (collision2_ == &::google::protobuf::internal::kEmptyString) {
    collision2_ = new ::std::string;
  }
  collision2_->assign(value);
}
inline void Contact::set_collision2(const char* value) {
  set_has_collision2();
  if (collision2_ == &::google::protobuf::internal::kEmptyString) {
    collision2_ = new ::std::string;
  }
  collision2_->assign(value);
}
inline void Contact::set_collision2(const char* value, size_t size) {
  set_has_collision2();
  if (collision2_ == &::google::protobuf::internal::kEmptyString) {
    collision2_ = new ::std::string;
  }
  collision2_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Contact::mutable_collision2() {
  set_has_collision2();
  if (collision2_ == &::google::protobuf::internal::kEmptyString) {
    collision2_ = new ::std::string;
  }
  return collision2_;
}
inline ::std::string* Contact::release_collision2() {
  clear_has_collision2();
  if (collision2_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = collision2_;
    collision2_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Contact::set_allocated_collision2(::std::string* collision2) {
  if (collision2_ != &::google::protobuf::internal::kEmptyString) {
    delete collision2_;
  }
  if (collision2) {
    set_has_collision2();
    collision2_ = collision2;
  } else {
    clear_has_collision2();
    collision2_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated .gazebo.msgs.Vector3d position = 3;
inline int Contact::position_size() const {
  return position_.size();
}
inline void Contact::clear_position() {
  position_.Clear();
}
inline const ::gazebo::msgs::Vector3d& Contact::position(int index) const {
  return position_.Get(index);
}
inline ::gazebo::msgs::Vector3d* Contact::mutable_position(int index) {
  return position_.Mutable(index);
}
inline ::gazebo::msgs::Vector3d* Contact::add_position() {
  return position_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d >&
Contact::position() const {
  return position_;
}
inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d >*
Contact::mutable_position() {
  return &position_;
}

// repeated .gazebo.msgs.Vector3d normal = 4;
inline int Contact::normal_size() const {
  return normal_.size();
}
inline void Contact::clear_normal() {
  normal_.Clear();
}
inline const ::gazebo::msgs::Vector3d& Contact::normal(int index) const {
  return normal_.Get(index);
}
inline ::gazebo::msgs::Vector3d* Contact::mutable_normal(int index) {
  return normal_.Mutable(index);
}
inline ::gazebo::msgs::Vector3d* Contact::add_normal() {
  return normal_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d >&
Contact::normal() const {
  return normal_;
}
inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d >*
Contact::mutable_normal() {
  return &normal_;
}

// repeated double depth = 5;
inline int Contact::depth_size() const {
  return depth_.size();
}
inline void Contact::clear_depth() {
  depth_.Clear();
}
inline double Contact::depth(int index) const {
  return depth_.Get(index);
}
inline void Contact::set_depth(int index, double value) {
  depth_.Set(index, value);
}
inline void Contact::add_depth(double value) {
  depth_.Add(value);
}
inline const ::google::protobuf::RepeatedField< double >&
Contact::depth() const {
  return depth_;
}
inline ::google::protobuf::RepeatedField< double >*
Contact::mutable_depth() {
  return &depth_;
}

// repeated .gazebo.msgs.JointWrench wrench = 6;
inline int Contact::wrench_size() const {
  return wrench_.size();
}
inline void Contact::clear_wrench() {
  wrench_.Clear();
}
inline const ::gazebo::msgs::JointWrench& Contact::wrench(int index) const {
  return wrench_.Get(index);
}
inline ::gazebo::msgs::JointWrench* Contact::mutable_wrench(int index) {
  return wrench_.Mutable(index);
}
inline ::gazebo::msgs::JointWrench* Contact::add_wrench() {
  return wrench_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::JointWrench >&
Contact::wrench() const {
  return wrench_;
}
inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::JointWrench >*
Contact::mutable_wrench() {
  return &wrench_;
}

// required .gazebo.msgs.Time time = 7;
inline bool Contact::has_time() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Contact::set_has_time() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Contact::clear_has_time() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Contact::clear_time() {
  if (time_ != NULL) time_->::gazebo::msgs::Time::Clear();
  clear_has_time();
}
inline const ::gazebo::msgs::Time& Contact::time() const {
  return time_ != NULL ? *time_ : *default_instance_->time_;
}
inline ::gazebo::msgs::Time* Contact::mutable_time() {
  set_has_time();
  if (time_ == NULL) time_ = new ::gazebo::msgs::Time;
  return time_;
}
inline ::gazebo::msgs::Time* Contact::release_time() {
  clear_has_time();
  ::gazebo::msgs::Time* temp = time_;
  time_ = NULL;
  return temp;
}
inline void Contact::set_allocated_time(::gazebo::msgs::Time* time) {
  delete time_;
  time_ = time;
  if (time) {
    set_has_time();
  } else {
    clear_has_time();
  }
}

// required string world = 8;
inline bool Contact::has_world() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Contact::set_has_world() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Contact::clear_has_world() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Contact::clear_world() {
  if (world_ != &::google::protobuf::internal::kEmptyString) {
    world_->clear();
  }
  clear_has_world();
}
inline const ::std::string& Contact::world() const {
  return *world_;
}
inline void Contact::set_world(const ::std::string& value) {
  set_has_world();
  if (world_ == &::google::protobuf::internal::kEmptyString) {
    world_ = new ::std::string;
  }
  world_->assign(value);
}
inline void Contact::set_world(const char* value) {
  set_has_world();
  if (world_ == &::google::protobuf::internal::kEmptyString) {
    world_ = new ::std::string;
  }
  world_->assign(value);
}
inline void Contact::set_world(const char* value, size_t size) {
  set_has_world();
  if (world_ == &::google::protobuf::internal::kEmptyString) {
    world_ = new ::std::string;
  }
  world_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Contact::mutable_world() {
  set_has_world();
  if (world_ == &::google::protobuf::internal::kEmptyString) {
    world_ = new ::std::string;
  }
  return world_;
}
inline ::std::string* Contact::release_world() {
  clear_has_world();
  if (world_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = world_;
    world_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Contact::set_allocated_world(::std::string* world) {
  if (world_ != &::google::protobuf::internal::kEmptyString) {
    delete world_;
  }
  if (world) {
    set_has_world();
    world_ = world;
  } else {
    clear_has_world();
    world_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


typedef boost::shared_ptr<gazebo::msgs::Contact> ContactPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

typedef const boost::shared_ptr<gazebo::msgs::Contact const> ConstContactPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_contact_2eproto__INCLUDED
