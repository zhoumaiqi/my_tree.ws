#include "is_game_started.h"
#include <behaviortree_cpp_v3/behavior_tree.h>
#include <behaviortree_cpp_v3/bt_factory.h>

IsGameStarted::IsGameStarted(const std::string& name, const BT::NodeConfiguration& config, rclcpp::Node::SharedPtr node)
    : ConditionNode(name, config), node_(node), game_started_(false)
{   //创建一个订阅者，订阅game_status话题
    subscription_ = node_->create_subscription<pb_rm_interfaces::msg::GameStatus>(
        "game_status", 10, std::bind(&IsGameStarted::gameStatusCallback, this, std::placeholders::_1));
}   //回调函数为gameStatusCallback

BT::PortsList IsGameStarted::providedPorts()
{
    return {};//静态函数，返回节点的端口
}

BT::NodeStatus IsGameStarted::tick()
{
    std::lock_guard<std::mutex> lock(mutex_);
    RCLCPP_INFO(rclcpp::get_logger("IsGameStarted"), "Checking if game has started: %s", game_started_ ? "Yes" : "No");
    return game_started_ ? BT::NodeStatus::SUCCESS : BT::NodeStatus::FAILURE;
}

void IsGameStarted::gameStatusCallback(const pb_rm_interfaces::msg::GameStatus::SharedPtr msg)
{
    std::lock_guard<std::mutex> lock(mutex_);
    game_started_ = (msg->game_progress == pb_rm_interfaces::msg::GameStatus::RUNNING);
}