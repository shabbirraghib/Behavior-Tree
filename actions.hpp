#ifndef ACTIONS_HPP
#define ACTIONS_HPP

#include <behaviortree_cpp_v3/behavior_tree.h>
#include <iostream>

class MoveToDoor : public BT::SyncActionNode {
public:
    MoveToDoor(const std::string& name) : BT::SyncActionNode(name, {}) {}
    BT::NodeStatus tick() override {
        std::cout << "[Action] Moving towards the room door" << std::endl;
        return BT::NodeStatus::SUCCESS;
    }
};

class IsRoomDoorClosed : public BT::ConditionNode {
public:
    IsRoomDoorClosed(const std::string& name) : BT::ConditionNode(name, {}) {}
    BT::NodeStatus tick() override {
        // Simulate door state (assume closed for demo)
        std::cout << "[Condition] Checking if room door is closed: Yes" << std::endl;
        return BT::NodeStatus::SUCCESS; // Closed
    }
};

class OpenRoomDoor : public BT::SyncActionNode {
public:
    OpenRoomDoor(const std::string& name) : BT::SyncActionNode(name, {}) {}
    BT::NodeStatus tick() override {
        std::cout << "[Action] Opening the room door" << std::endl;
        return BT::NodeStatus::SUCCESS;
    }
};

class EnterRoom : public BT::SyncActionNode {
public:
    EnterRoom(const std::string& name) : BT::SyncActionNode(name, {}) {}
    BT::NodeStatus tick() override {
        std::cout << "[Action] Entering the room" << std::endl;
        return BT::NodeStatus::SUCCESS;
    }
};

class MoveToFridge : public BT::SyncActionNode {
public:
    MoveToFridge(const std::string& name) : BT::SyncActionNode(name, {}) {}
    BT::NodeStatus tick() override {
        std::cout << "[Action] Moving towards the fridge door" << std::endl;
        return BT::NodeStatus::SUCCESS;
    }
};

class IsFridgeDoorClosed : public BT::ConditionNode {
public:
    IsFridgeDoorClosed(const std::string& name) : BT::ConditionNode(name, {}) {}
    BT::NodeStatus tick() override {
        // Simulate door state (assume closed for demo)
        std::cout << "[Condition] Checking if fridge door is closed: Yes" << std::endl;
        return BT::NodeStatus::SUCCESS; // Closed
    }
};

class OpenFridgeDoor : public BT::SyncActionNode {
public:
    OpenFridgeDoor(const std::string& name) : BT::SyncActionNode(name, {}) {}
    BT::NodeStatus tick() override {
        std::cout << "[Action] Opening the fridge door" << std::endl;
        return BT::NodeStatus::SUCCESS;
    }
};

class FindApple : public BT::SyncActionNode {
public:
    FindApple(const std::string& name) : BT::SyncActionNode(name, {}) {}
    BT::NodeStatus tick() override {
        std::cout << "[Action] Finding the apple" << std::endl;
        return BT::NodeStatus::SUCCESS;
    }
};

class PickApple : public BT::SyncActionNode {
public:
    PickApple(const std::string& name) : BT::SyncActionNode(name, {}) {}
    BT::NodeStatus tick() override {
        std::cout << "[Action] Picking the apple" << std::endl;
        return BT::NodeStatus::SUCCESS;
    }
};

class CloseFridgeDoor : public BT::SyncActionNode {
public:
    CloseFridgeDoor(const std::string& name) : BT::SyncActionNode(name, {}) {}
    BT::NodeStatus tick() override {
        std::cout << "[Action] Closing the fridge door" << std::endl;
        return BT::NodeStatus::SUCCESS;
    }
};

class MoveToRoomDoor : public BT::SyncActionNode {
public:
    MoveToRoomDoor(const std::string& name) : BT::SyncActionNode(name, {}) {}
    BT::NodeStatus tick() override {
        std::cout << "[Action] Moving towards the room door to exit" << std::endl;
        return BT::NodeStatus::SUCCESS;
    }
};

class ExitRoom : public BT::SyncActionNode {
public:
    ExitRoom(const std::string& name) : BT::SyncActionNode(name, {}) {}
    BT::NodeStatus tick() override {
        std::cout << "[Action] Exiting the room" << std::endl;
        return BT::NodeStatus::SUCCESS;
    }
};

#endif
