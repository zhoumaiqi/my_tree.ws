#include <behaviortree_cpp_v3/bt_factory.h>
#include <rclcpp/rclcpp.hpp>
#include <iostream>
#include <fstream>
#include "rotate_chassis.h"
#include "is_game_started.h"

// 自定义注册函数
template <typename T>
void RegisterNode(BT::BehaviorTreeFactory& factory, const std::string& name, rclcpp::Node::SharedPtr node)
{//定义一个模板函数RegisterNode，用于注册节点类型
    factory.registerBuilder(name, [node](const std::string& name, const BT::NodeConfiguration& config) {
        return std::make_shared<T>(name, config, node);
    });//使用factory.registerBuilder方法注册节点构建器
}

int main(int argc, char** argv)
{
    // 初始化 ROS 2
    rclcpp::init(argc, argv);
    auto node = rclcpp::Node::make_shared("behavior_tree_node");
    //创建共享指针node，表示ROS2节点，节点名为behavior_tree_node
    BT::BehaviorTreeFactory factory;//创建一个行为树工厂

    // 注册 ROS2 节点
    factory.registerNodeType<RotateChassis>("RotateChassis");
    RegisterNode<IsGameStarted>(factory, "IsGameStarted", node);

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

    // 创建一个线程来处理ROS 2的回调
    std::thread ros_thread([&]() {
        rclcpp::spin(node);
    });

    // 执行行为树
    while (rclcpp::ok())
    {
        BT::NodeStatus status = tree.tickRoot();
        std::cout << "Behavior Tree execution status: " << BT::toStr(status) << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }

    // 等待ROS线程结束
    ros_thread.join();

    rclcpp::shutdown();
    return 0;
}