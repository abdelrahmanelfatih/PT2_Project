#ifndef PARTICIPANT_HPP
#define PARTICIPANT_HPP

#include <string>

using namespace std;

class Participant {
private:
    string participantID; 
    string role;          
    string name;          

public:
    // Constructor
    Participant(const string& id, const string& role, const string& name);

    string registerParticipant(const string& eventID, const string& role, const string& name);

    bool updateParticipantRole(const string& participantID, const string& newRole);

    Participant getParticipantDetails(const string& participantID) const;

    string getParticipantRole() const;
};

#endif
