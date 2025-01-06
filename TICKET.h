#ifndef TICKET_HPP
#define TICKET_HPP

#include <string>

class Ticket{
    private:
        std::string ticketID;
        double price;
        std::string date;
    
    protected:
        void setPrice(double newPrice) {
        price = newPrice;
    }

    public:
        Ticket();
        std::string generateTicket(const std::string& eventID, double type, double price, const std::string& date);
        bool validateTicket(const std::string& ticketID) const;
        const Ticket& getTicketDetails(const std::string& ticketID) const;
        bool refundTicket(const std::string& ticketID);

        double getPrice() const {
            return price;
        }
};

class VIP : public Ticket{
    private:
        std::string benefits = "Food, Drinks, Private Seating, Entry";
    public:
        VIP() {
            setPrice(100);
        }
};

class Regular : public Ticket{
    private:
        std::string benefits = "Food, Drinks, Normal Seating, Entry";
    public:
        Regular() {
            setPrice(50);
        }

};

class Economy : public Ticket{
    private:
        std::string benefits = "Entry, Seating";
    public:
        Economy() {
            setPrice(25);
        }
};

#endif
