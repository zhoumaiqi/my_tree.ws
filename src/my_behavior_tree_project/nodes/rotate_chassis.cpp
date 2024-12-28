#include "rotate_chassis.h"
#include <behaviortree_cpp_v3/behavior_tree.h>
#include <behaviortree_cpp_v3/bt_factory.h>

RotateChassis::RotateChassis(const std::string& name, const BT::NodeConfiguration& config, rclcpp::Node::SharedPtr node)
    : BT::SyncActionNode(name, config), node_(node)
{
}

BT::PortsList RotateChassis::providedPorts()
{
    return { BT::InputPort<double>("angle") };
}

BT::NodeStatus RotateChassis::tick()
{
    double angle;
    if (!getInput<double>("angle", angle))
    {
        throw BT::RuntimeError("missing required input [angle]");
    }

    RCLCPP_INFO(rclcpp::get_logger("RotateChassis"), "Rotating chassis by %f degrees", angle);
    // 在这里添加旋转底盘的逻辑

    return BT::NodeStatus::SUCCESS;
}