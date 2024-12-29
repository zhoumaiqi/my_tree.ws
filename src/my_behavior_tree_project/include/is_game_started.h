#ifndef IS_GAME_STARTED_H
#define IS_GAME_STARTED_H

#include <behaviortree_cpp_v3/condition_node.h>
#include <rclcpp/rclcpp.hpp>
#include <pb_rm_interfaces/msg/game_status.hpp>
#include <mutex>

class IsGameStarted : public BT::ConditionNode
{
public:
    IsGameStarted(const std::string& name, const BT::NodeConfiguration& config);

    static BT::PortsList providedPorts();

    BT::NodeStatus tick() override;

private:
    void gameStatusCallback(const pb_rm_interfaces::msg::GameStatus::SharedPtr msg);

    rclcpp::Node::SharedPtr node_;
    rclcpp::Subscription<pb_rm_interfaces::msg::GameStatus>::SharedPtr subscription_;
    bool game_started_;
    std::mutex mutex_;
};

#endif // IS_GAME_STARTED_H