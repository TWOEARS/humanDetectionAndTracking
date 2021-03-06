// Generated by gencpp from file humandetection/genom_state_task.msg
// DO NOT EDIT!


#ifndef HUMANDETECTION_MESSAGE_GENOM_STATE_TASK_H
#define HUMANDETECTION_MESSAGE_GENOM_STATE_TASK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <humandetection/genom_state_rusage.h>
#include <humandetection/genom_state_activity.h>

namespace humandetection
{
template <class ContainerAllocator>
struct genom_state_task_
{
  typedef genom_state_task_<ContainerAllocator> Type;

  genom_state_task_()
    : name()
    , rusage()
    , activity()  {
    }
  genom_state_task_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , rusage(_alloc)
    , activity(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef  ::humandetection::genom_state_rusage_<ContainerAllocator>  _rusage_type;
  _rusage_type rusage;

   typedef std::vector< ::humandetection::genom_state_activity_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::humandetection::genom_state_activity_<ContainerAllocator> >::other >  _activity_type;
  _activity_type activity;




  typedef boost::shared_ptr< ::humandetection::genom_state_task_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::humandetection::genom_state_task_<ContainerAllocator> const> ConstPtr;

}; // struct genom_state_task_

typedef ::humandetection::genom_state_task_<std::allocator<void> > genom_state_task;

typedef boost::shared_ptr< ::humandetection::genom_state_task > genom_state_taskPtr;
typedef boost::shared_ptr< ::humandetection::genom_state_task const> genom_state_taskConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::humandetection::genom_state_task_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::humandetection::genom_state_task_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::humandetection::genom_state_task_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::humandetection::genom_state_task_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::humandetection::genom_state_task_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::humandetection::genom_state_task_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::humandetection::genom_state_task_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::humandetection::genom_state_task_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::humandetection::genom_state_task_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b6ebe21c3b706530495c8ef9b94c0cf3";
  }

  static const char* value(const ::humandetection::genom_state_task_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb6ebe21c3b706530ULL;
  static const uint64_t static_value2 = 0x495c8ef9b94c0cf3ULL;
};

template<class ContainerAllocator>
struct DataType< ::humandetection::genom_state_task_<ContainerAllocator> >
{
  static const char* value()
  {
    return "humandetection/genom_state_task";
  }

  static const char* value(const ::humandetection::genom_state_task_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::humandetection::genom_state_task_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# IDL struct ::genom::state::task\n\
string name\n\
genom_state_rusage rusage\n\
genom_state_activity[] activity\n\
\n\
================================================================================\n\
MSG: humandetection/genom_state_rusage\n\
# IDL struct ::genom::state::rusage\n\
uint32 cycles\n\
genom_state_stats timings\n\
genom_state_stats load\n\
\n\
================================================================================\n\
MSG: humandetection/genom_state_stats\n\
# IDL struct ::genom::state::stats\n\
float32 last\n\
float32 max\n\
float32 avg\n\
\n\
================================================================================\n\
MSG: humandetection/genom_state_activity\n\
# IDL struct ::genom::state::activity\n\
uint32 id\n\
string name\n\
";
  }

  static const char* value(const ::humandetection::genom_state_task_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::humandetection::genom_state_task_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.rusage);
      stream.next(m.activity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct genom_state_task_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::humandetection::genom_state_task_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::humandetection::genom_state_task_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "rusage: ";
    s << std::endl;
    Printer< ::humandetection::genom_state_rusage_<ContainerAllocator> >::stream(s, indent + "  ", v.rusage);
    s << indent << "activity[]" << std::endl;
    for (size_t i = 0; i < v.activity.size(); ++i)
    {
      s << indent << "  activity[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::humandetection::genom_state_activity_<ContainerAllocator> >::stream(s, indent + "    ", v.activity[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // HUMANDETECTION_MESSAGE_GENOM_STATE_TASK_H
