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
        void generateTicket();
        bool validateTicket(const std::string& ticketID) const;
        void getTicketDetails();
        bool refundTicket(const std::string& ticketID);

        std::string getType();

        double getPrice();
        std::string getTicketID();
        std::string getDate();

        void setDate(std::string scheduleDate);
        void setType();
        void setPrice(double price);

};

#endif