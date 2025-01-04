#ifndef EVENT_COORDINATOR_H
#define EVENT_COORDINATOR_H

#include <string>
class EventCoordinator{
    private:
        std::string coordinatorID;
        std::string name;
        std::string email;
    public:
    EventCoordinator();
    void assignCoordinator(const std::string& name, const std::string& email);
    EventCoordinator getCoordinatorDetails(const std::string& coordinatorID) const;

};

#endif