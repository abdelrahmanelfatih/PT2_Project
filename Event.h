#ifndef EVENT_H
#define EVENT_H
#include <iostream>
#include <string>
#include <vector>
#include "Location.h"
#include "EVENT_COORDINATOR.h"
#include "Participant.hpp"
#include "Resource.hpp"
#include "Schedule.hpp"

using std::string;
using std::vector;
class Event{
   string eventID;
   string name;
   string description;
   string catagory;
   //Location* location;
   EventCoordinator* eventcoordinator;
   vector<Participant*> participants;
   vector<Resource*> resources;

public:
    //Constructor
    Event(string id, string name, string desc, string catagory): 
    eventID(id), name(name), description(desc), catagory(catagory) {}
    createEvent()
};



#endif