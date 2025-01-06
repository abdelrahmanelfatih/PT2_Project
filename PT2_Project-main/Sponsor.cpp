#include "Sponsor.hpp"
using namespace std;
#include <iostream>

Sponsor::Sponsor() : sponsorID(""), name(""), organizationType(""), budget() {}

Sponsor::Sponsor(const string& id, const string& name, const string& orgType, double budget)
    :sponsorID(id), name(name), organizationType(orgType), budget(budget) {}

void Sponsor::addSponsor(const string& id, const string& name, const string& orgType, double budget)
{
    sponsorID = id;
    this->name = name;
    organizationType = orgType;
    this->budget = budget;
}

string Sponsor::getID(){return sponsorID;}
string Sponsor::getName(){return name;}
string Sponsor::getType(){return organizationType;}
double Sponsor::getBudget(){return budget;}

void Sponsor::getSponsorDetails() {
    cout << "sponsorID: " << getID() << endl;
    cout << "Name: " << getName() << endl;
    cout << "Organization Type: " << getType() << endl;
    cout << "Budget: " << getBudget() << endl;
}


