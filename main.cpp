#include <iostream>
#include <vector>
#include <deque>
#include "Sponsor.hpp"
#include "Resource.hpp"
#include "Review.h"
#include "Notification.h"
#include "EVENT_COORDINATOR.hpp"
#include "TICKET.hpp"
#include "Participant.hpp"
#include "Schedule.hpp"
#include "Audience.hpp"
#include "Volunteer.hpp"
#include "Event.h"
#include "Location.h"

using namespace std;

int userInterface();
void displayLocations(const vector<Location>& locations);

int main() {
    vector<Resource> resources;
    vector<Location> locations;
    deque<Event> events;

    bool loop = false;

    // Initialize locations
    locations.push_back(Location("1", "DSI", "UTM", 200, "Available"));
    locations.push_back(Location("2", "MPK5", "FK, UTM", 40, "Available"));
    locations.push_back(Location("3", "BK2", "N24, UTM", 80, "Booked"));
    locations.push_back(Location("4", "BS1", "N24, UTM", 20, "Booked"));
    locations.push_back(Location("5", "BK2", "N28, UTM", 200, "Unavailable"));

    // Initialize resources
    resources.push_back(Resource("1", "Chairs", 200));
    resources.push_back(Resource("2", "Tools", 50));
    resources.push_back(Resource("3", "Tables", 25));

    int eventCounter = 0; // Event ID counter
    int i = 0;
    // User interface
    do{
    int input = userInterface();

    switch (input) {
        case 1: { // Create event
            i++;
            string id = to_string(eventCounter++);
            string name, desc, cate;

            cout << "What is the name of the event? ";
            cin.ignore();
            getline(cin, name);

            cout << "\nInput event description: ";
            getline(cin, desc);

            cout << "\nEnter event category: ";
            getline(cin, cate);

            // Display locations
            displayLocations(locations);

            // Choose location
            cout << "Pick a location between the locations listed: ";
            int choice;
            cin >> choice;

            if (choice < 1 || choice > locations.size()) {
                cout << "Invalid input, please try again." << endl;
                return 1;
            }

            // Enter coordinator information
            cout << "Enter Coordinator info" << endl;

            cin.ignore(); // Clear input buffer

            cout << "Coordinator ID: ";
            string coordId;
            getline(cin, coordId);

            cout << "\nCoordinator Name: ";
            string coordName;
            getline(cin, coordName);

            cout << "\nCoordinator email: ";
            string coordEmail;
            getline(cin, coordEmail);

            EventCoordinator coordinator(coordId, coordName, coordEmail);

            // Enter schedule information
            cout << "Enter Schedule info: " << endl;

            cout << "Schedule ID: ";
            string scheduleId;
            getline(cin, scheduleId);

            cout << "\nStart time: ";
            string startTime;
            getline(cin, startTime);

            cout << "\nEnd time: ";
            string endTime;
            getline(cin, endTime);

            cout << "\nDate: ";
            string date;
            getline(cin, date);

            Schedule schedule(scheduleId, date, startTime, endTime);

            // Create event
            Event newEvent(id, name, desc, cate, &locations[choice - 1], &coordinator, &schedule);
            events.push_front(newEvent);

            cout << "Event created successfully with ID: " << id << endl;


            cout << "Do you have a sponsor to add? (Y/N) ";
            char ans;
            cin.get(ans); 

             
            if(toupper(ans) == 'Y'){
            // Enter Sponsor information
            cout << "Enter Sponsor info: " << endl;
            Sponsor sponsor1;
            sponsor1.addSponsor();
            events[0].addSponsor(&sponsor1);
            break;
            }
            cout<< "Understandable have a nice day!" << endl;
            break;
        }
        
        case 3: { // Enroll in an event
            while (true) {
                char participantType;
                int eventID;
                string EventID;

                cout << "Put the eventID you want to participate: ";
                cin >> eventID;
                //!EventID = to_string(eventID);

                cout << "What do you want to be? (type 'a' for audience and 'v' for volunteer): ";
                cin >> participantType;

                if (participantType == 'a') {
                    Audience newAudience;
                    newAudience.Audience::registerParticipant();
                    events[eventID].addAudience(newAudience);
                    break;
                }

                if (participantType == 'v') {
                    Volunteer newVolunteer;
                    newVolunteer.Volunteer::registerParticipant();
                    events[eventID].addVolunteer(newVolunteer);
                    break;
                }

                cout << "Invalid input, try again.\n\n";
            }
            break;
        }
        case 4: { // Generate ticket
            int j;

            cout << "\nPut the eventID you want to generate its ticket: ";
            cin >> j;

            Ticket newTicket;
            newTicket.generateTicket();
            //newTicket.setDate(events[j].schedule->getDate());
            events[j].addTicket(&newTicket);
            break;
        }

        case 5: { // Display details
            int j, choice;
            cout << "Enter eventID: ";
            cin >> j;
            cout << endl;
            
            cout << "What do you want the detail of?" << endl;
            cout << "Event in general (1)\n";
            cout << "Audience (2)\n";
            cout << "Volunteer (3)\n";
            cout << "Resources (4)\n";
            cout << "Sponsor (5)\n";
            cout << "Ticket (6)\n";
            cout << "Review (7)\nYour choice: ";
            cin >> choice;

            switch(choice){
                case 1: {
                    cout << endl;
                    events[j].getEventDetails();
                    cout << endl;
                    break;
                }
                
                case 2: {
                    for (const auto& audience : events[j].audiences){ 
                       cout << endl;
                       audience.Audience::getParticipantDetails();
                       cout << endl;
                    }
                    break;
                }

                case 3: {
                    for (const auto& volunteer : events[j].volunteers){ 
                       cout << endl;
                       volunteer.Volunteer::getParticipantDetails();
                       cout << endl;
                    }
                    break;
                }
                case 4: {
                    for (const auto& resource : resources){
                        cout << endl;
                        cout << resource.checkResourceDetails() << endl;
                    }
                    break;
                }
                case 5: {
                    for (const auto sponsor : events[j].sponsors){
                        cout << endl;
                        sponsor->getSponsorDetails();
                        cout << endl;
                    }
                    break;
                }
                case 6: {
                    for (const auto ticket : events[j].tickets){
                        cout << endl;
                        ticket->getTicketDetails();
                        cout << endl;
                    }
                    break;
                }
                
                case 7: {
                    for (const auto review : events[j].reviews){
                        cout << endl;
                        review->getReviewDetails();
                        cout << endl;
                    }
                

                }
            }
            break;
        }

        case 6: { // Generate Review
        int j;
        cout<<"Input the ID of the Event you'd like to Review: ";
        cin >> j;
        Review newReview;
        newReview.generateReview();
        events[j].addReview(&newReview);
        break;
        }
        default:
            cout << "Invalid choice. Exiting program." << endl;
            return 1;
    }

    cout << "Would you like to exit the program(Y/N)";
    char a;
    cin >> a;
    if(toupper(a) == 'Y')
        loop = false;
    else
        loop = true;
    } while(loop);

    system("pause");
    return 0;
}

int userInterface() {
    int choice;
    cout << "--------------------------- Welcome to Evo Management ---------------------------" << endl;
    cout << "What would you like to do?" << endl;
    cout << "1 - Create event\n2 - Update event (feature pending)\n3 - Enroll in an event\n4 - Generate Ticket\n5 - Event details\n6 - Generate Review";
    cout << "\n(Pick 1 of the 6 options above): ";
    cin >> choice;
    return choice;
}

void displayLocations(const vector<Location>& locations) {
    if (locations.empty()) {
        cout << "No locations available to book." << endl;
        return;
    }

    for (int i = 0; i < locations.size(); ++i) {
        cout << i + 1 << " - Location[" << i << "]: ";
        locations[i].getLocationDetails();
        cout << endl;
    }
}
