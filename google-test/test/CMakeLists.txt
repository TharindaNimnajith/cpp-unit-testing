cmake_minimum_required(VERSION "3.21.1")

set(This ExampleTests)

set(Sources ExampleTests.cpp)

set(Sources Example.cpp)

add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC gtest_main Example)

add_test(NAME ${This} COMMAND ${This})
