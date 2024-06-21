// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wamv_interfaces:msg/MicrostrainImu.idl
// generated code does not contain a copyright notice

#ifndef WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_IMU__STRUCT_HPP_
#define WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_IMU__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wamv_interfaces__msg__MicrostrainImu __attribute__((deprecated))
#else
# define DEPRECATED__wamv_interfaces__msg__MicrostrainImu __declspec(deprecated)
#endif

namespace wamv_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MicrostrainImu_
{
  using Type = MicrostrainImu_<ContainerAllocator>;

  explicit MicrostrainImu_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->scaled_accel_x = 0.0f;
      this->scaled_accel_y = 0.0f;
      this->scaled_accel_z = 0.0f;
      this->scaled_gyro_x = 0.0f;
      this->scaled_gyro_y = 0.0f;
      this->scaled_gyro_z = 0.0f;
      this->scaled_mag_x = 0.0f;
      this->scaled_mag_y = 0.0f;
      this->scaled_mag_z = 0.0f;
      this->delta_theta_x = 0.0f;
      this->delta_theta_y = 0.0f;
      this->delta_theta_z = 0.0f;
      this->delta_vel_x = 0.0f;
      this->delta_vel_y = 0.0f;
      this->delta_vel_z = 0.0f;
      std::fill<typename std::array<float, 9>::iterator, float>(this->orient_matrix.begin(), this->orient_matrix.end(), 0.0f);
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->orient_quaternion.begin(), this->orient_quaternion.end(), 0.0f);
      this->stabilized_mag_x = 0.0f;
      this->stabilized_mag_y = 0.0f;
      this->stabilized_mag_z = 0.0f;
      this->stabilized_accel_x = 0.0f;
      this->stabilized_accel_y = 0.0f;
      this->stabilized_accel_z = 0.0f;
      this->gps_correl_timestamp_tow = 0.0;
      this->gps_correl_timestamp_week_num = 0l;
      this->gps_correl_timestamp_flags = 0l;
      this->scaled_ambient_pressure = 0.0f;
    }
  }

  explicit MicrostrainImu_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : orient_matrix(_alloc),
    orient_quaternion(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->scaled_accel_x = 0.0f;
      this->scaled_accel_y = 0.0f;
      this->scaled_accel_z = 0.0f;
      this->scaled_gyro_x = 0.0f;
      this->scaled_gyro_y = 0.0f;
      this->scaled_gyro_z = 0.0f;
      this->scaled_mag_x = 0.0f;
      this->scaled_mag_y = 0.0f;
      this->scaled_mag_z = 0.0f;
      this->delta_theta_x = 0.0f;
      this->delta_theta_y = 0.0f;
      this->delta_theta_z = 0.0f;
      this->delta_vel_x = 0.0f;
      this->delta_vel_y = 0.0f;
      this->delta_vel_z = 0.0f;
      std::fill<typename std::array<float, 9>::iterator, float>(this->orient_matrix.begin(), this->orient_matrix.end(), 0.0f);
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->orient_quaternion.begin(), this->orient_quaternion.end(), 0.0f);
      this->stabilized_mag_x = 0.0f;
      this->stabilized_mag_y = 0.0f;
      this->stabilized_mag_z = 0.0f;
      this->stabilized_accel_x = 0.0f;
      this->stabilized_accel_y = 0.0f;
      this->stabilized_accel_z = 0.0f;
      this->gps_correl_timestamp_tow = 0.0;
      this->gps_correl_timestamp_week_num = 0l;
      this->gps_correl_timestamp_flags = 0l;
      this->scaled_ambient_pressure = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    int64_t;
  _timestamp_type timestamp;
  using _scaled_accel_x_type =
    float;
  _scaled_accel_x_type scaled_accel_x;
  using _scaled_accel_y_type =
    float;
  _scaled_accel_y_type scaled_accel_y;
  using _scaled_accel_z_type =
    float;
  _scaled_accel_z_type scaled_accel_z;
  using _scaled_gyro_x_type =
    float;
  _scaled_gyro_x_type scaled_gyro_x;
  using _scaled_gyro_y_type =
    float;
  _scaled_gyro_y_type scaled_gyro_y;
  using _scaled_gyro_z_type =
    float;
  _scaled_gyro_z_type scaled_gyro_z;
  using _scaled_mag_x_type =
    float;
  _scaled_mag_x_type scaled_mag_x;
  using _scaled_mag_y_type =
    float;
  _scaled_mag_y_type scaled_mag_y;
  using _scaled_mag_z_type =
    float;
  _scaled_mag_z_type scaled_mag_z;
  using _delta_theta_x_type =
    float;
  _delta_theta_x_type delta_theta_x;
  using _delta_theta_y_type =
    float;
  _delta_theta_y_type delta_theta_y;
  using _delta_theta_z_type =
    float;
  _delta_theta_z_type delta_theta_z;
  using _delta_vel_x_type =
    float;
  _delta_vel_x_type delta_vel_x;
  using _delta_vel_y_type =
    float;
  _delta_vel_y_type delta_vel_y;
  using _delta_vel_z_type =
    float;
  _delta_vel_z_type delta_vel_z;
  using _orient_matrix_type =
    std::array<float, 9>;
  _orient_matrix_type orient_matrix;
  using _roll_type =
    float;
  _roll_type roll;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _orient_quaternion_type =
    std::array<float, 3>;
  _orient_quaternion_type orient_quaternion;
  using _stabilized_mag_x_type =
    float;
  _stabilized_mag_x_type stabilized_mag_x;
  using _stabilized_mag_y_type =
    float;
  _stabilized_mag_y_type stabilized_mag_y;
  using _stabilized_mag_z_type =
    float;
  _stabilized_mag_z_type stabilized_mag_z;
  using _stabilized_accel_x_type =
    float;
  _stabilized_accel_x_type stabilized_accel_x;
  using _stabilized_accel_y_type =
    float;
  _stabilized_accel_y_type stabilized_accel_y;
  using _stabilized_accel_z_type =
    float;
  _stabilized_accel_z_type stabilized_accel_z;
  using _gps_correl_timestamp_tow_type =
    double;
  _gps_correl_timestamp_tow_type gps_correl_timestamp_tow;
  using _gps_correl_timestamp_week_num_type =
    int32_t;
  _gps_correl_timestamp_week_num_type gps_correl_timestamp_week_num;
  using _gps_correl_timestamp_flags_type =
    int32_t;
  _gps_correl_timestamp_flags_type gps_correl_timestamp_flags;
  using _scaled_ambient_pressure_type =
    float;
  _scaled_ambient_pressure_type scaled_ambient_pressure;

  // setters for named parameter idiom
  Type & set__timestamp(
    const int64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__scaled_accel_x(
    const float & _arg)
  {
    this->scaled_accel_x = _arg;
    return *this;
  }
  Type & set__scaled_accel_y(
    const float & _arg)
  {
    this->scaled_accel_y = _arg;
    return *this;
  }
  Type & set__scaled_accel_z(
    const float & _arg)
  {
    this->scaled_accel_z = _arg;
    return *this;
  }
  Type & set__scaled_gyro_x(
    const float & _arg)
  {
    this->scaled_gyro_x = _arg;
    return *this;
  }
  Type & set__scaled_gyro_y(
    const float & _arg)
  {
    this->scaled_gyro_y = _arg;
    return *this;
  }
  Type & set__scaled_gyro_z(
    const float & _arg)
  {
    this->scaled_gyro_z = _arg;
    return *this;
  }
  Type & set__scaled_mag_x(
    const float & _arg)
  {
    this->scaled_mag_x = _arg;
    return *this;
  }
  Type & set__scaled_mag_y(
    const float & _arg)
  {
    this->scaled_mag_y = _arg;
    return *this;
  }
  Type & set__scaled_mag_z(
    const float & _arg)
  {
    this->scaled_mag_z = _arg;
    return *this;
  }
  Type & set__delta_theta_x(
    const float & _arg)
  {
    this->delta_theta_x = _arg;
    return *this;
  }
  Type & set__delta_theta_y(
    const float & _arg)
  {
    this->delta_theta_y = _arg;
    return *this;
  }
  Type & set__delta_theta_z(
    const float & _arg)
  {
    this->delta_theta_z = _arg;
    return *this;
  }
  Type & set__delta_vel_x(
    const float & _arg)
  {
    this->delta_vel_x = _arg;
    return *this;
  }
  Type & set__delta_vel_y(
    const float & _arg)
  {
    this->delta_vel_y = _arg;
    return *this;
  }
  Type & set__delta_vel_z(
    const float & _arg)
  {
    this->delta_vel_z = _arg;
    return *this;
  }
  Type & set__orient_matrix(
    const std::array<float, 9> & _arg)
  {
    this->orient_matrix = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__orient_quaternion(
    const std::array<float, 3> & _arg)
  {
    this->orient_quaternion = _arg;
    return *this;
  }
  Type & set__stabilized_mag_x(
    const float & _arg)
  {
    this->stabilized_mag_x = _arg;
    return *this;
  }
  Type & set__stabilized_mag_y(
    const float & _arg)
  {
    this->stabilized_mag_y = _arg;
    return *this;
  }
  Type & set__stabilized_mag_z(
    const float & _arg)
  {
    this->stabilized_mag_z = _arg;
    return *this;
  }
  Type & set__stabilized_accel_x(
    const float & _arg)
  {
    this->stabilized_accel_x = _arg;
    return *this;
  }
  Type & set__stabilized_accel_y(
    const float & _arg)
  {
    this->stabilized_accel_y = _arg;
    return *this;
  }
  Type & set__stabilized_accel_z(
    const float & _arg)
  {
    this->stabilized_accel_z = _arg;
    return *this;
  }
  Type & set__gps_correl_timestamp_tow(
    const double & _arg)
  {
    this->gps_correl_timestamp_tow = _arg;
    return *this;
  }
  Type & set__gps_correl_timestamp_week_num(
    const int32_t & _arg)
  {
    this->gps_correl_timestamp_week_num = _arg;
    return *this;
  }
  Type & set__gps_correl_timestamp_flags(
    const int32_t & _arg)
  {
    this->gps_correl_timestamp_flags = _arg;
    return *this;
  }
  Type & set__scaled_ambient_pressure(
    const float & _arg)
  {
    this->scaled_ambient_pressure = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wamv_interfaces::msg::MicrostrainImu_<ContainerAllocator> *;
  using ConstRawPtr =
    const wamv_interfaces::msg::MicrostrainImu_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wamv_interfaces::msg::MicrostrainImu_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wamv_interfaces::msg::MicrostrainImu_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wamv_interfaces::msg::MicrostrainImu_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wamv_interfaces::msg::MicrostrainImu_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wamv_interfaces::msg::MicrostrainImu_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wamv_interfaces::msg::MicrostrainImu_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wamv_interfaces::msg::MicrostrainImu_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wamv_interfaces::msg::MicrostrainImu_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wamv_interfaces__msg__MicrostrainImu
    std::shared_ptr<wamv_interfaces::msg::MicrostrainImu_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wamv_interfaces__msg__MicrostrainImu
    std::shared_ptr<wamv_interfaces::msg::MicrostrainImu_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MicrostrainImu_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->scaled_accel_x != other.scaled_accel_x) {
      return false;
    }
    if (this->scaled_accel_y != other.scaled_accel_y) {
      return false;
    }
    if (this->scaled_accel_z != other.scaled_accel_z) {
      return false;
    }
    if (this->scaled_gyro_x != other.scaled_gyro_x) {
      return false;
    }
    if (this->scaled_gyro_y != other.scaled_gyro_y) {
      return false;
    }
    if (this->scaled_gyro_z != other.scaled_gyro_z) {
      return false;
    }
    if (this->scaled_mag_x != other.scaled_mag_x) {
      return false;
    }
    if (this->scaled_mag_y != other.scaled_mag_y) {
      return false;
    }
    if (this->scaled_mag_z != other.scaled_mag_z) {
      return false;
    }
    if (this->delta_theta_x != other.delta_theta_x) {
      return false;
    }
    if (this->delta_theta_y != other.delta_theta_y) {
      return false;
    }
    if (this->delta_theta_z != other.delta_theta_z) {
      return false;
    }
    if (this->delta_vel_x != other.delta_vel_x) {
      return false;
    }
    if (this->delta_vel_y != other.delta_vel_y) {
      return false;
    }
    if (this->delta_vel_z != other.delta_vel_z) {
      return false;
    }
    if (this->orient_matrix != other.orient_matrix) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->orient_quaternion != other.orient_quaternion) {
      return false;
    }
    if (this->stabilized_mag_x != other.stabilized_mag_x) {
      return false;
    }
    if (this->stabilized_mag_y != other.stabilized_mag_y) {
      return false;
    }
    if (this->stabilized_mag_z != other.stabilized_mag_z) {
      return false;
    }
    if (this->stabilized_accel_x != other.stabilized_accel_x) {
      return false;
    }
    if (this->stabilized_accel_y != other.stabilized_accel_y) {
      return false;
    }
    if (this->stabilized_accel_z != other.stabilized_accel_z) {
      return false;
    }
    if (this->gps_correl_timestamp_tow != other.gps_correl_timestamp_tow) {
      return false;
    }
    if (this->gps_correl_timestamp_week_num != other.gps_correl_timestamp_week_num) {
      return false;
    }
    if (this->gps_correl_timestamp_flags != other.gps_correl_timestamp_flags) {
      return false;
    }
    if (this->scaled_ambient_pressure != other.scaled_ambient_pressure) {
      return false;
    }
    return true;
  }
  bool operator!=(const MicrostrainImu_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MicrostrainImu_

// alias to use template instance with default allocator
using MicrostrainImu =
  wamv_interfaces::msg::MicrostrainImu_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wamv_interfaces

#endif  // WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_IMU__STRUCT_HPP_
