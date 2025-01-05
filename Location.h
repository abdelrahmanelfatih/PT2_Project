#ifndef LOCATION_H
#define LOCATION_H
#include <string>
using std::string;

class Location{
    string locationID;
    string locationName;
    string address;
    int capacity;
    string status;

public:
    Location(string id, string name, string address, int capacity, string status) :
    locationID(id), locationName(name), address(address), capacity(capacity), status(status) {}

    void addLocation(string name, string address, string capacity);
    void updateLocation(string id, string name, string address, int capacity, string status);
    Location getLocationDetails(string id);
};



#endif
