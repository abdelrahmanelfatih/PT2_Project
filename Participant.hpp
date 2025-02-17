#ifndef PARTICIPANT_HPP
#define PARTICIPANT_HPP

#include <string>

using namespace std;

class Participant {
protected:
    string participantID; 
    string role;          
    string name;          

public:
    // Constructor
    Participant();

    Participant(const string& id, const string& role, const string& name);

    virtual void registerParticipant();

    bool updateParticipantRole(const string& participantID, const string& newRole);

    virtual void getParticipantDetails() const = 0;

    string getParticipantRole() const;


};

#endif
