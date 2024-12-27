#include "is_game_started.h"
#include <behaviortree_cpp_v3/behavior_tree.h>
#include <behaviortree_cpp_v3/bt_factory.h>

IsGameStarted::IsGameStarted(const std::string& name, const BT::NodeConfiguration& config)
    : IsGameStarted(name, config, rclcpp::Node::make_shared("is_game_started_node"))
{
}

IsGameStarted::IsGameStarted(const std::string& name, const BT::NodeConfiguration& config, rclcpp::Node::SharedPtr node)
    : ConditionNode(name, config), node_(node), game_started_(false)
{
    subscription_ = node_->create_subscription<pb_rm_interfaces::msg::GameStatus>(
        "game_status", 10, std::bind(&IsGameStarted::gameStatusCallback, this, std::placeholders::_1));
}

BT::PortsList IsGameStarted::providedPorts()
{
    return {};
}

BT::NodeStatus IsGameStarted::tick()
{
    RCLCPP_INFO(rclcpp::get_logger("IsGameStarted"), "Checking if game has started: %s", game_started_ ? "Yes" : "No");
    return game_started_ ? BT::NodeStatus::SUCCESS : BT::NodeStatus::FAILURE;
}

void IsGameStarted::gameStatusCallback(const pb_rm_interfaces::msg::GameStatus::SharedPtr msg)
{
    game_started_ = (msg->game_progress == pb_rm_interfaces::msg::GameStatus::RUNNING);
}

// 需要在全局命名空间中使用 BT_REGISTER_NODES 宏
BT_REGISTER_NODES(factory)
{
    factory.registerNodeType<IsGameStarted>("IsGameStarted");
}