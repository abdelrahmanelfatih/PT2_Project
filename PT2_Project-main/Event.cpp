#include "Event.h"

void Event::createEvent() {
    std::cout << "Event '" << name << "' created." << std::endl;
}

void Event::updateEventDetails(string id, string name, string desc, string cat) {
    eventID = id;
    this->name = name;
    description = desc;
    category = cat;
    std::cout << "Event details updated successfully!" << std::endl;
}

void Event::getEventDetails() const {
    std::cout << "Event Details:" << std::endl;
    std::cout << "ID: " << eventID << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Description: " << description << std::endl;
    std::cout << "Category: " << category << std::endl;

    if (location) {
        std::cout << "Location Details:" << std::endl;
        for (const auto& detail : location->getLocationDetails()) {
            std::cout << detail.first << ": " << detail.second << std::endl;
        }
    } else {
        std::cout << "Location not set." << std::endl;
    }

    if (eventcoordinator) {
        std::cout << "Coordinator Details:" << std::endl;
        for (const auto& detail : eventcoordinator->getCoordinatorDetails()) {
            std::cout << detail.first << ": " << detail.second << std::endl;
        }
    } else {
        std::cout << "Event Coordinator not set." << std::endl;
    }

    if (schedule) {
        std::cout << "Schedule Details:" << std::endl;
        for (const auto& detail : schedule->getScheduleDetails()) {
            std::cout << detail.first << ": " << detail.second << std::endl;
        }
    } else {
        std::cout << "Schedule not set." << std::endl;
    }
}
