// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: joint_animation.proto

#ifndef PROTOBUF_joint_5fanimation_2eproto__INCLUDED
#define PROTOBUF_joint_5fanimation_2eproto__INCLUDED

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
#include "pose.pb.h"
#include "time.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_joint_5fanimation_2eproto();
void protobuf_AssignDesc_joint_5fanimation_2eproto();
void protobuf_ShutdownFile_joint_5fanimation_2eproto();

class JointAnimation;
class JointAnimation_Joint;

// ===================================================================

class JointAnimation_Joint : public ::google::protobuf::Message {
 public:
  JointAnimation_Joint();
  virtual ~JointAnimation_Joint();

  JointAnimation_Joint(const JointAnimation_Joint& from);

  inline JointAnimation_Joint& operator=(const JointAnimation_Joint& from) {
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
  static const JointAnimation_Joint& default_instance();

  void Swap(JointAnimation_Joint* other);

  // implements Message ----------------------------------------------

  JointAnimation_Joint* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const JointAnimation_Joint& from);
  void MergeFrom(const JointAnimation_Joint& from);
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

  // repeated string name = 1;
  inline int name_size() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name(int index) const;
  inline ::std::string* mutable_name(int index);
  inline void set_name(int index, const ::std::string& value);
  inline void set_name(int index, const char* value);
  inline void set_name(int index, const char* value, size_t size);
  inline ::std::string* add_name();
  inline void add_name(const ::std::string& value);
  inline void add_name(const char* value);
  inline void add_name(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& name() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_name();

  // repeated double angle = 2;
  inline int angle_size() const;
  inline void clear_angle();
  static const int kAngleFieldNumber = 2;
  inline double angle(int index) const;
  inline void set_angle(int index, double value);
  inline void add_angle(double value);
  inline const ::google::protobuf::RepeatedField< double >&
      angle() const;
  inline ::google::protobuf::RepeatedField< double >*
      mutable_angle();

  // @@protoc_insertion_point(class_scope:gazebo.msgs.JointAnimation.Joint)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::std::string> name_;
  ::google::protobuf::RepeatedField< double > angle_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_joint_5fanimation_2eproto();
  friend void protobuf_AssignDesc_joint_5fanimation_2eproto();
  friend void protobuf_ShutdownFile_joint_5fanimation_2eproto();

  void InitAsDefaultInstance();
  static JointAnimation_Joint* default_instance_;
};
// -------------------------------------------------------------------

class JointAnimation : public ::google::protobuf::Message {
 public:
  JointAnimation();
  virtual ~JointAnimation();

  JointAnimation(const JointAnimation& from);

  inline JointAnimation& operator=(const JointAnimation& from) {
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
  static const JointAnimation& default_instance();

  void Swap(JointAnimation* other);

  // implements Message ----------------------------------------------

  JointAnimation* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const JointAnimation& from);
  void MergeFrom(const JointAnimation& from);
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

  typedef JointAnimation_Joint Joint;

  // accessors -------------------------------------------------------

  // required string model_name = 1;
  inline bool has_model_name() const;
  inline void clear_model_name();
  static const int kModelNameFieldNumber = 1;
  inline const ::std::string& model_name() const;
  inline void set_model_name(const ::std::string& value);
  inline void set_model_name(const char* value);
  inline void set_model_name(const char* value, size_t size);
  inline ::std::string* mutable_model_name();
  inline ::std::string* release_model_name();
  inline void set_allocated_model_name(::std::string* model_name);

  // repeated .gazebo.msgs.JointAnimation.Joint joint = 2;
  inline int joint_size() const;
  inline void clear_joint();
  static const int kJointFieldNumber = 2;
  inline const ::gazebo::msgs::JointAnimation_Joint& joint(int index) const;
  inline ::gazebo::msgs::JointAnimation_Joint* mutable_joint(int index);
  inline ::gazebo::msgs::JointAnimation_Joint* add_joint();
  inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::JointAnimation_Joint >&
      joint() const;
  inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::JointAnimation_Joint >*
      mutable_joint();

  // repeated .gazebo.msgs.Time time = 3;
  inline int time_size() const;
  inline void clear_time();
  static const int kTimeFieldNumber = 3;
  inline const ::gazebo::msgs::Time& time(int index) const;
  inline ::gazebo::msgs::Time* mutable_time(int index);
  inline ::gazebo::msgs::Time* add_time();
  inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Time >&
      time() const;
  inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Time >*
      mutable_time();

  // @@protoc_insertion_point(class_scope:gazebo.msgs.JointAnimation)
 private:
  inline void set_has_model_name();
  inline void clear_has_model_name();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* model_name_;
  ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::JointAnimation_Joint > joint_;
  ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Time > time_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_joint_5fanimation_2eproto();
  friend void protobuf_AssignDesc_joint_5fanimation_2eproto();
  friend void protobuf_ShutdownFile_joint_5fanimation_2eproto();

