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

    bool addLocation(string name, string address, int capacity);
    bool updateLocation(string id = "", string name = "",string address = "", int capacity = 0, string status = "");
    void getLocationDetails() const;
};



#endif
