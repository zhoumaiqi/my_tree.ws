#ifndef ROTATE_CHASSIS_H
#define ROTATE_CHASSIS_H

#include <behaviortree_cpp_v3/action_node.h>

class RotateChassis : public BT::AsyncActionNode
{
public:
    RotateChassis(const std::string& name, const BT::NodeConfiguration& config);

    static BT::PortsList providedPorts();
    

    BT::NodeStatus tick() override;
};

#endif // ROTATE_CHASSIS_H