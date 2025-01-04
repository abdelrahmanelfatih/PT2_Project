#include "EVENT_COORDINATOR.h"
#include <iostream>

EventCoordinator::EventCoordinator() : coordinatorID(""), name(""), email("") {}


void EventCoordinator::assignCoordinator(const std::string& name, const std::string& email) {
    this->name = name;
    this->email = email;
    
    static int idCounter = 1;
    this->coordinatorID = "C" + std::to_string(idCounter++);
    std::cout << "Coordinator assigned successfully. ID: " << this->coordinatorID << std::endl;
}


EventCoordinator EventCoordinator::getCoordinatorDetails(const std::string& coordinatorID) const {
    if (this->coordinatorID == coordinatorID) {
        return *this;
    } else {
        throw std::invalid_argument("Coordinator ID not found.");
    }
}
