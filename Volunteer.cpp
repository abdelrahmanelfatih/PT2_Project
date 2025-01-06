#include "Volunteer.hpp"

using namespace std;

Volunteer::Volunteer(const string& id, const string& role, const string& name, const string& task, double WrkHrs)
    : Participant(id, role, name), task(task), WrkHrs(WrkHrs) {}


void Volunteer::assignTask(string task) {
    this->task = task;
}
void Volunteer::setWorkingHours(double hours) {
    this->WrkHrs = hours;
}
string Volunteer::getTask() const {
    return task;
}
double Volunteer::getWorkingHours() const {
    return WrkHrs;
}
