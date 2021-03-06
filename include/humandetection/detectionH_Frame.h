// Generated by gencpp from file humandetection/detectionH_Frame.msg
// DO NOT EDIT!


#ifndef HUMANDETECTION_MESSAGE_DETECTIONH_FRAME_H
#define HUMANDETECTION_MESSAGE_DETECTIONH_FRAME_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <humandetection/detectionH_timestamp.h>
#include <humandetection/detectionH_people.h>

namespace humandetection
{
template <class ContainerAllocator>
struct detectionH_Frame_
{
  typedef detectionH_Frame_<ContainerAllocator> Type;

  detectionH_Frame_()
    : frameNumber(0)
    , time()
    , people()  {
    }
  detectionH_Frame_(const ContainerAllocator& _alloc)
    : frameNumber(0)
    , time(_alloc)
    , people(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _frameNumber_type;
  _frameNumber_type frameNumber;

   typedef  ::humandetection::detectionH_timestamp_<ContainerAllocator>  _time_type;
  _time_type time;

   typedef std::vector< ::humandetection::detectionH_people_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::humandetection::detectionH_people_<ContainerAllocator> >::other >  _people_type;
  _people_type people;




  typedef boost::shared_ptr< ::humandetection::detectionH_Frame_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::humandetection::detectionH_Frame_<ContainerAllocator> const> ConstPtr;

}; // struct detectionH_Frame_

typedef ::humandetection::detectionH_Frame_<std::allocator<void> > detectionH_Frame;

typedef boost::shared_ptr< ::humandetection::detectionH_Frame > detectionH_FramePtr;
typedef boost::shared_ptr< ::humandetection::detectionH_Frame const> detectionH_FrameConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::humandetection::detectionH_Frame_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::humandetection::detectionH_Frame_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace humandetection

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/msg', '/opt/ros/indigo/share/sensor_msgs/msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/msg'], 'humandetection': ['humandetection/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::humandetection::detectionH_Frame_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::humandetection::detectionH_Frame_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::humandetection::detectionH_Frame_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::humandetection::detectionH_Frame_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::humandetection::detectionH_Frame_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::humandetection::detectionH_Frame_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::humandetection::detectionH_Frame_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bc088488ae2924594d1d50e14a0d6104";
  }

  static const char* value(const ::humandetection::detectionH_Frame_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbc088488ae292459ULL;
  static const uint64_t static_value2 = 0x4d1d50e14a0d6104ULL;
};

template<class ContainerAllocator>
struct DataType< ::humandetection::detectionH_Frame_<ContainerAllocator> >
{
  static const char* value()
  {
    return "humandetection/detectionH_Frame";
  }

  static const char* value(const ::humandetection::detectionH_Frame_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::humandetection::detectionH_Frame_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# IDL struct ::detectionH::Frame\n\
int32 frameNumber\n\
detectionH_timestamp time\n\
detectionH_people[] people\n\
\n\
================================================================================\n\
MSG: humandetection/detectionH_timestamp\n\
# IDL struct ::detectionH::timestamp\n\
uint32 sec\n\
uint32 usec\n\
\n\
================================================================================\n\
MSG: humandetection/detectionH_people\n\
# IDL struct ::detectionH::people\n\
int32 ID\n\
detectionH_world_coordinates coordinates\n\
\n\
================================================================================\n\
MSG: humandetection/detectionH_world_coordinates\n\
# IDL struct ::detectionH::world_coordinates\n\
float32 x\n\
float32 y\n\
float32 z\n\
float32 azimuth\n\
";
  }

  static const char* value(const ::humandetection::detectionH_Frame_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::humandetection::detectionH_Frame_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.frameNumber);
      stream.next(m.time);
      stream.next(m.people);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct detectionH_Frame_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::humandetection::detectionH_Frame_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::humandetection::detectionH_Frame_<ContainerAllocator>& v)
  {
    s << indent << "frameNumber: ";
    Printer<int32_t>::stream(s, indent + "  ", v.frameNumber);
    s << indent << "time: ";
    s << std::endl;
    Printer< ::humandetection::detectionH_timestamp_<ContainerAllocator> >::stream(s, indent + "  ", v.time);
    s << indent << "people[]" << std::endl;
    for (size_t i = 0; i < v.people.size(); ++i)
    {
      s << indent << "  people[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::humandetection::detectionH_people_<ContainerAllocator> >::stream(s, indent + "    ", v.people[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // HUMANDETECTION_MESSAGE_DETECTIONH_FRAME_H
