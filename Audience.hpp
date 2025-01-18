#ifndef AUDIENCE_HPP
#define AUDIENCE_HPP
#include "Participant.hpp"
#include <string>
using std::string;

class Audience : public Participant {
private:
    string email;
    string phoneNo;

public:

    Audience();

    Audience(const string& id, const string& role, const string& name, const string& email, const string& phoneNo);
    
    void registerParticipant(const string& eventID) override;

    void setEmail(string email);
    void setPhoneNo(string phoneNo);
    string getEmail() const;
    string getPhoneNo() const;
};

#endif
