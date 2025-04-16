# 🤖 Robot Behavior Tree Task 🌲

This C++ project demonstrates a robot performing a specific task using a **Behavior Tree (BT)** powered by the [BehaviorTree.CPP](https://github.com/BehaviorTree/BehaviorTree.CPP) library.  
The robot navigates to a room, interacts with a fridge, picks up an apple, and exits — all simulated with print statements and dummy action classes (no ROS involved).

---

## 📁 Project Structure

- `main.cpp`  
  Defines and executes the behavior tree using BehaviorTree.CPP.

- `actions.hpp`  
  Contains dummy condition and action classes with logging.

- `CMakeLists.txt`  
  CMake configuration file for building the project.

---

## ✅ Prerequisites

- Ubuntu 20.04 / 22.04
- C++14-compatible compiler (e.g., `g++`)
- CMake ≥ 3.5
- Libraries:
  - `BehaviorTree.CPP`
  - `libzmq3-dev`
  - `libboost-dev`

---

## ⚙️ Installation

1. Install Dependencies
```bash
sudo apt-get update
sudo apt-get install -y build-essential cmake libzmq3-dev libboost-dev
```
2. Install BehaviorTree.CPP
 ```bash
git clone https://github.com/BehaviorTree/BehaviorTree.CPP.git
cd BehaviorTree.CPP
mkdir build && cd build
cmake ..
make
sudo make install
 ```
3. Clone & Build the Project
```bash
 git clone https://github.com/shabbirraghib/Behavior-Tree.git
cd Behavior-Tree
mkdir build && cd build
cmake ..
make  
```
4. Running the Program
   ```bash
   ./build/robot_bt_task

   ```
5. Expected Output (When Doors Are Closed)
```bash
Starting Behavior Tree execution...
[Action] Moving towards the room door
[Condition] Checking if room door is closed: Yes
[Action] Opening the room door
[Action] Entering the room
[Action] Moving towards the fridge door
[Condition] Checking if fridge door is closed: Yes
[Action] Opening the fridge door
[Action] Finding the apple
[Action] Picking the apple
[Action] Closing the fridge door
[Action] Moving towards the room door to exit
[Action] Exiting the room
Behavior Tree execution completed.
```
