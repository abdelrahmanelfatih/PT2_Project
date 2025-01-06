#ifndef TICKET_HPP
#define TICKET_HPP
#include <string>

class Ticket{
    private:
        std::string ticketID;
        double price;
        std::string date;
        std::string Type;
    

    public:
        Ticket();
        std::string generateTicket(const std::string& eventID, std::string type, double price, const std::string& date);
        bool validateTicket(const std::string& ticketID) const;
        const Ticket& getTicketDetails(const std::string& ticketID) const;
        bool refundTicket(const std::string& ticketID);

        std::string getType();

        double getPrice();
        std::string getTicketID();
        std::string getDate();

        void setType();
        void setPrice(double price);

};

#endif