#include <string>
#ifndef SPONSOR_H
#define SPONSOR_H

using namespace std;

class Sponsor{
private:
    string sponsorID;
    string name;
    string organizationType;
    double budget;

public:
    Sponsor();
    Sponsor(const string& id, const string& name, const string& orgType, double budget);

    void addSponsor(const string& id, const string& name, const string& orgType, double budget);


    string getID();
    string getName();
    string getType();
    double getBudget();

    void getSponsorDetails();
};

#endif

