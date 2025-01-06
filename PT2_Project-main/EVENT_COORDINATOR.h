#ifndef EVENT_COORDINATOR_H
#define EVENT_COORDINATOR_H

#include <string>
#include <map>
class EventCoordinator{
    private:
        std::string coordinatorID;
        std::string name;
        std::string email;
    public:
    EventCoordinator();
    void assignCoordinator(const std::string& name, const std::string& email);
    std::map<std::string, std::string> getCoordinatorDetails() const;

};

#endif