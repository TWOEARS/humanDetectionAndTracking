// Generated by gencpp from file humandetection/connect_portResponse.msg
// DO NOT EDIT!


#ifndef HUMANDETECTION_MESSAGE_CONNECT_PORTRESPONSE_H
#define HUMANDETECTION_MESSAGE_CONNECT_PORTRESPONSE_H


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
struct connect_portResponse_
{
  typedef connect_portResponse_<ContainerAllocator> Type;

  connect_portResponse_()
    : genom_success(false)
    , genom_exdetail()  {
    }
  connect_portResponse_(const ContainerAllocator& _alloc)
    : genom_success(false)
    , genom_exdetail(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _genom_success_type;
  _genom_success_type genom_success;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _genom_exdetail_type;
  _genom_exdetail_type genom_exdetail;




  typedef boost::shared_ptr< ::humandetection::connect_portResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::humandetection::connect_portResponse_<ContainerAllocator> const> ConstPtr;

}; // struct connect_portResponse_

typedef ::humandetection::connect_portResponse_<std::allocator<void> > connect_portResponse;

typedef boost::shared_ptr< ::humandetection::connect_portResponse > connect_portResponsePtr;
typedef boost::shared_ptr< ::humandetection::connect_portResponse const> connect_portResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::humandetection::connect_portResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::humandetection::connect_portResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace humandetection

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'humandetection': ['humandetection/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::humandetection::connect_portResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::humandetection::connect_portResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::humandetection::connect_portResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::humandetection::connect_portResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::humandetection::connect_portResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::humandetection::connect_portResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::humandetection::connect_portResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0d79450287345aef3f3e331856b25242";
  }

  static const char* value(const ::humandetection::connect_portResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0d79450287345aefULL;
  static const uint64_t static_value2 = 0x3f3e331856b25242ULL;
};

template<class ContainerAllocator>
struct DataType< ::humandetection::connect_portResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "humandetection/connect_portResponse";
  }

  static const char* value(const ::humandetection::connect_portResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::humandetection::connect_portResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool genom_success\n\
string genom_exdetail\n\
\n\
";
  }

  static const char* value(const ::humandetection::connect_portResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::humandetection::connect_portResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.genom_success);
      stream.next(m.genom_exdetail);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct connect_portResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::humandetection::connect_portResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::humandetection::connect_portResponse_<ContainerAllocator>& v)
  {
    s << indent << "genom_success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.genom_success);
    s << indent << "genom_exdetail: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.genom_exdetail);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HUMANDETECTION_MESSAGE_CONNECT_PORTRESPONSE_H
