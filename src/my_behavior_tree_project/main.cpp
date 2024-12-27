#include <behaviortree_cpp_v3/bt_factory.h>
#include <rclcpp/rclcpp.hpp>
#include <iostream>
#include <fstream>
#include "rotate_chassis.h"
#include "is_game_started.h"

int main(int argc, char** argv)
{
    // 初始化 ROS 2
    rclcpp::init(argc, argv);
    auto node = rclcpp::Node::make_shared("behavior_tree_node");

    BT::BehaviorTreeFactory factory;

    // 注册节点
    factory.registerNodeType<RotateChassis>("RotateChassis");

    // 从XML文件加载行为树
    std::ifstream xml_file("src/my_behavior_tree_project/trees/my_behavior_tree.xml");
    if (!xml_file)
    {
        std::cerr << "Failed to open XML file" << std::endl;
        return 1;
    }

    std::string xml_content((std::istreambuf_iterator<char>(xml_file)), std::istreambuf_iterator<char>());
    auto tree = factory.createTreeFromText(xml_content);

    // 设置黑板变量
    tree.rootBlackboard()->set("rotation_angle", 90.0);

    // 执行行为树
    while (rclcpp::ok())
    {
        BT::NodeStatus status = tree.tickRoot();
        std::cout << "Behavior Tree execution status: " << BT::toStr(status) << std::endl;
        rclcpp::spin_some(node);
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }

    rclcpp::shutdown();
    return 0;
}