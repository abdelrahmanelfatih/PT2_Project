#include "Participant.hpp"
#include <iostream>

using namespace std;

// Constructor
Participant::Participant(){};

Participant::Participant(const string& id, const string& role, const string& name)
    : participantID(id), role(role), name(name) {}

void Participant::registerParticipant() {}

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