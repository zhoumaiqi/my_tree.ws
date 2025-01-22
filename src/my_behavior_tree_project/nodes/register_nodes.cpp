#include <behaviortree_cpp_v3/bt_factory.h>
#include "is_game_started.h"
#include "rotate_chassis.h"

BT_REGISTER_NODES(factory)
{
    factory.registerNodeType<IsGameStarted>("IsGameStarted");
    factory.registerNodeType<RotateChassis>("RotateChassis");   
}