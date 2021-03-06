// Generated by gencpp from file humandetection/detectionH_timestamp.msg
// DO NOT EDIT!


#ifndef HUMANDETECTION_MESSAGE_DETECTIONH_TIMESTAMP_H
#define HUMANDETECTION_MESSAGE_DETECTIONH_TIMESTAMP_H


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
struct detectionH_timestamp_
{
  typedef detectionH_timestamp_<ContainerAllocator> Type;

  detectionH_timestamp_()
    : sec(0)
    , usec(0)  {
    }
  detectionH_timestamp_(const ContainerAllocator& _alloc)
    : sec(0)
    , usec(0)  {
  (void)_alloc;
    }



   typedef uint32_t _sec_type;
  _sec_type sec;

   typedef uint32_t _usec_type;
  _usec_type usec;




  typedef boost::shared_ptr< ::humandetection::detectionH_timestamp_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::humandetection::detectionH_timestamp_<ContainerAllocator> const> ConstPtr;

}; // struct detectionH_timestamp_

typedef ::humandetection::detectionH_timestamp_<std::allocator<void> > detectionH_timestamp;

typedef boost::shared_ptr< ::humandetection::detectionH_timestamp > detectionH_timestampPtr;
typedef boost::shared_ptr< ::humandetection::detectionH_timestamp const> detectionH_timestampConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::humandetection::detectionH_timestamp_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::humandetection::detectionH_timestamp_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::humandetection::detectionH_timestamp_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::humandetection::detectionH_timestamp_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::humandetection::detectionH_timestamp_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::humandetection::detectionH_timestamp_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::humandetection::detectionH_timestamp_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::humandetection::detectionH_timestamp_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::humandetection::detectionH_timestamp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "90da89d9efe7e712be65708e3d776fa4";
  }

  static const char* value(const ::humandetection::detectionH_timestamp_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x90da89d9efe7e712ULL;
  static const uint64_t static_value2 = 0xbe65708e3d776fa4ULL;
};

template<class ContainerAllocator>
struct DataType< ::humandetection::detectionH_timestamp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "humandetection/detectionH_timestamp";
  }

  static const char* value(const ::humandetection::detectionH_timestamp_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::humandetection::detectionH_timestamp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# IDL struct ::detectionH::timestamp\n\
uint32 sec\n\
uint32 usec\n\
";
  }

  static const char* value(const ::humandetection::detectionH_timestamp_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::humandetection::detectionH_timestamp_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sec);
      stream.next(m.usec);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct detectionH_timestamp_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::humandetection::detectionH_timestamp_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::humandetection::detectionH_timestamp_<ContainerAllocator>& v)
  {
    s << indent << "sec: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.sec);
    s << indent << "usec: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.usec);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HUMANDETECTION_MESSAGE_DETECTIONH_TIMESTAMP_H
