#include <iostream>
#include <vector>
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

int userInterface();
void displayLocations(const vector<Location>& locations);

using namespace std;

int main() {
    vector<Resource> resources;
    vector<Location> locations;
    vector<Event> events;

    locations.push_back(Location("1", "DSI", "UTM", 200, "Available"));
    locations.push_back(Location("2", "MPK5", "FK, UTM", 40, "Available"));
    locations.push_back(Location("3", "BK2", "N24, UTM", 80, "Booked"));
    locations.push_back(Location("4", "BS1", "N24, UTM", 20, "Booked"));
    locations.push_back(Location("5", "BK2", "N28, UTM", 200, "Unavailable"));

    resources.push_back(Resource("1", "Chairs", 200));
    resources.push_back(Resource("2", "Tools", 50));
    resources.push_back(Resource("3", "Tables", 25));

    int input = userInterface();
    int i = 0; // Local event counter

    switch (input) {
        case 1: {
            string id = to_string(i++);
            string name, desc, cate;

            cout << "What is the name of the event? ";
            cin.ignore();
            getline(cin, name);

            cout << "\nInput event description: ";
            getline(cin, desc);

            cout << "\nEnter event category: ";
            getline(cin, cate);

            displayLocations(locations);

            cout << "Pick a location between the locations listed: ";
            int choice{};
            cin >> choice;

            if (choice < 1 || choice > locations.size()) {
                cout << "Invalid input, please try again." << endl;
                return 1;
            }
            cout << "Enter Coordinator info"<< endl;
            cout << "Coordinator ID"

            Event(id,name,desc,cate,locations[choice - 1])            cout << "Event created successfully with ID: " << id << endl;
            break;
        }
        case 2: {
            
        }
        default:
            cout << "Invalid choice. Exiting program." << endl;
            return 1;
    }

    cout << "Press Enter to continue...";
    cin.ignore();
    cin.get();

    return 0;
}

int userInterface() {
    int choice{};
    cout << "--------------------------- Welcome to Evo Management ---------------------------" << endl;
    cout << "What would you like to do?" << endl;
    cout << "1-Create event:\n2-Update event:\n3-Enroll in an event:\n";
    cout << "(Pick 1 of the 3 options above)" << endl;
    cin >> choice;
    return choice;
}

void displayLocations(const vector<Location>& locations) {
    if (locations.empty()) {
        cout << "No locations available to book." << endl;
        return;
    }

    for (int i = 0; i < locations.size(); i++) {
        cout << i + 1 << "-Location[" << i << "]: ";
        locations[i].getLocationDetails();
    }
}
