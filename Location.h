#ifndef LOCATION_H
#define LOCATION_H
#include <string>
#include <map>
using std::string;
using std::map;

class Location{
    string locationID;
    string locationName;
    string address;
    int capacity;
    string status;

public:
    Location(string id, string name, string address, int capacity, string status) :
    locationID(id), locationName(name), address(address), capacity(capacity), status(status) {}

    void addLocation(string name, string address, int capacity);
    void updateLocation(string id = "", string name = "",string address = "", int capacity = 0, string status = "");
    map<string, string> getLocationDetails() const;
};



#endif
