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

map<string, string> Schedule::getScheduleDetails() const {
        return {
            {"Schedule ID", scheduleID},
            {"Start Time", startTime},
            {"End Time", endTime},
            {"Date", date}
        };
}