#ifndef VOLUNTEER_HPP
#define VOLUNTEER_HPP

#include"Participant.hpp"
#include <string>
using std::string;

class Volunteer : public Participant{
private:
    string task;
    double WrkHrs;

public:
    Volunteer(const string& id, const string& role, const string& name, const string& task, double WrkHrs);
    void assignTask(string task);
    void setWorkingHours(double hours);
    string getTask() const;
    double getWorkingHours() const;
};

#endif
