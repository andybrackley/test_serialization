cmake_minimum_required(VERSION 3.27)
project(test_serialization VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)

find_package(CapnProto REQUIRED)


add_library(capnprotolib STATIC src/capnproto/src/capnprotolib.cpp)
target_include_directories(capnprotolib PUBLIC capnprotolib/include)

target_link_libraries(capnprotolib
   PRIVATE
      capnproto::capnproto
)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME}
  PRIVATE
    capnprotolib
)
