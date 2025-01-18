#include "Participant.hpp"
#include <iostream>

using namespace std;

// Constructor
Participant::Participant(const string& id, const string& role, const string& name)
    : participantID(id), role(role), name(name) {}

void Participant::registerParticipant(const string& eventID/*, const string& role, const string& name*/) {  
    // cout << "Registering participant for event " << eventID << "..." << endl;
    // cout << "ID: " << participantID << ", Role: " << role << ", Name: " << name << endl;
    // return "Participant " + name + " with ID " + participantID + " has been successfully registered for event " + eventID + ".";

    // cout << "Enter the Participant ID: ";
    // cin >> participantID;
    // cout << "Enter the name: ";
    // cin >> name;
    // cout << "Enter the role: "; 
}

bool Participant::updateParticipantRole(const string& participantID, const string& newRole) {
    if (this->participantID == participantID) {
        cout << "Updating role for participant with ID: " << participantID << endl;
        role = newRole;
        cout << "New role: " << newRole << endl;
        return true;
    }
    cout << "Participant with ID " << participantID << " not found." << endl;
    return false;
}

Participant Participant::getParticipantDetails(const string& participantID) const {
    if (this->participantID == participantID) {
        cout << "Fetching details for participant with ID: " << participantID << endl;
        return *this; // Return the current object
    }
    cout << "Participant with ID " << participantID << " not found." << endl;
    return Participant("", "", ""); // Return an empty participant object
}


string Participant::getParticipantRole() const {
    return role; 
}