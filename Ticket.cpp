#include "TICKET.hpp"
#include <string>
#include <iostream>
using namespace std;

Ticket::Ticket() : ticketID(""), Type("") ,price(0.00), date("") {}

string Ticket::generateTicket(const std::string& eventID, std::string type, double price, const std::string& date) {
    this->ticketID = eventID + type;
    this->price = price;
    this->date = date;
    return ticketID;
}

bool Ticket:: validateTicket(const string& ticketID) const {
    return this->ticketID == ticketID;
}

const Ticket& Ticket::getTicketDetails(const string& ticketID) const{
    if(this->ticketID == ticketID){
        return *this;
    }
    throw std::invalid_argument("Ticket ID not found.");

}

bool Ticket::refundTicket(const string& ticketID){
    if (this->ticketID == ticketID) {
        std::cout << "Refunding ticket: " << ticketID << std::endl;
        this->price = 0.0;
        return true;
    }
    std::cout << "Invalid ticket ID: " << ticketID << std::endl;
    return false;

}
    std::string Ticket::getDate() {
    return this->date;
    }

    double Ticket::getPrice() {
    return this->price;
    }

