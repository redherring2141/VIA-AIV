// Generated by gencpp from file hector_nav_msgs/GetNormalRequest.msg
// DO NOT EDIT!


#ifndef HECTOR_NAV_MSGS_MESSAGE_GETNORMALREQUEST_H
#define HECTOR_NAV_MSGS_MESSAGE_GETNORMALREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PointStamped.h>

namespace hector_nav_msgs
{
template <class ContainerAllocator>
struct GetNormalRequest_
{
  typedef GetNormalRequest_<ContainerAllocator> Type;

  GetNormalRequest_()
    : point()  {
    }
  GetNormalRequest_(const ContainerAllocator& _alloc)
    : point(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::PointStamped_<ContainerAllocator>  _point_type;
  _point_type point;





  typedef boost::shared_ptr< ::hector_nav_msgs::GetNormalRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hector_nav_msgs::GetNormalRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetNormalRequest_

typedef ::hector_nav_msgs::GetNormalRequest_<std::allocator<void> > GetNormalRequest;

typedef boost::shared_ptr< ::hector_nav_msgs::GetNormalRequest > GetNormalRequestPtr;
typedef boost::shared_ptr< ::hector_nav_msgs::GetNormalRequest const> GetNormalRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hector_nav_msgs::GetNormalRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hector_nav_msgs::GetNormalRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace hector_nav_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::hector_nav_msgs::GetNormalRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hector_nav_msgs::GetNormalRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hector_nav_msgs::GetNormalRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hector_nav_msgs::GetNormalRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hector_nav_msgs::GetNormalRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hector_nav_msgs::GetNormalRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hector_nav_msgs::GetNormalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "47dfdbd810b48d0a47b7ad67e4191bcc";
  }

  static const char* value(const ::hector_nav_msgs::GetNormalRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x47dfdbd810b48d0aULL;
  static const uint64_t static_value2 = 0x47b7ad67e4191bccULL;
};

template<class ContainerAllocator>
struct DataType< ::hector_nav_msgs::GetNormalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hector_nav_msgs/GetNormalRequest";
  }

  static const char* value(const ::hector_nav_msgs::GetNormalRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hector_nav_msgs::GetNormalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/PointStamped point\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PointStamped\n\
# This represents a Point with reference coordinate frame and timestamp\n\
Header header\n\
Point point\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::hector_nav_msgs::GetNormalRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hector_nav_msgs::GetNormalRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.point);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetNormalRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hector_nav_msgs::GetNormalRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hector_nav_msgs::GetNormalRequest_<ContainerAllocator>& v)
  {
    s << indent << "point: ";
    s << std::endl;
    Printer< ::geometry_msgs::PointStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.point);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HECTOR_NAV_MSGS_MESSAGE_GETNORMALREQUEST_H
