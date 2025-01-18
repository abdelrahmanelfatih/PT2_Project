#include "Volunteer.hpp"
#include <iostream>
using namespace std;

Volunteer::Volunteer(const string& id, const string& role, const string& name, const string& task, double WrkHrs)
    : Participant(id, role, name), task(task), WrkHrs(WrkHrs) {}

void Volunteer::registerParticipant(const string& eventID){
    cout << "Enter the Participant ID: "; cin >> participantID;
    cout << "Enter the Name: "; cin >> name;
    cout << "Enter the task: "; cin >> task;
    cout << "Enter the working hours"; cin >> WrkHrs;
    cout << endl << endl;

    this->role = "Volunteer";
}

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
