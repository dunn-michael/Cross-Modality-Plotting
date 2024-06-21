// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wamv_interfaces:msg/BlueprintOculusSonarImage.idl
// generated code does not contain a copyright notice

#ifndef WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_IMAGE__BUILDER_HPP_
#define WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wamv_interfaces/msg/detail/blueprint_oculus_sonar_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wamv_interfaces
{

namespace msg
{

namespace builder
{

class Init_BlueprintOculusSonarImage_data
{
public:
  explicit Init_BlueprintOculusSonarImage_data(::wamv_interfaces::msg::BlueprintOculusSonarImage & msg)
  : msg_(msg)
  {}
  ::wamv_interfaces::msg::BlueprintOculusSonarImage data(::wamv_interfaces::msg::BlueprintOculusSonarImage::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wamv_interfaces::msg::BlueprintOculusSonarImage msg_;
};

class Init_BlueprintOculusSonarImage_is_bigendian
{
public:
  explicit Init_BlueprintOculusSonarImage_is_bigendian(::wamv_interfaces::msg::BlueprintOculusSonarImage & msg)
  : msg_(msg)
  {}
  Init_BlueprintOculusSonarImage_data is_bigendian(::wamv_interfaces::msg::BlueprintOculusSonarImage::_is_bigendian_type arg)
  {
    msg_.is_bigendian = std::move(arg);
    return Init_BlueprintOculusSonarImage_data(msg_);
  }

private:
  ::wamv_interfaces::msg::BlueprintOculusSonarImage msg_;
};

class Init_BlueprintOculusSonarImage_encoding
{
public:
  explicit Init_BlueprintOculusSonarImage_encoding(::wamv_interfaces::msg::BlueprintOculusSonarImage & msg)
  : msg_(msg)
  {}
  Init_BlueprintOculusSonarImage_is_bigendian encoding(::wamv_interfaces::msg::BlueprintOculusSonarImage::_encoding_type arg)
  {
    msg_.encoding = std::move(arg);
    return Init_BlueprintOculusSonarImage_is_bigendian(msg_);
  }

private:
  ::wamv_interfaces::msg::BlueprintOculusSonarImage msg_;
};

class Init_BlueprintOculusSonarImage_width
{
public:
  explicit Init_BlueprintOculusSonarImage_width(::wamv_interfaces::msg::BlueprintOculusSonarImage & msg)
  : msg_(msg)
  {}
  Init_BlueprintOculusSonarImage_encoding width(::wamv_interfaces::msg::BlueprintOculusSonarImage::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_BlueprintOculusSonarImage_encoding(msg_);
  }

private:
  ::wamv_interfaces::msg::BlueprintOculusSonarImage msg_;
};

class Init_BlueprintOculusSonarImage_height
{
public:
  explicit Init_BlueprintOculusSonarImage_height(::wamv_interfaces::msg::BlueprintOculusSonarImage & msg)
  : msg_(msg)
  {}
  Init_BlueprintOculusSonarImage_width height(::wamv_interfaces::msg::BlueprintOculusSonarImage::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_BlueprintOculusSonarImage_width(msg_);
  }

private:
  ::wamv_interfaces::msg::BlueprintOculusSonarImage msg_;
};

class Init_BlueprintOculusSonarImage_timestamp
{
public:
  Init_BlueprintOculusSonarImage_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BlueprintOculusSonarImage_height timestamp(::wamv_interfaces::msg::BlueprintOculusSonarImage::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_BlueprintOculusSonarImage_height(msg_);
  }

private:
  ::wamv_interfaces::msg::BlueprintOculusSonarImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wamv_interfaces::msg::BlueprintOculusSonarImage>()
{
  return wamv_interfaces::msg::builder::Init_BlueprintOculusSonarImage_timestamp();
}

}  // namespace wamv_interfaces

#endif  // WAMV_INTERFACES__MSG__DETAIL__BLUEPRINT_OCULUS_SONAR_IMAGE__BUILDER_HPP_
