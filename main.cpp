#include <behaviortree_cpp_v3/behavior_tree.h>
#include <behaviortree_cpp_v3/bt_factory.h>
#include "actions.hpp"

int main() {
    BT::BehaviorTreeFactory factory;

    factory.registerNodeType<MoveToDoor>("MoveToDoor");
    factory.registerNodeType<IsRoomDoorClosed>("IsRoomDoorClosed");
    factory.registerNodeType<OpenRoomDoor>("OpenRoomDoor");
    factory.registerNodeType<EnterRoom>("EnterRoom");
    factory.registerNodeType<MoveToFridge>("MoveToFridge");
    factory.registerNodeType<IsFridgeDoorClosed>("IsFridgeDoorClosed");
    factory.registerNodeType<OpenFridgeDoor>("OpenFridgeDoor");
    factory.registerNodeType<FindApple>("FindApple");
    factory.registerNodeType<PickApple>("PickApple");
    factory.registerNodeType<CloseFridgeDoor>("CloseFridgeDoor");
    factory.registerNodeType<MoveToRoomDoor>("MoveToRoomDoor");
    factory.registerNodeType<ExitRoom>("ExitRoom");

    auto tree = factory.createTreeFromText(
        R"(
        <root main_tree_to_execute="MainTree">
            <BehaviorTree ID="MainTree">
                <Sequence name="main_sequence">
                    <MoveToDoor name="move_to_door"/>
                    <Fallback name="room_door_check">
                        <Sequence name="open_room_door_seq">
                            <IsRoomDoorClosed name="is_room_door_closed"/>
                            <OpenRoomDoor name="open_room_door"/>
                        </Sequence>
                        <EnterRoom name="enter_room"/>
                    </Fallback>
                    <MoveToFridge name="move_to_fridge"/>
                    <Fallback name="fridge_door_check">
                        <Sequence name="open_fridge_door_seq">
                            <IsFridgeDoorClosed name="is_fridge_door_closed"/>
                            <OpenFridgeDoor name="open_fridge_door"/>
                        </Sequence>
                        <FindApple name="find_apple"/>
                    </Fallback>
                    <PickApple name="pick_apple"/>
                    <CloseFridgeDoor name="close_fridge_door"/>
                    <MoveToRoomDoor name="move_to_room_door"/>
                    <ExitRoom name="exit_room"/>
                </Sequence>
            </BehaviorTree>
        </root>
        )"
    );

    std::cout << "Starting Behavior Tree execution..." << std::endl;
    tree.tickRoot();
    std::cout << "Behavior Tree execution completed." << std::endl;

    return 0;
}
