// Generated by gencpp from file panda_move/Init.msg
// DO NOT EDIT!


#ifndef PANDA_MOVE_MESSAGE_INIT_H
#define PANDA_MOVE_MESSAGE_INIT_H

#include <ros/service_traits.h>


#include <panda_move/InitRequest.h>
#include <panda_move/InitResponse.h>


namespace panda_move
{

struct Init
{

typedef InitRequest Request;
typedef InitResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Init
} // namespace panda_move


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::panda_move::Init > {
  static const char* value()
  {
    return "73f72d80c9600a1ec553e98d0e61c060";
  }

  static const char* value(const ::panda_move::Init&) { return value(); }
};

template<>
struct DataType< ::panda_move::Init > {
  static const char* value()
  {
    return "panda_move/Init";
  }

  static const char* value(const ::panda_move::Init&) { return value(); }
};


// service_traits::MD5Sum< ::panda_move::InitRequest> should match
// service_traits::MD5Sum< ::panda_move::Init >
template<>
struct MD5Sum< ::panda_move::InitRequest>
{
  static const char* value()
  {
    return MD5Sum< ::panda_move::Init >::value();
  }
  static const char* value(const ::panda_move::InitRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::panda_move::InitRequest> should match
// service_traits::DataType< ::panda_move::Init >
template<>
struct DataType< ::panda_move::InitRequest>
{
  static const char* value()
  {
    return DataType< ::panda_move::Init >::value();
  }
  static const char* value(const ::panda_move::InitRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::panda_move::InitResponse> should match
// service_traits::MD5Sum< ::panda_move::Init >
template<>
struct MD5Sum< ::panda_move::InitResponse>
{
  static const char* value()
  {
    return MD5Sum< ::panda_move::Init >::value();
  }
  static const char* value(const ::panda_move::InitResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::panda_move::InitResponse> should match
// service_traits::DataType< ::panda_move::Init >
template<>
struct DataType< ::panda_move::InitResponse>
{
  static const char* value()
  {
    return DataType< ::panda_move::Init >::value();
  }
  static const char* value(const ::panda_move::InitResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PANDA_MOVE_MESSAGE_INIT_H