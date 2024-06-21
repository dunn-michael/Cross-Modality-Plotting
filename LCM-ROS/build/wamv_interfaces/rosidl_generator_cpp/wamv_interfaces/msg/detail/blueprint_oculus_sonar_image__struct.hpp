// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wamv_interfaces:msg/BlueprintOculusSonarImage.idl
// generated code does not contain a copyright notice

#ifndef WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_IMAGE__STRUCT_HPP_
#define WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_IMAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wamv_interfaces__msg__BlueprintOculusSonarImage __attribute__((deprecated))
#else
# define DEPRECATED__wamv_interfaces__msg__BlueprintOculusSonarImage __declspec(deprecated)
#endif

namespace wamv_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BlueprintOculusSonarImage_
{
  using Type = BlueprintOculusSonarImage_<ContainerAllocator>;

  explicit BlueprintOculusSonarImage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->height = 0l;
      this->width = 0l;
      this->encoding = "";
      this->is_bigendian = 0;
    }
  }

  explicit BlueprintOculusSonarImage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : encoding(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->height = 0l;
      this->width = 0l;
      this->encoding = "";
      this->is_bigendian = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    int64_t;
  _timestamp_type timestamp;
  using _height_type =
    int32_t;
  _height_type height;
  using _width_type =
    int32_t;
  _width_type width;
  using _encoding_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _encoding_type encoding;
  using _is_bigendian_type =
    int16_t;
  _is_bigendian_type is_bigendian;
  using _data_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__timestamp(
    const int64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__height(
    const int32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__width(
    const int32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__encoding(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->encoding = _arg;
    return *this;
  }
  Type & set__is_bigendian(
    const int16_t & _arg)
  {
    this->is_bigendian = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wamv_interfaces::msg::BlueprintOculusSonarImage_<ContainerAllocator> *;
  using ConstRawPtr =
    const wamv_interfaces::msg::BlueprintOculusSonarImage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wamv_interfaces::msg::BlueprintOculusSonarImage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wamv_interfaces::msg::BlueprintOculusSonarImage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wamv_interfaces::msg::BlueprintOculusSonarImage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wamv_interfaces::msg::BlueprintOculusSonarImage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wamv_interfaces::msg::BlueprintOculusSonarImage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wamv_interfaces::msg::BlueprintOculusSonarImage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wamv_interfaces::msg::BlueprintOculusSonarImage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wamv_interfaces::msg::BlueprintOculusSonarImage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wamv_interfaces__msg__BlueprintOculusSonarImage
    std::shared_ptr<wamv_interfaces::msg::BlueprintOculusSonarImage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wamv_interfaces__msg__BlueprintOculusSonarImage
    std::shared_ptr<wamv_interfaces::msg::BlueprintOculusSonarImage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BlueprintOculusSonarImage_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->encoding != other.encoding) {
      return false;
    }
    if (this->is_bigendian != other.is_bigendian) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const BlueprintOculusSonarImage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BlueprintOculusSonarImage_

// alias to use template instance with default allocator
using BlueprintOculusSonarImage =
  wamv_interfaces::msg::BlueprintOculusSonarImage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wamv_interfaces

#endif  // WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_IMAGE__STRUCT_HPP_
