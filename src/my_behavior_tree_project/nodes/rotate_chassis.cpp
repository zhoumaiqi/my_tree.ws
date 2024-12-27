#include <behaviortree_cpp_v3/behavior_tree.h>
#include <behaviortree_cpp_v3/bt_factory.h>

class RotateChassis : public BT::SyncActionNode
{
public:
    RotateChassis(const std::string& name, const BT::NodeConfiguration& config)
        : BT::SyncActionNode(name, config) {}

    static BT::PortsList providedPorts()
    {
        return {};
    }

    BT::NodeStatus tick() override
    {
        // 这里可以添加旋转底盘的逻辑
        return BT::NodeStatus::SUCCESS;
    }
};

// 需要在全局命名空间中使用 BT_REGISTER_NODES 宏
BT_REGISTER_NODES(factory)
{
    factory.registerNodeType<RotateChassis>("RotateChassis");
}