#include <iostream>
#include <string>
#include <map>
#include "Location.h"
using std::string;
using std::map;

void Location::addLocation(string name, string address, int capacity){
    locationName = name;
    this->address = address;
    this->capacity = capacity;
}

void Location::updateLocation(string id = "", string name = "",string address = "",  int capacity = 0, string status = ""){
    if (!id.empty()) locationID = id;
    if (!name.empty()) locationName = name;
    if (!address.empty()) this->address = address;
    if (capacity > 0) this->capacity = capacity; 
    if (!status.empty()) this->status = status;

    std::cout << "Location details updated." << std::endl;
}

map<string, string> Location::getLocationDetails() const{
    return {
        {"Location ID", locationID},
        {"Name", locationName},
        {"Address", address},
        {"Capacity", std::to_string(capacity)},
        {"Status", status}
    };
}