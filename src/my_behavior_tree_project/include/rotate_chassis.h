#ifndef ROTATE_CHASSIS_H
#define ROTATE_CHASSIS_H

#include <behaviortree_cpp_v3/action_node.h>

class RotateChassis : public BT::SyncActionNode
{
public:
    RotateChassis(const std::string& name, const BT::NodeConfiguration& config)
        : BT::SyncActionNode(name, config) {}

    static BT::PortsList providedPorts() {
        return {};
    }

    BT::NodeStatus tick() override {
        // Your implementation here
        std::cout<<"RotateChassis tick"<<std::endl;
        return BT::NodeStatus::SUCCESS;
    }
};

#endif // ROTATE_CHASSIS_H