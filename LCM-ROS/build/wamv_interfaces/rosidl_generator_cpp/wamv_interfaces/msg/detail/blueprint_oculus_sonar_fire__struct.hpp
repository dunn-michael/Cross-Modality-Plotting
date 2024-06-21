// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wamv_interfaces:msg/BlueprintOculusSonarFire.idl
// generated code does not contain a copyright notice

#ifndef WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_FIRE__STRUCT_HPP_
#define WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_FIRE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wamv_interfaces__msg__BlueprintOculusSonarFire __attribute__((deprecated))
#else
# define DEPRECATED__wamv_interfaces__msg__BlueprintOculusSonarFire __declspec(deprecated)
#endif

namespace wamv_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BlueprintOculusSonarFire_
{
  using Type = BlueprintOculusSonarFire_<ContainerAllocator>;

  explicit BlueprintOculusSonarFire_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->mode = 0;
      this->gamma = 0;
      this->flags = 0;
      this->ping_rate = 0;
      this->range = 0.0f;
      this->gain = 0.0f;
      this->speed_of_sound = 0.0f;
      this->salinity = 0.0f;
    }
  }

  explicit BlueprintOculusSonarFire_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->mode = 0;
      this->gamma = 0;
      this->flags = 0;
      this->ping_rate = 0;
      this->range = 0.0f;
      this->gain = 0.0f;
      this->speed_of_sound = 0.0f;
      this->salinity = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    int64_t;
  _timestamp_type timestamp;
  using _mode_type =
    int16_t;
  _mode_type mode;
  using _gamma_type =
    int16_t;
  _gamma_type gamma;
  using _flags_type =
    int16_t;
  _flags_type flags;
  using _ping_rate_type =
    int16_t;
  _ping_rate_type ping_rate;
  using _range_type =
    float;
  _range_type range;
  using _gain_type =
    float;
  _gain_type gain;
  using _speed_of_sound_type =
    float;
  _speed_of_sound_type speed_of_sound;
  using _salinity_type =
    float;
  _salinity_type salinity;

  // setters for named parameter idiom
  Type & set__timestamp(
    const int64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__mode(
    const int16_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__gamma(
    const int16_t & _arg)
  {
    this->gamma = _arg;
    return *this;
  }
  Type & set__flags(
    const int16_t & _arg)
  {
    this->flags = _arg;
    return *this;
  }
  Type & set__ping_rate(
    const int16_t & _arg)
  {
    this->ping_rate = _arg;
    return *this;
  }
  Type & set__range(
    const float & _arg)
  {
    this->range = _arg;
    return *this;
  }
  Type & set__gain(
    const float & _arg)
  {
    this->gain = _arg;
    return *this;
  }
  Type & set__speed_of_sound(
    const float & _arg)
  {
    this->speed_of_sound = _arg;
    return *this;
  }
  Type & set__salinity(
    const float & _arg)
  {
    this->salinity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wamv_interfaces::msg::BlueprintOculusSonarFire_<ContainerAllocator> *;
  using ConstRawPtr =
    const wamv_interfaces::msg::BlueprintOculusSonarFire_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wamv_interfaces::msg::BlueprintOculusSonarFire_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wamv_interfaces::msg::BlueprintOculusSonarFire_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wamv_interfaces::msg::BlueprintOculusSonarFire_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wamv_interfaces::msg::BlueprintOculusSonarFire_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wamv_interfaces::msg::BlueprintOculusSonarFire_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wamv_interfaces::msg::BlueprintOculusSonarFire_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wamv_interfaces::msg::BlueprintOculusSonarFire_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wamv_interfaces::msg::BlueprintOculusSonarFire_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wamv_interfaces__msg__BlueprintOculusSonarFire
    std::shared_ptr<wamv_interfaces::msg::BlueprintOculusSonarFire_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wamv_interfaces__msg__BlueprintOculusSonarFire
    std::shared_ptr<wamv_interfaces::msg::BlueprintOculusSonarFire_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BlueprintOculusSonarFire_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->gamma != other.gamma) {
      return false;
    }
    if (this->flags != other.flags) {
      return false;
    }
    if (this->ping_rate != other.ping_rate) {
      return false;
    }
    if (this->range != other.range) {
      return false;
    }
    if (this->gain != other.gain) {
      return false;
    }
    if (this->speed_of_sound != other.speed_of_sound) {
      return false;
    }
    if (this->salinity != other.salinity) {
      return false;
    }
    return true;
  }
  bool operator!=(const BlueprintOculusSonarFire_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BlueprintOculusSonarFire_

// alias to use template instance with default allocator
using BlueprintOculusSonarFire =
  wamv_interfaces::msg::BlueprintOculusSonarFire_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wamv_interfaces

#endif  // WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_FIRE__STRUCT_HPP_
