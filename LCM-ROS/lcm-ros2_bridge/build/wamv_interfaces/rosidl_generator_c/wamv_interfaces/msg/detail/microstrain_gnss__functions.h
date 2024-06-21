// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from wamv_interfaces:msg/MicrostrainGnss.idl
// generated code does not contain a copyright notice

#ifndef WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_GNSS__FUNCTIONS_H_
#define WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_GNSS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "wamv_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "wamv_interfaces/msg/detail/microstrain_gnss__struct.h"

/// Initialize msg/MicrostrainGnss message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wamv_interfaces__msg__MicrostrainGnss
 * )) before or use
 * wamv_interfaces__msg__MicrostrainGnss__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wamv_interfaces
bool
wamv_interfaces__msg__MicrostrainGnss__init(wamv_interfaces__msg__MicrostrainGnss * msg);

/// Finalize msg/MicrostrainGnss message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wamv_interfaces
void
wamv_interfaces__msg__MicrostrainGnss__fini(wamv_interfaces__msg__MicrostrainGnss * msg);

/// Create msg/MicrostrainGnss message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wamv_interfaces__msg__MicrostrainGnss__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wamv_interfaces
wamv_interfaces__msg__MicrostrainGnss *
wamv_interfaces__msg__MicrostrainGnss__create();

/// Destroy msg/MicrostrainGnss message.
/**
 * It calls
 * wamv_interfaces__msg__MicrostrainGnss__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wamv_interfaces
void
wamv_interfaces__msg__MicrostrainGnss__destroy(wamv_interfaces__msg__MicrostrainGnss * msg);

/// Check for msg/MicrostrainGnss message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wamv_interfaces
bool
wamv_interfaces__msg__MicrostrainGnss__are_equal(const wamv_interfaces__msg__MicrostrainGnss * lhs, const wamv_interfaces__msg__MicrostrainGnss * rhs);

/// Copy a msg/MicrostrainGnss message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_wamv_interfaces
bool
wamv_interfaces__msg__MicrostrainGnss__copy(
  const wamv_interfaces__msg__MicrostrainGnss * input,
  wamv_interfaces__msg__MicrostrainGnss * output);

/// Initialize array of msg/MicrostrainGnss messages.
/**
 * It allocates the memory for the number of elements and calls
 * wamv_interfaces__msg__MicrostrainGnss__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wamv_interfaces
bool
wamv_interfaces__msg__MicrostrainGnss__Sequence__init(wamv_interfaces__msg__MicrostrainGnss__Sequence * array, size_t size);

/// Finalize array of msg/MicrostrainGnss messages.
/**
 * It calls
 * wamv_interfaces__msg__MicrostrainGnss__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wamv_interfaces
void
wamv_interfaces__msg__MicrostrainGnss__Sequence__fini(wamv_interfaces__msg__MicrostrainGnss__Sequence * array);

/// Create array of msg/MicrostrainGnss messages.
/**
 * It allocates the memory for the array and calls
 * wamv_interfaces__msg__MicrostrainGnss__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wamv_interfaces
wamv_interfaces__msg__MicrostrainGnss__Sequence *
wamv_interfaces__msg__MicrostrainGnss__Sequence__create(size_t size);

/// Destroy array of msg/MicrostrainGnss messages.
/**
 * It calls
 * wamv_interfaces__msg__MicrostrainGnss__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wamv_interfaces
void
wamv_interfaces__msg__MicrostrainGnss__Sequence__destroy(wamv_interfaces__msg__MicrostrainGnss__Sequence * array);

/// Check for msg/MicrostrainGnss message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wamv_interfaces
bool
wamv_interfaces__msg__MicrostrainGnss__Sequence__are_equal(const wamv_interfaces__msg__MicrostrainGnss__Sequence * lhs, const wamv_interfaces__msg__MicrostrainGnss__Sequence * rhs);

/// Copy an array of msg/MicrostrainGnss messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_wamv_interfaces
bool
wamv_interfaces__msg__MicrostrainGnss__Sequence__copy(
  const wamv_interfaces__msg__MicrostrainGnss__Sequence * input,
  wamv_interfaces__msg__MicrostrainGnss__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WAMV_INTERFACES__MSG__DETAIL__MICROSTRAIN_GNSS__FUNCTIONS_H_
