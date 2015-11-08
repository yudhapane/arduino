// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pose.proto

#ifndef PROTOBUF_pose_2eproto__INCLUDED
#define PROTOBUF_pose_2eproto__INCLUDED

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
#include "quaternion.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_pose_2eproto();
void protobuf_AssignDesc_pose_2eproto();
void protobuf_ShutdownFile_pose_2eproto();

class Pose;

// ===================================================================

class Pose : public ::google::protobuf::Message {
 public:
  Pose();
  virtual ~Pose();

  Pose(const Pose& from);

  inline Pose& operator=(const Pose& from) {
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
  static const Pose& default_instance();

  void Swap(Pose* other);

  // implements Message ----------------------------------------------

  Pose* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Pose& from);
  void MergeFrom(const Pose& from);
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

  // optional string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // optional uint32 id = 2;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 2;
  inline ::google::protobuf::uint32 id() const;
  inline void set_id(::google::protobuf::uint32 value);

  // required .gazebo.msgs.Vector3d position = 3;
  inline bool has_position() const;
  inline void clear_position();
  static const int kPositionFieldNumber = 3;
  inline const ::gazebo::msgs::Vector3d& position() const;
  inline ::gazebo::msgs::Vector3d* mutable_position();
  inline ::gazebo::msgs::Vector3d* release_position();
  inline void set_allocated_position(::gazebo::msgs::Vector3d* position);

  // required .gazebo.msgs.Quaternion orientation = 4;
  inline bool has_orientation() const;
  inline void clear_orientation();
  static const int kOrientationFieldNumber = 4;
  inline const ::gazebo::msgs::Quaternion& orientation() const;
  inline ::gazebo::msgs::Quaternion* mutable_orientation();
  inline ::gazebo::msgs::Quaternion* release_orientation();
  inline void set_allocated_orientation(::gazebo::msgs::Quaternion* orientation);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Pose)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_position();
  inline void clear_has_position();
  inline void set_has_orientation();
  inline void clear_has_orientation();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* name_;
  ::gazebo::msgs::Vector3d* position_;
  ::gazebo::msgs::Quaternion* orientation_;
  ::google::protobuf::uint32 id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_pose_2eproto();
  friend void protobuf_AssignDesc_pose_2eproto();
  friend void protobuf_ShutdownFile_pose_2eproto();

  void InitAsDefaultInstance();
  static Pose* default_instance_;
};
// ===================================================================


// ===================================================================

// Pose

// optional string name = 1;
inline bool Pose::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Pose::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Pose::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Pose::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& Pose::name() const {
  return *name_;
}
inline void Pose::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Pose::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Pose::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Pose::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* Pose::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Pose::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional uint32 id = 2;
inline bool Pose::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Pose::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Pose::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Pose::clear_id() {
  id_ = 0u;
  clear_has_id();
}
inline ::google::protobuf::uint32 Pose::id() const {
  return id_;
}
inline void Pose::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
}

// required .gazebo.msgs.Vector3d position = 3;
inline bool Pose::has_position() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Pose::set_has_position() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Pose::clear_has_position() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Pose::clear_position() {
  if (position_ != NULL) position_->::gazebo::msgs::Vector3d::Clear();
  clear_has_position();
}
inline const ::gazebo::msgs::Vector3d& Pose::position() const {
  return position_ != NULL ? *position_ : *default_instance_->position_;
}
inline ::gazebo::msgs::Vector3d* Pose::mutable_position() {
  set_has_position();
  if (position_ == NULL) position_ = new ::gazebo::msgs::Vector3d;
  return position_;
}
inline ::gazebo::msgs::Vector3d* Pose::release_position() {
  clear_has_position();
  ::gazebo::msgs::Vector3d* temp = position_;
  position_ = NULL;
  return temp;
}
inline void Pose::set_allocated_position(::gazebo::msgs::Vector3d* position) {
  delete position_;
  position_ = position;
  if (position) {
    set_has_position();
  } else {
    clear_has_position();
  }
}

// required .gazebo.msgs.Quaternion orientation = 4;
inline bool Pose::has_orientation() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Pose::set_has_orientation() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Pose::clear_has_orientation() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Pose::clear_orientation() {
  if (orientation_ != NULL) orientation_->::gazebo::msgs::Quaternion::Clear();
  clear_has_orientation();
}
inline const ::gazebo::msgs::Quaternion& Pose::orientation() const {
  return orientation_ != NULL ? *orientation_ : *default_instance_->orientation_;
}
inline ::gazebo::msgs::Quaternion* Pose::mutable_orientation() {
  set_has_orientation();
  if (orientation_ == NULL) orientation_ = new ::gazebo::msgs::Quaternion;
  return orientation_;
}
inline ::gazebo::msgs::Quaternion* Pose::release_orientation() {
  clear_has_orientation();
  ::gazebo::msgs::Quaternion* temp = orientation_;
  orientation_ = NULL;
  return temp;
}
inline void Pose::set_allocated_orientation(::gazebo::msgs::Quaternion* orientation) {
  delete orientation_;
  orientation_ = orientation;
  if (orientation) {
    set_has_orientation();
  } else {
    clear_has_orientation();
  }
}


typedef boost::shared_ptr<gazebo::msgs::Pose> PosePtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

typedef const boost::shared_ptr<gazebo::msgs::Pose const> ConstPosePtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_pose_2eproto__INCLUDED