  void InitAsDefaultInstance();
  static JointAnimation* default_instance_;
};
// ===================================================================


// ===================================================================

// JointAnimation_Joint

// repeated string name = 1;
inline int JointAnimation_Joint::name_size() const {
  return name_.size();
}
inline void JointAnimation_Joint::clear_name() {
  name_.Clear();
}
inline const ::std::string& JointAnimation_Joint::name(int index) const {
  return name_.Get(index);
}
inline ::std::string* JointAnimation_Joint::mutable_name(int index) {
  return name_.Mutable(index);
}
inline void JointAnimation_Joint::set_name(int index, const ::std::string& value) {
  name_.Mutable(index)->assign(value);
}
inline void JointAnimation_Joint::set_name(int index, const char* value) {
  name_.Mutable(index)->assign(value);
}
inline void JointAnimation_Joint::set_name(int index, const char* value, size_t size) {
  name_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* JointAnimation_Joint::add_name() {
  return name_.Add();
}
inline void JointAnimation_Joint::add_name(const ::std::string& value) {
  name_.Add()->assign(value);
}
inline void JointAnimation_Joint::add_name(const char* value) {
  name_.Add()->assign(value);
}
inline void JointAnimation_Joint::add_name(const char* value, size_t size) {
  name_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
JointAnimation_Joint::name() const {
  return name_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
JointAnimation_Joint::mutable_name() {
  return &name_;
}

// repeated double angle = 2;
inline int JointAnimation_Joint::angle_size() const {
  return angle_.size();
}
inline void JointAnimation_Joint::clear_angle() {
  angle_.Clear();
}
inline double JointAnimation_Joint::angle(int index) const {
  return angle_.Get(index);
}
inline void JointAnimation_Joint::set_angle(int index, double value) {
  angle_.Set(index, value);
}
inline void JointAnimation_Joint::add_angle(double value) {
  angle_.Add(value);
}
inline const ::google::protobuf::RepeatedField< double >&
JointAnimation_Joint::angle() const {
  return angle_;
}
inline ::google::protobuf::RepeatedField< double >*
JointAnimation_Joint::mutable_angle() {
  return &angle_;
}

// -------------------------------------------------------------------

// JointAnimation

// required string model_name = 1;
inline bool JointAnimation::has_model_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void JointAnimation::set_has_model_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void JointAnimation::clear_has_model_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void JointAnimation::clear_model_name() {
  if (model_name_ != &::google::protobuf::internal::kEmptyString) {
    model_name_->clear();
  }
  clear_has_model_name();
}
inline const ::std::string& JointAnimation::model_name() const {
  return *model_name_;
}
inline void JointAnimation::set_model_name(const ::std::string& value) {
  set_has_model_name();
  if (model_name_ == &::google::protobuf::internal::kEmptyString) {
    model_name_ = new ::std::string;
  }
  model_name_->assign(value);
}
inline void JointAnimation::set_model_name(const char* value) {
  set_has_model_name();
  if (model_name_ == &::google::protobuf::internal::kEmptyString) {
    model_name_ = new ::std::string;
  }
  model_name_->assign(value);
}
inline void JointAnimation::set_model_name(const char* value, size_t size) {
  set_has_model_name();
  if (model_name_ == &::google::protobuf::internal::kEmptyString) {
    model_name_ = new ::std::string;
  }
  model_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* JointAnimation::mutable_model_name() {
  set_has_model_name();
  if (model_name_ == &::google::protobuf::internal::kEmptyString) {
    model_name_ = new ::std::string;
  }
  return model_name_;
}
inline ::std::string* JointAnimation::release_model_name() {
  clear_has_model_name();
  if (model_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = model_name_;
    model_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void JointAnimation::set_allocated_model_name(::std::string* model_name) {
  if (model_name_ != &::google::protobuf::internal::kEmptyString) {
    delete model_name_;
  }
  if (model_name) {
    set_has_model_name();
    model_name_ = model_name;
  } else {
    clear_has_model_name();
    model_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated .gazebo.msgs.JointAnimation.Joint joint = 2;
inline int JointAnimation::joint_size() const {
  return joint_.size();
}
inline void JointAnimation::clear_joint() {
  joint_.Clear();
}
inline const ::gazebo::msgs::JointAnimation_Joint& JointAnimation::joint(int index) const {
  return joint_.Get(index);
}
inline ::gazebo::msgs::JointAnimation_Joint* JointAnimation::mutable_joint(int index) {
  return joint_.Mutable(index);
}
inline ::gazebo::msgs::JointAnimation_Joint* JointAnimation::add_joint() {
  return joint_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::JointAnimation_Joint >&
JointAnimation::joint() const {
  return joint_;
}
inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::JointAnimation_Joint >*
JointAnimation::mutable_joint() {
  return &joint_;
}

// repeated .gazebo.msgs.Time time = 3;
inline int JointAnimation::time_size() const {
  return time_.size();
}
inline void JointAnimation::clear_time() {
  time_.Clear();
}
inline const ::gazebo::msgs::Time& JointAnimation::time(int index) const {
  return time_.Get(index);
}
inline ::gazebo::msgs::Time* JointAnimation::mutable_time(int index) {
  return time_.Mutable(index);
}
inline ::gazebo::msgs::Time* JointAnimation::add_time() {
  return time_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Time >&
JointAnimation::time() const {
  return time_;
}
inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Time >*
JointAnimation::mutable_time() {
  return &time_;
}


typedef boost::shared_ptr<gazebo::msgs::JointAnimation> JointAnimationPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

typedef const boost::shared_ptr<gazebo::msgs::JointAnimation const> ConstJointAnimationPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_joint_5fanimation_2eproto__INCLUDED
