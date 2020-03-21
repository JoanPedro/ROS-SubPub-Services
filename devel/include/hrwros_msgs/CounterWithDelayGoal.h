// Generated by gencpp from file hrwros_msgs/CounterWithDelayGoal.msg
// DO NOT EDIT!


#ifndef HRWROS_MSGS_MESSAGE_COUNTERWITHDELAYGOAL_H
#define HRWROS_MSGS_MESSAGE_COUNTERWITHDELAYGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace hrwros_msgs
{
template <class ContainerAllocator>
struct CounterWithDelayGoal_
{
  typedef CounterWithDelayGoal_<ContainerAllocator> Type;

  CounterWithDelayGoal_()
    : num_counts(0)  {
    }
  CounterWithDelayGoal_(const ContainerAllocator& _alloc)
    : num_counts(0)  {
  (void)_alloc;
    }



   typedef uint32_t _num_counts_type;
  _num_counts_type num_counts;





  typedef boost::shared_ptr< ::hrwros_msgs::CounterWithDelayGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hrwros_msgs::CounterWithDelayGoal_<ContainerAllocator> const> ConstPtr;

}; // struct CounterWithDelayGoal_

typedef ::hrwros_msgs::CounterWithDelayGoal_<std::allocator<void> > CounterWithDelayGoal;

typedef boost::shared_ptr< ::hrwros_msgs::CounterWithDelayGoal > CounterWithDelayGoalPtr;
typedef boost::shared_ptr< ::hrwros_msgs::CounterWithDelayGoal const> CounterWithDelayGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hrwros_msgs::CounterWithDelayGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hrwros_msgs::CounterWithDelayGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace hrwros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'shape_msgs': ['/opt/ros/melodic/share/shape_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'moveit_msgs': ['/opt/ros/melodic/share/moveit_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/melodic/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/melodic/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/melodic/share/octomap_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'hrwros_msgs': ['/home/joan/hrwros_ws/src/hrwros/hrwros_msgs/msg', '/home/joan/hrwros_ws/devel/.private/hrwros_msgs/share/hrwros_msgs/msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_msgs::CounterWithDelayGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_msgs::CounterWithDelayGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_msgs::CounterWithDelayGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_msgs::CounterWithDelayGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_msgs::CounterWithDelayGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_msgs::CounterWithDelayGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hrwros_msgs::CounterWithDelayGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "42f5ddfe2ee41298918bff5bf724cca8";
  }

  static const char* value(const ::hrwros_msgs::CounterWithDelayGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x42f5ddfe2ee41298ULL;
  static const uint64_t static_value2 = 0x918bff5bf724cca8ULL;
};

template<class ContainerAllocator>
struct DataType< ::hrwros_msgs::CounterWithDelayGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hrwros_msgs/CounterWithDelayGoal";
  }

  static const char* value(const ::hrwros_msgs::CounterWithDelayGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hrwros_msgs::CounterWithDelayGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"uint32 num_counts		# Goal message: number of counts to count up to.\n"
;
  }

  static const char* value(const ::hrwros_msgs::CounterWithDelayGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hrwros_msgs::CounterWithDelayGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.num_counts);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CounterWithDelayGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hrwros_msgs::CounterWithDelayGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hrwros_msgs::CounterWithDelayGoal_<ContainerAllocator>& v)
  {
    s << indent << "num_counts: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.num_counts);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HRWROS_MSGS_MESSAGE_COUNTERWITHDELAYGOAL_H
