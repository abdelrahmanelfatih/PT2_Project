#include "Event.h"

string Event::createEvent() {
    return "";
}

string Event::getID() const {
    return eventID;
}

void Event::updateEventDetails(string id, string name, string desc, string cat) {
    if (!id.empty()) eventID = id;
    if (!name.empty()) this->name = name;
    if (!desc.empty()) description = desc;
    if (!cat.empty()) category = cat; 

    std::cout << "Location details updated." << std::endl;
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


void Event::addVolunteer(const Volunteer& volunteer){
    volunteers.push_back(volunteer);
}
void Event::addAudience(const Audience& audience){
    audiences.push_back(audience);
}
void Event::addSponsor(Sponsor* sponsor){
    sponsors.push_back(sponsor);
}
void Event::addTicket(Ticket* ticket){
    tickets.push_back(ticket);
}
void Event::addResource(const Resource& resource){
    resources.push_back(resource);
}
void Event::addNotification(Notification* notification){
    notifications.push_back(notification);
}
void Event::addReview(Review* review){
    reviews.push_back(review);
}