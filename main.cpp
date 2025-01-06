#include <iostream>
#include "Sponsor.hpp"
#include "Resource.hpp"
#include "Review.h"
#include "Notification.h"
#include "EVENT_COORDINATOR.hpp"
#include "TICKET.hpp"

using namespace std;

int main() {

    //Sponsor Test
    Sponsor sponsor1("S001", "TechCorp", "Technology", 50000.0);
    Sponsor sponsor2;

    sponsor2.addSponsor("S002", "MediCorp", "Medical", 10000.0);

    std::cout << "\n\nSponsor Details:\n";
    sponsor1.getSponsorDetails();


    //Resources Test
    Resource projector("R001", "Projector", 10);

    cout << projector.checkResourceDetails() << "\n";
    if (projector.allocateResource(3)) {
        cout << "\n\nResources allocated successfully!\n";
    } else {
        cout << "Allocation failed: Not enough resources!\n";
    } 

    cout << projector.checkResourceDetails() << "\n";

    cout << "adding 5 projector...\n";
    projector.addResource(5);

    cout << projector.checkResourceDetails() << "\n\n\n";
    
    // Notification Test
    Notification notification;
    string notificationMessage = "Event starts in 30 minutes.";
    notification.setMessage(notificationMessage);
    cout << "Notification Message: " << notificationMessage << endl;
    cout << notification.sendMessage() << endl;
    
    //Review Test
    Review review;
    string reviewID = "R001";
    string reviewerName = "Alice";
    int rating = 5;
    string comment = "Excellent event!";
    string eventID = "E001";
    
    review.submitReview(reviewID, reviewerName, rating, comment);
    cout << "Review Submitted with ID: " << reviewID << endl;

    cout << "Deleting Review..." << endl;
    if (review.deleteReview(reviewID)) {
        cout << "Review with ID " << reviewID << " deleted successfully." << endl;
    } else {
        cout << "Failed to delete review with ID " << reviewID << "." << endl;
    }

    cout << "Calculating Average Rating..." << endl;
    double averageRating = review.getAverageRating(eventID);
    cout << "Average Rating for Event " << eventID << ": " << averageRating << endl;

    // Event Coordinator Test

    map<string, EventCoordinator> coordinators;

    EventCoordinator coord1, coord2;
    
    coord1.assignCoordinator("Abdelrahman Elfatih", "Abdul@gmail.com");
    coord2.assignCoordinator("Aditya Vivaldi", "aditviv@gmail.com");

    coordinators[coord1.getCoordinatorDetails().at("Coordinator ID")] = coord1;
    coordinators[coord2.getCoordinatorDetails().at("Coordinator ID")] = coord2;
    
     for (const auto& entry : coordinators) {
        cout << "Coordinator ID: " << entry.first << endl;

        
        for (const auto& detail : entry.second.getCoordinatorDetails()) {
            if (detail.first != "Coordinator ID") {
                cout << detail.first << ": " << detail.second << endl;
            }
        }
     }

    // Ticket Test

    Ticket ticket;

    string ticketID = ticket.generateTicket("V10", "VIP", 250.00, "2025-1-6");
    cout<<"Ticket Generated, Ticket ID: "<< ticketID<<endl;

    if(ticket.validateTicket(ticketID)){
        cout<<"Valid Ticket"<< endl;
    } else{
        cout<<"Invalid ticket"<<endl;
    }

    try
    {
        Ticket details = ticket.getTicketDetails(ticketID);
        cout << "Ticket Details:" << endl;
        cout << "ID: " << ticketID << endl;
        cout << "Price: " << details.getPrice() << endl;
        cout << "Date: " << details.getDate() << endl;
    }
    catch(const std::invalid_argument& e)
    {
        cout << "Error: " << e.what() << endl;
    }
    
    if(ticket.refundTicket(ticketID)){
        cout<<"ticket refunded."<<endl;

    } else{
        cout<<"refund Failed"<<endl;
    }

    system("pause");

    return 0;
}
    
    system("pause");
    return 0;
}
