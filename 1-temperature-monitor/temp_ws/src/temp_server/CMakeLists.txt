cmake_minimum_required(VERSION 3.8)
project(temp_server)

#CPP standard version required for the project  
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(temp_interface REQUIRED)

#include header files
include_directories(./Include)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()


add_executable(temp_sub src/sub.cpp src/temp_sub.cpp)
target_include_directories(temp_sub PRIVATE ./include)
ament_target_dependencies(temp_sub rclcpp std_msgs temp_interface)

install(TARGETS
  temp_sub
  DESTINATION lib/${PROJECT_NAME}
)