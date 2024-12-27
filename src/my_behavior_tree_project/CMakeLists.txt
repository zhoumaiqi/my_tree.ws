cmake_minimum_required(VERSION 3.5)
project(my_behavior_tree_project)

# 找到ament_cmake包
find_package(ament_cmake REQUIRED)

# 找到rclcpp和std_msgs包
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(pb_rm_interfaces REQUIRED)  # 确保找到自定义消息包

# 找到BehaviorTree.CPP包
find_package(behaviortree_cpp_v3 REQUIRED)

# 包含头文件路径
include_directories(
  ${behaviortree_cpp_v3_INCLUDE_DIRS}
  ${rclcpp_INCLUDE_DIRS}
  ${std_msgs_INCLUDE_DIRS}
  ${pb_rm_interfaces_INCLUDE_DIRS}  # 包含自定义消息包的头文件
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# 添加可执行文件
add_executable(main 
    /home/zhoumaiqi/my_tree.ws/src/my_behavior_tree_project/main.cpp
    /home/zhoumaiqi/my_tree.ws/src/my_behavior_tree_project/nodes/rotate_chassis.cpp
    /home/zhoumaiqi/my_tree.ws/src/my_behavior_tree_project/nodes/is_game_started.cpp
    /home/zhoumaiqi/my_tree.ws/src/my_behavior_tree_project/nodes/behavior_tree_node.cpp
    /home/zhoumaiqi/my_tree.ws/src/my_behavior_tree_project/nodes/register_nodes.cpp
)

# 链接库
target_link_libraries(main 
  ${behaviortree_cpp_v3_LIBRARIES}
  ${rclcpp_LIBRARIES}
  ${std_msgs_LIBRARIES}
  ${pb_rm_interfaces_LIBRARIES}  # 链接自定义消息包的库
)

# 声明ament依赖
ament_target_dependencies(main 
  behaviortree_cpp_v3 
  rclcpp 
  std_msgs
  pb_rm_interfaces  # 声明自定义消息包的依赖
)

# 添加共享库
add_library(my_behavior_tree_nodes SHARED
  /home/zhoumaiqi/my_tree.ws/src/my_behavior_tree_project/nodes/rotate_chassis.cpp
  /home/zhoumaiqi/my_tree.ws/src/my_behavior_tree_project/nodes/is_game_started.cpp
)

# 链接库
target_link_libraries(my_behavior_tree_nodes 
  ${behaviortree_cpp_v3_LIBRARIES}
  ${rclcpp_LIBRARIES}
  ${std_msgs_LIBRARIES}
  ${pb_rm_interfaces_LIBRARIES}  # 链接自定义消息包的库
)

# 声明ament依赖
ament_target_dependencies(my_behavior_tree_nodes 
  behaviortree_cpp_v3 
  rclcpp 
  std_msgs
  pb_rm_interfaces  # 声明自定义消息包的依赖
)

# 安装目标
install(TARGETS main my_behavior_tree_nodes
  DESTINATION lib/${PROJECT_NAME})

ament_package()