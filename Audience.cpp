#include "Audience.hpp"

using namespace std;

Audience::Audience(const string& id, const string& role, const string& name, const string& email, const string& phoneNo)
    : Participant(id, role, name), email(email) , phoneNo(phoneNo) {}

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