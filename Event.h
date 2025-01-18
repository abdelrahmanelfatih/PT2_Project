#ifndef EVENT_H
#define EVENT_H

#include <iostream>
#include <string>
#include <vector>
#include "Location.h"
#include "EVENT_COORDINATOR.hpp"
#include "Participant.hpp"
#include "Resource.hpp"
#include "Schedule.hpp"

using std::string;
using std::vector;

class Event {
    string eventID;
    string name;
    string description;
    string category;

    Location* location;                 
    EventCoordinator* eventcoordinator; 
    Schedule* schedule;                 

    vector<Participant*> participants;
    vector<Resource*> resources;

public:
    
    Event(string id, string name, string desc, string cat, 
          Location* loc, EventCoordinator* coord, Schedule* sched)
        : eventID(id), name(name), description(desc), category(cat), 
          location(loc), eventcoordinator(coord), schedule(sched) {}

    
    ~Event() {
        delete location;
        delete eventcoordinator;
        delete schedule;
        for (auto participant : participants) {
            delete participant;
        }
        for (auto resource : resources) {
            delete resource;
        }
    }

    string createEvent();
    void updateEventDetails(string id, string name, string desc, string cat);
    void getEventDetails() const;
};

#endif
