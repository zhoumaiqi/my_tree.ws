#include "is_game_started.h"
#include <behaviortree_cpp_v3/behavior_tree.h>
#include <behaviortree_cpp_v3/bt_factory.h>


IsGameStarted::IsGameStarted(const std::string& name, const BT::NodeConfiguration& config)
    : ConditionNode(name, config), game_started_(false)
{
    // 获取节点
    node_ = rclcpp::Node::make_shared("is_game_started_node");

    // 创建一个订阅者，订阅game_status话题
    rclcpp::QoS qos_profile = rclcpp::QoS(100).reliable().transient_local();
    subscription_ = node_->create_subscription<pb_rm_interfaces::msg::GameStatus>(
        "game_status", qos_profile, std::bind(&IsGameStarted::gameStatusCallback, this, std::placeholders::_1));
}

BT::PortsList IsGameStarted::providedPorts()
{
    return {};
}

BT::NodeStatus IsGameStarted::tick()
{
    std::lock_guard<std::mutex> lock(mutex_);
    if (game_started_)
    {
        RCLCPP_INFO(rclcpp::get_logger("IsGameStarted"), "Game has started.");
    }
    else
    {
        RCLCPP_INFO(rclcpp::get_logger("IsGameStarted"), "Game has not started.");
    }
    return game_started_ ? BT::NodeStatus::SUCCESS : BT::NodeStatus::FAILURE;
}

void IsGameStarted::gameStatusCallback(const pb_rm_interfaces::msg::GameStatus::SharedPtr msg)
{
    std::lock_guard<std::mutex> lock(mutex_);
    RCLCPP_INFO(rclcpp::get_logger("IsGameStarted"), "Received game status message: %d", msg->game_progress);
    game_started_ = (msg->game_progress == pb_rm_interfaces::msg::GameStatus::RUNNING);
}