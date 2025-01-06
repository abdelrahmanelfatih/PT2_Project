#include <iostream>
#include "Sponsor.hpp"
#include "Resource.hpp"
#include "Review.h"
#include "Notification.h"
#include "EVENT_COORDINATOR.hpp"
#include "TICKET.hpp"
#include "Participant.hpp"
#include "Schedule.hpp"
#include "Audience.hpp"
#include "Volunteer.hpp"
#include "Event.h"
#include "Location.h"


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

            // Testing Participant class
    Participant participant1("P001", "Speaker", "John Doe");
    cout << participant1.registerParticipant("E001", "Speaker", "John Doe") << endl;

    participant1.updateParticipantRole("P001", "Attendee");
    Participant pDetails = participant1.getParticipantDetails("P001");
    cout << "Participant Role: " << pDetails.getParticipantRole() << endl;

    // Testing Schedule class
    Schedule schedule1("S001", "2025-02-15", "10:00 AM", "12:00 PM");
    cout << schedule1.setSchedule("E001", "2025-02-15", "10:00 AM", "12:00 PM") << endl;

    schedule1.updateSchedule("S001", "2025-02-15", "11:00 AM", "1:00 PM");
    Schedule sDetails = schedule1.getSchedule("S001");
    cout << "Schedule Start Time: " << sDetails.getStartTime() << endl;

    // Testing Audience class
    Audience audience1("A001", "Attendee", "Jane Smith", "jane@example.com", "1234567890");
    cout << "Audience Email: " << audience1.getEmail() << endl;
    cout << "Audience Phone: " << audience1.getPhoneNo() << endl;

    // Testing Volunteer class
    Volunteer volunteer1("V001", "Volunteer", "Alice Brown", "Registration", 5.0);
    cout << "Volunteer Task: " << volunteer1.getTask() << endl;
    cout << "Volunteer Working Hours: " << volunteer1.getWorkingHours() << " hours" << endl;

    volunteer1.assignTask("Crowd Management");
    volunteer1.setWorkingHours(8.0);
    cout << "Updated Volunteer Task: " << volunteer1.getTask() << endl;
    cout << "Updated Working Hours: " << volunteer1.getWorkingHours() << " hours" << endl;

    //Event test
    Location* location;
    EventCoordinator* coord3;
    Schedule* schudle;
    Event event("1", "ACD", "Arabic cultare day event", "Caltural", location, coord3, schudle);
    event.createEvent();
    event.updateEventDetails( "2", "Infest","indonesian cultare event","cultaral");
    event.getEventDetails();


    std::system("pause");

    return 0;
}
