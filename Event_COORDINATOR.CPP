#include "EVENT_COORDINATOR.hpp"
#include <iostream>
#include <map>

EventCoordinator::EventCoordinator() : coordinatorID(""), name(""), email("") {}


void EventCoordinator::assignCoordinator(const std::string& name, const std::string& email) {
    this->name = name;
    this->email = email;
    
    static int idCounter = 1;
    this->coordinatorID = "C" + std::to_string(idCounter++);
    std::cout << "Coordinator assigned successfully. ID: " << this->coordinatorID << std::endl;
}


std::map<std::string, std::string> EventCoordinator::getCoordinatorDetails() const {
    return {
        {"Coordinator ID", coordinatorID},
        {"Name", name},
        {"Email", email}
    };
}
