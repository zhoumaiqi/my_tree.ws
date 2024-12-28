#ifndef ROTATE_CHASSIS_H
#define ROTATE_CHASSIS_H

#include <behaviortree_cpp_v3/action_node.h>
#include <rclcpp/rclcpp.hpp>

class RotateChassis : public BT::SyncActionNode
{
public:
    RotateChassis(const std::string& name, const BT::NodeConfiguration& config, rclcpp::Node::SharedPtr node);

    static BT::PortsList providedPorts();

    BT::NodeStatus tick() override;

private:
    rclcpp::Node::SharedPtr node_;
};

#endif // ROTATE_CHASSIS_H