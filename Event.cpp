#include "Event.h"

string Event::createEvent() {
    std::cout << "Event '" << name << "' created." << std::endl;
    return eventID;
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
        location->getLocationDetails();
    } else {
        std::cout << "Location not set." << std::endl;
    }

    if (eventcoordinator) {
        std::cout << "Coordinator Details:" << std::endl;
        eventcoordinator->getCoordinatorDetails();
    } else {
        std::cout << "Event Coordinator not set." << std::endl;
    }

    if (schedule) {
        std::cout << "Schedule Details:" << std::endl;
        schedule->getScheduleDetails();
    } else {
        std::cout << "Schedule not set." << std::endl;
    }
}
