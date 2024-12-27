#include <behaviortree_cpp_v3/behavior_tree.h>
#include <behaviortree_cpp_v3/bt_factory.h>

class IsGameStarted : public BT::SyncActionNode
{
public:
    IsGameStarted(const std::string& name, const BT::NodeConfiguration& config)
        : BT::SyncActionNode(name, config) {}

    static BT::PortsList providedPorts()
    {
        return {};
    }

    BT::NodeStatus tick() override
    {
        // 这里可以添加判断游戏是否开始的逻辑
        bool game_started = true; // 假设游戏已经开始
        return game_started ? BT::NodeStatus::SUCCESS : BT::NodeStatus::FAILURE;
    }
};

// 需要在全局命名空间中使用 BT_REGISTER_NODES 宏
BT_REGISTER_NODES(factory)
{
    factory.registerNodeType<IsGameStarted>("IsGameStarted");
}