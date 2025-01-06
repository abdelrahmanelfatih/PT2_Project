#include "Schedule.hpp"

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

Schedule Schedule::getSchedule(const string& scheduleID) const {
    if (this->scheduleID == scheduleID) {
        return *this;
    }
    return Schedule("", "", "", "");
}

string Schedule::getStartTime() const {
    return startTime;
}
