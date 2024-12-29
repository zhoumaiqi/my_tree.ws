#include "rotate_chassis.h"
#include <iostream>

RotateChassis::RotateChassis(const std::string& name, const BT::NodeConfiguration& config)
    : AsyncActionNode(name, config)
{
}

BT::PortsList RotateChassis::providedPorts()
{
    return { BT::InputPort<double>("rotation_angle") };// 输入端口rotation_angle
}

BT::NodeStatus RotateChassis::tick()
{
    double rotation_angle;
    if (!getInput<double>("rotation_angle", rotation_angle))
    {
        throw BT::RuntimeError("missing required input [rotation_angle]");
    }

    // 执行旋转底盘的动作
    std::cout << "Rotating chassis by " << rotation_angle << " degrees." << std::endl;

    return BT::NodeStatus::SUCCESS;
}