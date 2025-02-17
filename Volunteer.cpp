#include "Volunteer.hpp"
#include <iostream>
using namespace std;

Volunteer::Volunteer(){};

Volunteer::Volunteer(const string& id, const string& role, const string& name, const string& task, double WrkHrs)
    : Participant(id, role, name), task(task), WrkHrs(WrkHrs) {}

void Volunteer::registerParticipant(){
    cout << "Enter the Participant ID: "; cin >> participantID;
    cout << "Enter the Name: "; cin.ignore(); getline(cin, name);
    cout << "Enter the task: "; getline(cin, task);
    cout << "Enter the working hours: "; cin >> WrkHrs;
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

void Volunteer::getParticipantDetails() const{
    cout << "Participant ID: " << Participant::participantID;
    cout << "\nName: " << Participant::name;
    cout << "\nRole: " << Participant::role;
    cout << "\nTask: " << task;
    cout << "\nWorking Hours:   " << WrkHrs << endl;
}
