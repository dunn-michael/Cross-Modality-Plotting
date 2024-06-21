// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wamv_interfaces:msg/BlueprintOculusSonarPing.idl
// generated code does not contain a copyright notice

#ifndef WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_PING__STRUCT_HPP_
#define WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_PING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'fire_msg'
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_fire__struct.hpp"
// Member 'image_msg'
#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__wamv_interfaces__msg__BlueprintOculusSonarPing __attribute__((deprecated))
#else
# define DEPRECATED__wamv_interfaces__msg__BlueprintOculusSonarPing __declspec(deprecated)
#endif

namespace wamv_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BlueprintOculusSonarPing_
{
  using Type = BlueprintOculusSonarPing_<ContainerAllocator>;

  explicit BlueprintOculusSonarPing_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fire_msg(_init),
    image_msg(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->ping_id = 0l;
      this->part_number = 0;
      this->start_time = 0l;
      this->num_ranges = 0l;
      this->num_beams = 0l;
      this->range_resolution = 0.0f;
    }
  }

  explicit BlueprintOculusSonarPing_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fire_msg(_alloc, _init),
    image_msg(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->ping_id = 0l;
      this->part_number = 0;
      this->start_time = 0l;
      this->num_ranges = 0l;
      this->num_beams = 0l;
      this->range_resolution = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    int64_t;
  _timestamp_type timestamp;
  using _ping_id_type =
    int32_t;
  _ping_id_type ping_id;
  using _part_number_type =
    int16_t;
  _part_number_type part_number;
  using _start_time_type =
    int32_t;
  _start_time_type start_time;
  using _num_ranges_type =
    int32_t;
  _num_ranges_type num_ranges;
  using _num_beams_type =
    int32_t;
  _num_beams_type num_beams;
  using _bearings_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _bearings_type bearings;
  using _range_resolution_type =
    float;
  _range_resolution_type range_resolution;
  using _fire_msg_type =
    wamv_interfaces::msg::BlueprintOculusSonarFire_<ContainerAllocator>;
  _fire_msg_type fire_msg;
  using _image_msg_type =
    wamv_interfaces::msg::BlueprintOculusSonarImage_<ContainerAllocator>;
  _image_msg_type image_msg;

  // setters for named parameter idiom
  Type & set__timestamp(
    const int64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__ping_id(
    const int32_t & _arg)
  {
    this->ping_id = _arg;
    return *this;
  }
  Type & set__part_number(
    const int16_t & _arg)
  {
    this->part_number = _arg;
    return *this;
  }
  Type & set__start_time(
    const int32_t & _arg)
  {
    this->start_time = _arg;
    return *this;
  }
  Type & set__num_ranges(
    const int32_t & _arg)
  {
    this->num_ranges = _arg;
    return *this;
  }
  Type & set__num_beams(
    const int32_t & _arg)
  {
    this->num_beams = _arg;
    return *this;
  }
  Type & set__bearings(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->bearings = _arg;
    return *this;
  }
  Type & set__range_resolution(
    const float & _arg)
  {
    this->range_resolution = _arg;
    return *this;
  }
  Type & set__fire_msg(
    const wamv_interfaces::msg::BlueprintOculusSonarFire_<ContainerAllocator> & _arg)
  {
    this->fire_msg = _arg;
    return *this;
  }
  Type & set__image_msg(
    const wamv_interfaces::msg::BlueprintOculusSonarImage_<ContainerAllocator> & _arg)
  {
    this->image_msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wamv_interfaces::msg::BlueprintOculusSonarPing_<ContainerAllocator> *;
  using ConstRawPtr =
    const wamv_interfaces::msg::BlueprintOculusSonarPing_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wamv_interfaces::msg::BlueprintOculusSonarPing_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wamv_interfaces::msg::BlueprintOculusSonarPing_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wamv_interfaces::msg::BlueprintOculusSonarPing_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wamv_interfaces::msg::BlueprintOculusSonarPing_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wamv_interfaces::msg::BlueprintOculusSonarPing_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wamv_interfaces::msg::BlueprintOculusSonarPing_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wamv_interfaces::msg::BlueprintOculusSonarPing_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wamv_interfaces::msg::BlueprintOculusSonarPing_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wamv_interfaces__msg__BlueprintOculusSonarPing
    std::shared_ptr<wamv_interfaces::msg::BlueprintOculusSonarPing_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wamv_interfaces__msg__BlueprintOculusSonarPing
    std::shared_ptr<wamv_interfaces::msg::BlueprintOculusSonarPing_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BlueprintOculusSonarPing_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->ping_id != other.ping_id) {
      return false;
    }
    if (this->part_number != other.part_number) {
      return false;
    }
    if (this->start_time != other.start_time) {
      return false;
    }
    if (this->num_ranges != other.num_ranges) {
      return false;
    }
    if (this->num_beams != other.num_beams) {
      return false;
    }
    if (this->bearings != other.bearings) {
      return false;
    }
    if (this->range_resolution != other.range_resolution) {
      return false;
    }
    if (this->fire_msg != other.fire_msg) {
      return false;
    }
    if (this->image_msg != other.image_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const BlueprintOculusSonarPing_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BlueprintOculusSonarPing_

// alias to use template instance with default allocator
using BlueprintOculusSonarPing =
  wamv_interfaces::msg::BlueprintOculusSonarPing_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wamv_interfaces

#endif  // WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_PING__STRUCT_HPP_
