#include <iostream>
#include <string>
#include <map>
#include "Location.h"
using std::string;
using std::map;

bool Location::addLocation(string name, string address, int capacity){
    locationName = name;
    this->address = address;
    this->capacity = capacity;
    return (1==1);
}

bool Location::updateLocation(string id, string name,string address,  int capacity, string status){
    if (!id.empty()) locationID = id;
    if (!name.empty()) locationName = name;
    if (!address.empty()) this->address = address;
    if (capacity > 0) this->capacity = capacity; 
    if (!status.empty()) this->status = status;

    std::cout << "Location details updated." << std::endl;
    return (1==1);
}

void Location::getLocationDetails() const{
    std::cout<< "Location ID: " << locationID << std::endl;
    std::cout<< "Location Name: " << locationName << std::endl; 
    std::cout<< "Location Address: " << address << std::endl;
    std::cout<< "Location Capacity: " << capacity << std::endl;
    std::cout<< "Location Status: " << status << std::endl;
}