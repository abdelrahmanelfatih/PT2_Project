#include "Schedule.hpp"
#include <iostream>
using namespace std;

Schedule::Schedule(const string& scheduleID, const string& date, const string& startTime, const string& endTime)
    : scheduleID(scheduleID), date(date), startTime(startTime), endTime(endTime) {}

string Schedule::setSchedule(const string& eventID, const string& date, const string& startTime, const string& endTime) {
    this->scheduleID = eventID;
    this->date = date;
    this->startTime = startTime;
    this->endTime = endTime;
    return "Schedule set successfully for event " + eventID;
}

bool Schedule::updateSchedule(const string& scheduleID, const string& date, const string& startTime, const string& endTime) {
    if (this->scheduleID == scheduleID) {
        this->date = date;
        this->startTime = startTime;
        this->endTime = endTime;
        return true;
    }
    return false;
}

void Schedule::getScheduleDetails() const {
    cout << "Schedule Details:" << endl;
    cout << "ID: " << scheduleID << endl;
    cout << "Start time: " << startTime << endl;
    cout << "End time: " << endTime << endl;
    cout << "date: " << date << endl;
}

string Schedule::getStartTime() const {
    return startTime;
}
