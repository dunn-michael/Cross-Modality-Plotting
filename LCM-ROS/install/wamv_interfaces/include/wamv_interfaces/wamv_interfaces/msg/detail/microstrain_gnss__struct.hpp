// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wamv_interfaces:msg/MicrostrainGnss.idl
// generated code does not contain a copyright notice

#ifndef WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_GNSS__STRUCT_HPP_
#define WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_GNSS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wamv_interfaces__msg__MicrostrainGnss __attribute__((deprecated))
#else
# define DEPRECATED__wamv_interfaces__msg__MicrostrainGnss __declspec(deprecated)
#endif

namespace wamv_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MicrostrainGnss_
{
  using Type = MicrostrainGnss_<ContainerAllocator>;

  explicit MicrostrainGnss_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->height_above_elipsoid = 0.0;
      this->height_above_msl = 0.0;
      this->horizontal_accuracy = 0.0f;
      this->vertical_accuracy = 0.0f;
      this->ecef_pos_x = 0.0;
      this->ecef_pos_y = 0.0;
      this->ecef_pos_z = 0.0;
      this->ecef_pos_accuracy = 0.0f;
      this->north_velocity = 0.0f;
      this->east_velocity = 0.0f;
      this->down_velocity = 0.0f;
      this->speed = 0.0f;
      this->ground_speed = 0.0f;
      this->heading = 0.0f;
      this->speed_accuracy = 0.0f;
      this->heading_accuracy = 0.0f;
      this->ecef_vel_x = 0.0f;
      this->ecef_vel_y = 0.0f;
      this->ecef_vel_z = 0.0f;
      this->ecef_vel_accuracy = 0.0f;
      this->geometric_dop = 0.0f;
      this->position_dop = 0.0f;
      this->horizontal_dop = 0.0f;
      this->vertical_dop = 0.0f;
      this->time_dop = 0.0f;
      this->northing_dop = 0.0f;
      this->easting_dop = 0.0f;
      this->utc_timestamp = 0ll;
      this->utc_timestamp_flags = 0l;
      this->gps_time_tow = 0.0;
      this->gps_time_week_num = 0l;
      this->gps_clock_bias = 0.0;
      this->gps_clock_drift = 0.0;
      this->gps_clock_accuracy = 0.0;
      this->gnss_fix_type = 0;
      this->gnss_fix_sv_count = 0;
      this->gnss_fix_flags = 0l;
      this->sensor_state = 0;
      this->antenna_state = 0;
      this->antenna_power = 0;
      this->dgnss_newest_age_gnss_base_0 = 0.0f;
      this->dgnss_base_station_status_gnss_base_0 = 0;
      this->dgnss_num_channels_gnss_base_0 = 0l;
    }
  }

  explicit MicrostrainGnss_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->height_above_elipsoid = 0.0;
      this->height_above_msl = 0.0;
      this->horizontal_accuracy = 0.0f;
      this->vertical_accuracy = 0.0f;
      this->ecef_pos_x = 0.0;
      this->ecef_pos_y = 0.0;
      this->ecef_pos_z = 0.0;
      this->ecef_pos_accuracy = 0.0f;
      this->north_velocity = 0.0f;
      this->east_velocity = 0.0f;
      this->down_velocity = 0.0f;
      this->speed = 0.0f;
      this->ground_speed = 0.0f;
      this->heading = 0.0f;
      this->speed_accuracy = 0.0f;
      this->heading_accuracy = 0.0f;
      this->ecef_vel_x = 0.0f;
      this->ecef_vel_y = 0.0f;
      this->ecef_vel_z = 0.0f;
      this->ecef_vel_accuracy = 0.0f;
      this->geometric_dop = 0.0f;
      this->position_dop = 0.0f;
      this->horizontal_dop = 0.0f;
      this->vertical_dop = 0.0f;
      this->time_dop = 0.0f;
      this->northing_dop = 0.0f;
      this->easting_dop = 0.0f;
      this->utc_timestamp = 0ll;
      this->utc_timestamp_flags = 0l;
      this->gps_time_tow = 0.0;
      this->gps_time_week_num = 0l;
      this->gps_clock_bias = 0.0;
      this->gps_clock_drift = 0.0;
      this->gps_clock_accuracy = 0.0;
      this->gnss_fix_type = 0;
      this->gnss_fix_sv_count = 0;
      this->gnss_fix_flags = 0l;
      this->sensor_state = 0;
      this->antenna_state = 0;
      this->antenna_power = 0;
      this->dgnss_newest_age_gnss_base_0 = 0.0f;
      this->dgnss_base_station_status_gnss_base_0 = 0;
      this->dgnss_num_channels_gnss_base_0 = 0l;
    }
  }

  // field types and members
  using _timestamp_type =
    int64_t;
  _timestamp_type timestamp;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _height_above_elipsoid_type =
    double;
  _height_above_elipsoid_type height_above_elipsoid;
  using _height_above_msl_type =
    double;
  _height_above_msl_type height_above_msl;
  using _horizontal_accuracy_type =
    float;
  _horizontal_accuracy_type horizontal_accuracy;
  using _vertical_accuracy_type =
    float;
  _vertical_accuracy_type vertical_accuracy;
  using _ecef_pos_x_type =
    double;
  _ecef_pos_x_type ecef_pos_x;
  using _ecef_pos_y_type =
    double;
  _ecef_pos_y_type ecef_pos_y;
  using _ecef_pos_z_type =
    double;
  _ecef_pos_z_type ecef_pos_z;
  using _ecef_pos_accuracy_type =
    float;
  _ecef_pos_accuracy_type ecef_pos_accuracy;
  using _north_velocity_type =
    float;
  _north_velocity_type north_velocity;
  using _east_velocity_type =
    float;
  _east_velocity_type east_velocity;
  using _down_velocity_type =
    float;
  _down_velocity_type down_velocity;
  using _speed_type =
    float;
  _speed_type speed;
  using _ground_speed_type =
    float;
  _ground_speed_type ground_speed;
  using _heading_type =
    float;
  _heading_type heading;
  using _speed_accuracy_type =
    float;
  _speed_accuracy_type speed_accuracy;
  using _heading_accuracy_type =
    float;
  _heading_accuracy_type heading_accuracy;
  using _ecef_vel_x_type =
    float;
  _ecef_vel_x_type ecef_vel_x;
  using _ecef_vel_y_type =
    float;
  _ecef_vel_y_type ecef_vel_y;
  using _ecef_vel_z_type =
    float;
  _ecef_vel_z_type ecef_vel_z;
  using _ecef_vel_accuracy_type =
    float;
  _ecef_vel_accuracy_type ecef_vel_accuracy;
  using _geometric_dop_type =
    float;
  _geometric_dop_type geometric_dop;
  using _position_dop_type =
    float;
  _position_dop_type position_dop;
  using _horizontal_dop_type =
    float;
  _horizontal_dop_type horizontal_dop;
  using _vertical_dop_type =
    float;
  _vertical_dop_type vertical_dop;
  using _time_dop_type =
    float;
  _time_dop_type time_dop;
  using _northing_dop_type =
    float;
  _northing_dop_type northing_dop;
  using _easting_dop_type =
    float;
  _easting_dop_type easting_dop;
  using _utc_timestamp_type =
    int64_t;
  _utc_timestamp_type utc_timestamp;
  using _utc_timestamp_flags_type =
    int32_t;
  _utc_timestamp_flags_type utc_timestamp_flags;
  using _gps_time_tow_type =
    double;
  _gps_time_tow_type gps_time_tow;
  using _gps_time_week_num_type =
    int32_t;
  _gps_time_week_num_type gps_time_week_num;
  using _gps_clock_bias_type =
    double;
  _gps_clock_bias_type gps_clock_bias;
  using _gps_clock_drift_type =
    double;
  _gps_clock_drift_type gps_clock_drift;
  using _gps_clock_accuracy_type =
    double;
  _gps_clock_accuracy_type gps_clock_accuracy;
  using _gnss_fix_type_type =
    int16_t;
  _gnss_fix_type_type gnss_fix_type;
  using _gnss_fix_sv_count_type =
    int16_t;
  _gnss_fix_sv_count_type gnss_fix_sv_count;
  using _gnss_fix_flags_type =
    int32_t;
  _gnss_fix_flags_type gnss_fix_flags;
  using _sensor_state_type =
    int16_t;
  _sensor_state_type sensor_state;
  using _antenna_state_type =
    int16_t;
  _antenna_state_type antenna_state;
  using _antenna_power_type =
    int16_t;
  _antenna_power_type antenna_power;
  using _dgnss_newest_age_gnss_base_0_type =
    float;
  _dgnss_newest_age_gnss_base_0_type dgnss_newest_age_gnss_base_0;
  using _dgnss_base_station_status_gnss_base_0_type =
    int16_t;
  _dgnss_base_station_status_gnss_base_0_type dgnss_base_station_status_gnss_base_0;
  using _dgnss_num_channels_gnss_base_0_type =
    int32_t;
  _dgnss_num_channels_gnss_base_0_type dgnss_num_channels_gnss_base_0;

  // setters for named parameter idiom
  Type & set__timestamp(
    const int64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__height_above_elipsoid(
    const double & _arg)
  {
    this->height_above_elipsoid = _arg;
    return *this;
  }
  Type & set__height_above_msl(
    const double & _arg)
  {
    this->height_above_msl = _arg;
    return *this;
  }
  Type & set__horizontal_accuracy(
    const float & _arg)
  {
    this->horizontal_accuracy = _arg;
    return *this;
  }
  Type & set__vertical_accuracy(
    const float & _arg)
  {
    this->vertical_accuracy = _arg;
    return *this;
  }
  Type & set__ecef_pos_x(
    const double & _arg)
  {
    this->ecef_pos_x = _arg;
    return *this;
  }
  Type & set__ecef_pos_y(
    const double & _arg)
  {
    this->ecef_pos_y = _arg;
    return *this;
  }
  Type & set__ecef_pos_z(
    const double & _arg)
  {
    this->ecef_pos_z = _arg;
    return *this;
  }
  Type & set__ecef_pos_accuracy(
    const float & _arg)
  {
    this->ecef_pos_accuracy = _arg;
    return *this;
  }
  Type & set__north_velocity(
    const float & _arg)
  {
    this->north_velocity = _arg;
    return *this;
  }
  Type & set__east_velocity(
    const float & _arg)
  {
    this->east_velocity = _arg;
    return *this;
  }
  Type & set__down_velocity(
    const float & _arg)
  {
    this->down_velocity = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__ground_speed(
    const float & _arg)
  {
    this->ground_speed = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__speed_accuracy(
    const float & _arg)
  {
    this->speed_accuracy = _arg;
    return *this;
  }
  Type & set__heading_accuracy(
    const float & _arg)
  {
    this->heading_accuracy = _arg;
    return *this;
  }
  Type & set__ecef_vel_x(
    const float & _arg)
  {
    this->ecef_vel_x = _arg;
    return *this;
  }
  Type & set__ecef_vel_y(
    const float & _arg)
  {
    this->ecef_vel_y = _arg;
    return *this;
  }
  Type & set__ecef_vel_z(
    const float & _arg)
  {
    this->ecef_vel_z = _arg;
    return *this;
  }
  Type & set__ecef_vel_accuracy(
    const float & _arg)
  {
    this->ecef_vel_accuracy = _arg;
    return *this;
  }
  Type & set__geometric_dop(
    const float & _arg)
  {
    this->geometric_dop = _arg;
    return *this;
  }
  Type & set__position_dop(
    const float & _arg)
  {
    this->position_dop = _arg;
    return *this;
  }
  Type & set__horizontal_dop(
    const float & _arg)
  {
    this->horizontal_dop = _arg;
    return *this;
  }
  Type & set__vertical_dop(
    const float & _arg)
  {
    this->vertical_dop = _arg;
    return *this;
  }
  Type & set__time_dop(
    const float & _arg)
  {
    this->time_dop = _arg;
    return *this;
  }
  Type & set__northing_dop(
    const float & _arg)
  {
    this->northing_dop = _arg;
    return *this;
  }
  Type & set__easting_dop(
    const float & _arg)
  {
    this->easting_dop = _arg;
    return *this;
  }
  Type & set__utc_timestamp(
    const int64_t & _arg)
  {
    this->utc_timestamp = _arg;
    return *this;
  }
  Type & set__utc_timestamp_flags(
    const int32_t & _arg)
  {
    this->utc_timestamp_flags = _arg;
    return *this;
  }
  Type & set__gps_time_tow(
    const double & _arg)
  {
    this->gps_time_tow = _arg;
    return *this;
  }
  Type & set__gps_time_week_num(
    const int32_t & _arg)
  {
    this->gps_time_week_num = _arg;
    return *this;
  }
  Type & set__gps_clock_bias(
    const double & _arg)
  {
    this->gps_clock_bias = _arg;
    return *this;
  }
  Type & set__gps_clock_drift(
    const double & _arg)
  {
    this->gps_clock_drift = _arg;
    return *this;
  }
  Type & set__gps_clock_accuracy(
    const double & _arg)
  {
    this->gps_clock_accuracy = _arg;
    return *this;
  }
  Type & set__gnss_fix_type(
    const int16_t & _arg)
  {
    this->gnss_fix_type = _arg;
    return *this;
  }
  Type & set__gnss_fix_sv_count(
    const int16_t & _arg)
  {
    this->gnss_fix_sv_count = _arg;
    return *this;
  }
  Type & set__gnss_fix_flags(
    const int32_t & _arg)
  {
    this->gnss_fix_flags = _arg;
    return *this;
  }
  Type & set__sensor_state(
    const int16_t & _arg)
  {
    this->sensor_state = _arg;
    return *this;
  }
  Type & set__antenna_state(
    const int16_t & _arg)
  {
    this->antenna_state = _arg;
    return *this;
  }
  Type & set__antenna_power(
    const int16_t & _arg)
  {
    this->antenna_power = _arg;
    return *this;
  }
  Type & set__dgnss_newest_age_gnss_base_0(
    const float & _arg)
  {
    this->dgnss_newest_age_gnss_base_0 = _arg;
    return *this;
  }
  Type & set__dgnss_base_station_status_gnss_base_0(
    const int16_t & _arg)
  {
    this->dgnss_base_station_status_gnss_base_0 = _arg;
    return *this;
  }
  Type & set__dgnss_num_channels_gnss_base_0(
    const int32_t & _arg)
  {
    this->dgnss_num_channels_gnss_base_0 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wamv_interfaces::msg::MicrostrainGnss_<ContainerAllocator> *;
  using ConstRawPtr =
    const wamv_interfaces::msg::MicrostrainGnss_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wamv_interfaces::msg::MicrostrainGnss_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wamv_interfaces::msg::MicrostrainGnss_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wamv_interfaces::msg::MicrostrainGnss_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wamv_interfaces::msg::MicrostrainGnss_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wamv_interfaces::msg::MicrostrainGnss_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wamv_interfaces::msg::MicrostrainGnss_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wamv_interfaces::msg::MicrostrainGnss_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wamv_interfaces::msg::MicrostrainGnss_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wamv_interfaces__msg__MicrostrainGnss
    std::shared_ptr<wamv_interfaces::msg::MicrostrainGnss_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wamv_interfaces__msg__MicrostrainGnss
    std::shared_ptr<wamv_interfaces::msg::MicrostrainGnss_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MicrostrainGnss_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->height_above_elipsoid != other.height_above_elipsoid) {
      return false;
    }
    if (this->height_above_msl != other.height_above_msl) {
      return false;
    }
    if (this->horizontal_accuracy != other.horizontal_accuracy) {
      return false;
    }
    if (this->vertical_accuracy != other.vertical_accuracy) {
      return false;
    }
    if (this->ecef_pos_x != other.ecef_pos_x) {
      return false;
    }
    if (this->ecef_pos_y != other.ecef_pos_y) {
      return false;
    }
    if (this->ecef_pos_z != other.ecef_pos_z) {
      return false;
    }
    if (this->ecef_pos_accuracy != other.ecef_pos_accuracy) {
      return false;
    }
    if (this->north_velocity != other.north_velocity) {
      return false;
    }
    if (this->east_velocity != other.east_velocity) {
      return false;
    }
    if (this->down_velocity != other.down_velocity) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->ground_speed != other.ground_speed) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->speed_accuracy != other.speed_accuracy) {
      return false;
    }
    if (this->heading_accuracy != other.heading_accuracy) {
      return false;
    }
    if (this->ecef_vel_x != other.ecef_vel_x) {
      return false;
    }
    if (this->ecef_vel_y != other.ecef_vel_y) {
      return false;
    }
    if (this->ecef_vel_z != other.ecef_vel_z) {
      return false;
    }
    if (this->ecef_vel_accuracy != other.ecef_vel_accuracy) {
      return false;
    }
    if (this->geometric_dop != other.geometric_dop) {
      return false;
    }
    if (this->position_dop != other.position_dop) {
      return false;
    }
    if (this->horizontal_dop != other.horizontal_dop) {
      return false;
    }
    if (this->vertical_dop != other.vertical_dop) {
      return false;
    }
    if (this->time_dop != other.time_dop) {
      return false;
    }
    if (this->northing_dop != other.northing_dop) {
      return false;
    }
    if (this->easting_dop != other.easting_dop) {
      return false;
    }
    if (this->utc_timestamp != other.utc_timestamp) {
      return false;
    }
    if (this->utc_timestamp_flags != other.utc_timestamp_flags) {
      return false;
    }
    if (this->gps_time_tow != other.gps_time_tow) {
      return false;
    }
    if (this->gps_time_week_num != other.gps_time_week_num) {
      return false;
    }
    if (this->gps_clock_bias != other.gps_clock_bias) {
      return false;
    }
    if (this->gps_clock_drift != other.gps_clock_drift) {
      return false;
    }
    if (this->gps_clock_accuracy != other.gps_clock_accuracy) {
      return false;
    }
    if (this->gnss_fix_type != other.gnss_fix_type) {
      return false;
    }
    if (this->gnss_fix_sv_count != other.gnss_fix_sv_count) {
      return false;
    }
    if (this->gnss_fix_flags != other.gnss_fix_flags) {
      return false;
    }
    if (this->sensor_state != other.sensor_state) {
      return false;
    }
    if (this->antenna_state != other.antenna_state) {
      return false;
    }
    if (this->antenna_power != other.antenna_power) {
      return false;
    }
    if (this->dgnss_newest_age_gnss_base_0 != other.dgnss_newest_age_gnss_base_0) {
      return false;
    }
    if (this->dgnss_base_station_status_gnss_base_0 != other.dgnss_base_station_status_gnss_base_0) {
      return false;
    }
    if (this->dgnss_num_channels_gnss_base_0 != other.dgnss_num_channels_gnss_base_0) {
      return false;
    }
    return true;
  }
  bool operator!=(const MicrostrainGnss_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MicrostrainGnss_

// alias to use template instance with default allocator
using MicrostrainGnss =
  wamv_interfaces::msg::MicrostrainGnss_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wamv_interfaces

#endif  // WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_GNSS__STRUCT_HPP_
