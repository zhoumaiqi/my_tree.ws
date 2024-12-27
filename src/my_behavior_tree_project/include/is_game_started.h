#ifndef IS_GAME_STARTED_H
#define IS_GAME_STARTED_H

#include <behaviortree_cpp_v3/action_node.h>

class IsGameStarted : public BT::SyncActionNode
{
public:
    IsGameStarted(const std::string& name, const BT::NodeConfiguration& config)
        : BT::SyncActionNode(name, config) {}

    static BT::PortsList providedPorts() {
        return {};
    }

    BT::NodeStatus tick() override {
        // Your implementation here
        std::cout<<"IsGameStarted tick"<<std::endl;
        return BT::NodeStatus::SUCCESS;
    }
};

#endif // IS_GAME_STARTED_H