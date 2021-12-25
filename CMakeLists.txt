cmake_minimum_required(VERSION 3.20)
project(c-project)

set(CMAKE_C_STANDARD 11)

add_executable(check check.c)
add_executable(save save.c)

add_subdirectory(0-intro)
add_subdirectory(1-types-io)
add_subdirectory(1-assignments)
add_subdirectory(1-types-io-std)

add_subdirectory(2-if-for-array)
add_subdirectory(2-assignments)

add_subdirectory(3-for-a-while)
add_subdirectory(computer-basis-test)
add_subdirectory(3-assignments)

add_subdirectory(4-loops)
add_subdirectory(5-assignments)
add_subdirectory(6-assignments)
add_subdirectory(6-recursion)
add_subdirectory(7-assignments)
add_subdirectory(7-data-types)
add_subdirectory(8-pointers)
add_subdirectory(8-assignments)
add_subdirectory(9-project)
add_subdirectory(10-struct)
add_subdirectory(11-linkedlist)
add_subdirectory(10-assignments)

add_subdirectory(FCS)

