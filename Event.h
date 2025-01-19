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
#include "Audience.hpp"
#include "Volunteer.hpp"
#include "Sponsor.hpp"
#include "Notification.h"
#include "Review.h"
#include "TICKET.hpp"

using std::string;
using std::vector;

class Event {
private:
    string eventID;
    string name;
    string description;
    string category;

    Location* location;                 
    EventCoordinator* eventcoordinator; 


public:
    Schedule* schedule;   
                  
    vector<Audience> audiences;
    vector<Volunteer> volunteers;
    vector<Resource> resources;
    vector<Sponsor*> sponsors;
    vector<Ticket*> tickets;
    vector<Review*> reviews;
    vector<Notification*> notifications;
    
    Event(string id, string name, string desc, string cat, 
          Location* loc, EventCoordinator* coord, Schedule* sched)
        : eventID(id), name(name), description(desc), category(cat)
    {
        location = loc;
        eventcoordinator = coord;
        schedule = sched;
    }

    

    
    ~Event() {
        location = nullptr;
        eventcoordinator = nullptr;
        schedule = nullptr;
        for (auto ticket : tickets) {
            delete ticket;
        }
        for (auto review : reviews) {
            delete review;
        }
        for (auto notification : notifications) {
            delete notification;
        }
        for (auto sponsor : sponsors) {
            delete sponsor;
        }
    }



    string getID()const;
    string createEvent();
    void updateEventDetails(string id, string name, string desc, string cat);
    void getEventDetails() const;

    void addVolunteer(const Volunteer& volunteer);
    void addAudience(const Audience& audience);
    void addSponsor(Sponsor* sponsor);
    void addTicket(Ticket* ticket);
    void addResource(const Resource& resource);
    void addNotification(Notification* notification);
    void addReview(Review* review);
};

#endif
