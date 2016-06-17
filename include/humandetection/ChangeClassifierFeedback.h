// Generated by gencpp from file humandetection/ChangeClassifierFeedback.msg
// DO NOT EDIT!


#ifndef HUMANDETECTION_MESSAGE_CHANGECLASSIFIERFEEDBACK_H
#define HUMANDETECTION_MESSAGE_CHANGECLASSIFIERFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace humandetection
{
template <class ContainerAllocator>
struct ChangeClassifierFeedback_
{
  typedef ChangeClassifierFeedback_<ContainerAllocator> Type;

  ChangeClassifierFeedback_()
    {
    }
  ChangeClassifierFeedback_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }






  typedef boost::shared_ptr< ::humandetection::ChangeClassifierFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::humandetection::ChangeClassifierFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct ChangeClassifierFeedback_

typedef ::humandetection::ChangeClassifierFeedback_<std::allocator<void> > ChangeClassifierFeedback;

typedef boost::shared_ptr< ::humandetection::ChangeClassifierFeedback > ChangeClassifierFeedbackPtr;
typedef boost::shared_ptr< ::humandetection::ChangeClassifierFeedback const> ChangeClassifierFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::humandetection::ChangeClassifierFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::humandetection::ChangeClassifierFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace humandetection

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/msg', '/opt/ros/indigo/share/sensor_msgs/msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/msg'], 'humandetection': ['humandetection/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::humandetection::ChangeClassifierFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::humandetection::ChangeClassifierFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::humandetection::ChangeClassifierFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::humandetection::ChangeClassifierFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::humandetection::ChangeClassifierFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::humandetection::ChangeClassifierFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::humandetection::ChangeClassifierFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::humandetection::ChangeClassifierFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::humandetection::ChangeClassifierFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "humandetection/ChangeClassifierFeedback";
  }

  static const char* value(const ::humandetection::ChangeClassifierFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::humandetection::ChangeClassifierFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
";
  }

  static const char* value(const ::humandetection::ChangeClassifierFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::humandetection::ChangeClassifierFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct ChangeClassifierFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::humandetection::ChangeClassifierFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::humandetection::ChangeClassifierFeedback_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // HUMANDETECTION_MESSAGE_CHANGECLASSIFIERFEEDBACK_H