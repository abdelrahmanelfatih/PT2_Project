#include "Sponsor.hpp"
using namespace std;
#include <iostream>

Sponsor::Sponsor() : sponsorID(""), name(""), organizationType(""), budget() {}

Sponsor::Sponsor(const string& id, const string& name, const string& orgType, double budget)
    :sponsorID(id), name(name), organizationType(orgType), budget(budget) {}

void Sponsor::addSponsor()
{
    cout << "Enter sponsorID: ";
    cin >> sponsorID;
    cout << "Enter sponsor name: ";
    cin >> name;
    cout << "Enter the type of the sponsor's organization: ";
    cin >> organizationType;
    cout << "Enter sponsor's budget: ";
    cin >> budget;
    cout << endl << endl;
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


