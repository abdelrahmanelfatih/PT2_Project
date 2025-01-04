#ifndef TICKET_H
#define TICKET_H

#include <string>

class Ticket{
    private:
        std::string ticketID;
        double price;
        std::string date;
    public:
        std::string generateTicket(const std::string& eventID, double type, double price, const std::string& date);
        bool validateTicket(const std::string& ticketID) const;
        const Ticket& getTicketDetails(const std::string& ticketID) const;
        bool refundTicket(const std::string& ticketID); 
};

class VIP : public Ticket{
    private:
        std::string benefits = "Food, Drinks, Private Seating, Entry";
};

class Regular : public Ticket{
    private:
        std::string benefits = "Food, Drinks, Normal Seating, Entry";
};

class Economy : public Ticket{
    private:
        std::string benefits = "Entry, Seating";
};

#endif