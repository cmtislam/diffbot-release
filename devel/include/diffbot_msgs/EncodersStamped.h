// Generated by gencpp from file diffbot_msgs/EncodersStamped.msg
// DO NOT EDIT!


#ifndef DIFFBOT_MSGS_MESSAGE_ENCODERSSTAMPED_H
#define DIFFBOT_MSGS_MESSAGE_ENCODERSSTAMPED_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <diffbot_msgs/Encoders.h>

namespace diffbot_msgs
{
template <class ContainerAllocator>
struct EncodersStamped_
{
  typedef EncodersStamped_<ContainerAllocator> Type;

  EncodersStamped_()
    : header()
    , encoders()  {
    }
  EncodersStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , encoders(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::diffbot_msgs::Encoders_<ContainerAllocator>  _encoders_type;
  _encoders_type encoders;





  typedef boost::shared_ptr< ::diffbot_msgs::EncodersStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::diffbot_msgs::EncodersStamped_<ContainerAllocator> const> ConstPtr;

}; // struct EncodersStamped_

typedef ::diffbot_msgs::EncodersStamped_<std::allocator<void> > EncodersStamped;

typedef boost::shared_ptr< ::diffbot_msgs::EncodersStamped > EncodersStampedPtr;
typedef boost::shared_ptr< ::diffbot_msgs::EncodersStamped const> EncodersStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::diffbot_msgs::EncodersStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::diffbot_msgs::EncodersStamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::diffbot_msgs::EncodersStamped_<ContainerAllocator1> & lhs, const ::diffbot_msgs::EncodersStamped_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.encoders == rhs.encoders;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::diffbot_msgs::EncodersStamped_<ContainerAllocator1> & lhs, const ::diffbot_msgs::EncodersStamped_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace diffbot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::diffbot_msgs::EncodersStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::diffbot_msgs::EncodersStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::diffbot_msgs::EncodersStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::diffbot_msgs::EncodersStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::diffbot_msgs::EncodersStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::diffbot_msgs::EncodersStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::diffbot_msgs::EncodersStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "162975f999a4d19c3bdc0165594516da";
  }

  static const char* value(const ::diffbot_msgs::EncodersStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x162975f999a4d19cULL;
  static const uint64_t static_value2 = 0x3bdc0165594516daULL;
};

template<class ContainerAllocator>
struct DataType< ::diffbot_msgs::EncodersStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "diffbot_msgs/EncodersStamped";
  }

  static const char* value(const ::diffbot_msgs::EncodersStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::diffbot_msgs::EncodersStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This is a message to hold number of ticks from Encoders\n"
"Header header\n"
"\n"
"# Use an array of size two of type int32 for the two encoders.\n"
"# int32 is used instead of int64 because it is not supporte by Arduino/Teensy.\n"
"# An overflow is also unlikely with the encoders of the DG01D-E \n"
"# motor with its encoder because of its low encoder resolution\n"
"Encoders encoders\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: diffbot_msgs/Encoders\n"
"# This is a message to hold number of ticks from Encoders\n"
"# Use an array of size two of type int32 for the two encoders.\n"
"# int32 is used instead of int64 because it is not supporte by Arduino/Teensy.\n"
"# An overflow is also unlikely with the encoders of the DG01D-E \n"
"# motor with its encoder because of its low encoder resolution\n"
"int32[2] ticks\n"
;
  }

  static const char* value(const ::diffbot_msgs::EncodersStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::diffbot_msgs::EncodersStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.encoders);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EncodersStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::diffbot_msgs::EncodersStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::diffbot_msgs::EncodersStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "encoders: ";
    s << std::endl;
    Printer< ::diffbot_msgs::Encoders_<ContainerAllocator> >::stream(s, indent + "  ", v.encoders);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DIFFBOT_MSGS_MESSAGE_ENCODERSSTAMPED_H
