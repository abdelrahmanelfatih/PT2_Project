#include "TICKET.hpp"
#include <string>
#include <iostream>
#include <string>
using namespace std;

Ticket::Ticket() : ticketID(""), Type("") ,price(0.00), date("") {}

void Ticket::generateTicket() {
    //! this->ticketID = eventID + type;
    //! this->price = price;
    //! this->date = date;
    //! return ticketID;

    cout << "Enter Ticket ID: "; cin >> ticketID;
    cout << "Enter ticket price: "; cin >> price;
    cout << "Enter ticket type: "; cin >> Type;
}

bool Ticket:: validateTicket(const string& ticketID) const {
    return this->ticketID == ticketID;
}

void Ticket::getTicketDetails() {
    //! if(this->ticketID == ticketID){
    //!     return *this;
    //! }
    //! throw std::invalid_argument("Ticket ID not found.");

    cout << "TicketID: " << ticketID << endl;
    cout << "Price: " << price << endl;
    cout << "Date: " << date << endl;
    cout << "Type: " << Type << endl;
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

    void Ticket::setDate(string scheduleDate){
        date = scheduleDate;
    }

