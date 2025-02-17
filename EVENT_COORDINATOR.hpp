#ifndef EVENT_COORDINATOR_HPP
#define EVENT_COORDINATOR_HPP

#include <string>
#include <map>
class EventCoordinator{
    private:
        std::string coordinatorID;
        std::string name;
        std::string email;
    public:
    EventCoordinator(std::string id, std::string name, std::string email);
    void assignCoordinator(const std::string& name, const std::string& email);
    void getCoordinatorDetails() const;

};

#endif
