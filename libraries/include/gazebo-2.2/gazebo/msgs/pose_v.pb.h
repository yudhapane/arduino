// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pose_v.proto

#ifndef PROTOBUF_pose_5fv_2eproto__INCLUDED
#define PROTOBUF_pose_5fv_2eproto__INCLUDED

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
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_pose_5fv_2eproto();
void protobuf_AssignDesc_pose_5fv_2eproto();
void protobuf_ShutdownFile_pose_5fv_2eproto();

class Pose_V;

// ===================================================================

class Pose_V : public ::google::protobuf::Message {
 public:
  Pose_V();
  virtual ~Pose_V();

  Pose_V(const Pose_V& from);

  inline Pose_V& operator=(const Pose_V& from) {
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
  static const Pose_V& default_instance();

  void Swap(Pose_V* other);

  // implements Message ----------------------------------------------

  Pose_V* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Pose_V& from);
  void MergeFrom(const Pose_V& from);
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

  // repeated .gazebo.msgs.Pose pose = 1;
  inline int pose_size() const;
  inline void clear_pose();
  static const int kPoseFieldNumber = 1;
  inline const ::gazebo::msgs::Pose& pose(int index) const;
  inline ::gazebo::msgs::Pose* mutable_pose(int index);
  inline ::gazebo::msgs::Pose* add_pose();
  inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Pose >&
      pose() const;
  inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Pose >*
      mutable_pose();

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Pose_V)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Pose > pose_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_pose_5fv_2eproto();
  friend void protobuf_AssignDesc_pose_5fv_2eproto();
  friend void protobuf_ShutdownFile_pose_5fv_2eproto();

  void InitAsDefaultInstance();
  static Pose_V* default_instance_;
};
// ===================================================================


// ===================================================================

// Pose_V

// repeated .gazebo.msgs.Pose pose = 1;
inline int Pose_V::pose_size() const {
  return pose_.size();
}
inline void Pose_V::clear_pose() {
  pose_.Clear();
}
inline const ::gazebo::msgs::Pose& Pose_V::pose(int index) const {
  return pose_.Get(index);
}
inline ::gazebo::msgs::Pose* Pose_V::mutable_pose(int index) {
  return pose_.Mutable(index);
}
inline ::gazebo::msgs::Pose* Pose_V::add_pose() {
  return pose_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Pose >&
Pose_V::pose() const {
  return pose_;
}
inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Pose >*
Pose_V::mutable_pose() {
  return &pose_;
}


typedef boost::shared_ptr<gazebo::msgs::Pose_V> Pose_VPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

typedef const boost::shared_ptr<gazebo::msgs::Pose_V const> ConstPose_VPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_pose_5fv_2eproto__INCLUDED
