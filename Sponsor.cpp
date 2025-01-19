#include "Sponsor.hpp"
#include <iostream>
#include <limits>


using namespace std;

Sponsor::Sponsor() : sponsorID(""), name(""), organizationType(""), budget() {}

Sponsor::Sponsor(const string& id, const string& name, const string& orgType, double budget)
    :sponsorID(id), name(name), organizationType(orgType), budget(budget) {}

void Sponsor::addSponsor() {
    cout << "Enter sponsor ID: ";
    cin.ignore();
    getline(cin, sponsorID);

    cout << "Enter sponsor name: ";
    getline(cin, name);

    cout << "Enter the type of the sponsor's organization: ";
    getline(cin, organizationType);

    cout << "Enter sponsor's budget: ";
while (true) {
    cin >> budget;

    if (cin.fail() || budget < 0) { 
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cout << "Invalid input. Budget must be a positive number. Please try again: ";
    } else {
        break; 
    }
}

    cin.ignore(); // Clear the newline character in the buffer
    cout << "\nSponsor added successfully!\n\n";
}

string Sponsor::getID(){return sponsorID;}
string Sponsor::getName(){return name;}
string Sponsor::getType(){return organizationType;}
double Sponsor::getBudget(){return budget;}

void Sponsor::getSponsorDetails() {
    cout << "SponsorID: " << getID() << endl;
    cout << "Name: " << getName() << endl;
    cout << "Organization Type: " << getType() << endl;
    cout << "Budget: " << getBudget() << endl;
}


