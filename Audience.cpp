#include "Audience.hpp"
#include <iostream>
using namespace std;

Audience::Audience(const string& id, const string& role, const string& name, const string& email, const string& phoneNo)
    : Participant(id, role, name), email(email) , phoneNo(phoneNo) {}


void Audience::registerParticipant(const string& eventID){
    cout << "Enter the Participant ID: "; cin >> participantID;
    cout << "Enter the Name: "; cin >> name;
    cout << "Enter the email: "; cin >> email;
    cout << "Enter the phone number"; cin >> phoneNo;
    cout << endl << endl;

    this->role = "Audience";
}

    void Audience::setEmail(string email) {
        this -> email = email;
}
    void Audience::setPhoneNo(string phoneNo){
        this -> phoneNo = phoneNo;
}
    string Audience::getEmail() const{
        return email;
}
    string Audience::getPhoneNo() const{
        return phoneNo;
}