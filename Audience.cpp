#include "Audience.hpp"
#include <iostream>
using namespace std;

Audience::Audience(){};

Audience::Audience(const string& id, const string& role, const string& name, const string& email, const string& phoneNo)
    : Participant(id, role, name), email(email) , phoneNo(phoneNo) {}


void Audience::registerParticipant(){
    cout << "Enter the Participant ID: ";cin.ignore(); getline(cin, participantID);
    cout << "Enter the Name: "; getline(cin, name);
    cout << "Enter the email: "; getline(cin, email);
    cout << "Enter the phone number: "; getline(cin, phoneNo);
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

void Audience::getParticipantDetails() const{
    cout << "Participant ID: " << Participant::participantID;
    cout << "\nName: " << Participant::name;
    cout << "\nRole: " << Participant::role;
    cout << "\nEmail: " << email;
    cout << "\nphoneNo: " << phoneNo << endl;
}