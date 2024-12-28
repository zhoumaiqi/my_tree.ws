#ifndef IS_GAME_STARTED_H
#define IS_GAME_STARTED_H

#include <string>
#include <atomic>
#include <behaviortree_cpp_v3/condition_node.h>
#include <rclcpp/rclcpp.hpp>
#include <pb_rm_interfaces/msg/game_status.hpp>
#include <mutex>

class IsGameStarted : public BT::ConditionNode
{
public:
    IsGameStarted(const std::string& name, const BT::NodeConfiguration& config, rclcpp::Node::SharedPtr node);

    static BT::PortsList providedPorts();

    BT::NodeStatus tick() override;

private:
    void gameStatusCallback(const pb_rm_interfaces::msg::GameStatus::SharedPtr msg);

    rclcpp::Node::SharedPtr node_;
    rclcpp::Subscription<pb_rm_interfaces::msg::GameStatus>::SharedPtr subscription_;
    std::mutex mutex_;
    std::atomic<bool> game_started_{false};
};

#endif // IS_GAME_STARTED_H