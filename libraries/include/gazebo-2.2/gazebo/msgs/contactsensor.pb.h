// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: contactsensor.proto

#ifndef PROTOBUF_contactsensor_2eproto__INCLUDED
#define PROTOBUF_contactsensor_2eproto__INCLUDED

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
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_contactsensor_2eproto();
void protobuf_AssignDesc_contactsensor_2eproto();
void protobuf_ShutdownFile_contactsensor_2eproto();

class ContactSensor;

// ===================================================================

class ContactSensor : public ::google::protobuf::Message {
 public:
  ContactSensor();
  virtual ~ContactSensor();

  ContactSensor(const ContactSensor& from);

  inline ContactSensor& operator=(const ContactSensor& from) {
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
  static const ContactSensor& default_instance();

  void Swap(ContactSensor* other);

  // implements Message ----------------------------------------------

  ContactSensor* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ContactSensor& from);
  void MergeFrom(const ContactSensor& from);
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

  // optional string collision_name = 1;
  inline bool has_collision_name() const;
  inline void clear_collision_name();
  static const int kCollisionNameFieldNumber = 1;
  inline const ::std::string& collision_name() const;
  inline void set_collision_name(const ::std::string& value);
  inline void set_collision_name(const char* value);
  inline void set_collision_name(const char* value, size_t size);
  inline ::std::string* mutable_collision_name();
  inline ::std::string* release_collision_name();
  inline void set_allocated_collision_name(::std::string* collision_name);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.ContactSensor)
 private:
  inline void set_has_collision_name();
  inline void clear_has_collision_name();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* collision_name_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_contactsensor_2eproto();
  friend void protobuf_AssignDesc_contactsensor_2eproto();
  friend void protobuf_ShutdownFile_contactsensor_2eproto();

  void InitAsDefaultInstance();
  static ContactSensor* default_instance_;
};
// ===================================================================


// ===================================================================

// ContactSensor

// optional string collision_name = 1;
inline bool ContactSensor::has_collision_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ContactSensor::set_has_collision_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ContactSensor::clear_has_collision_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ContactSensor::clear_collision_name() {
  if (collision_name_ != &::google::protobuf::internal::kEmptyString) {
    collision_name_->clear();
  }
  clear_has_collision_name();
}
inline const ::std::string& ContactSensor::collision_name() const {
  return *collision_name_;
}
inline void ContactSensor::set_collision_name(const ::std::string& value) {
  set_has_collision_name();
  if (collision_name_ == &::google::protobuf::internal::kEmptyString) {
    collision_name_ = new ::std::string;
  }
  collision_name_->assign(value);
}
inline void ContactSensor::set_collision_name(const char* value) {
  set_has_collision_name();
  if (collision_name_ == &::google::protobuf::internal::kEmptyString) {
    collision_name_ = new ::std::string;
  }
  collision_name_->assign(value);
}
inline void ContactSensor::set_collision_name(const char* value, size_t size) {
  set_has_collision_name();
  if (collision_name_ == &::google::protobuf::internal::kEmptyString) {
    collision_name_ = new ::std::string;
  }
  collision_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ContactSensor::mutable_collision_name() {
  set_has_collision_name();
  if (collision_name_ == &::google::protobuf::internal::kEmptyString) {
    collision_name_ = new ::std::string;
  }
  return collision_name_;
}
inline ::std::string* ContactSensor::release_collision_name() {
  clear_has_collision_name();
  if (collision_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = collision_name_;
    collision_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ContactSensor::set_allocated_collision_name(::std::string* collision_name) {
  if (collision_name_ != &::google::protobuf::internal::kEmptyString) {
    delete collision_name_;
  }
  if (collision_name) {
    set_has_collision_name();
    collision_name_ = collision_name;
  } else {
    clear_has_collision_name();
    collision_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


typedef boost::shared_ptr<gazebo::msgs::ContactSensor> ContactSensorPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

typedef const boost::shared_ptr<gazebo::msgs::ContactSensor const> ConstContactSensorPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_contactsensor_2eproto__INCLUDED
