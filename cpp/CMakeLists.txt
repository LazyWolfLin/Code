cmake_minimum_required(VERSION 3.16)

project("Code")

add_subdirectory(third_party/googletest)

# Test
enable_testing()

add_executable(
  number_test
  src/math/number_test.cpp
)
target_link_libraries(
  number_test
  gtest_main
)

include(GoogleTest)
gtest_discover_tests(number_test)