#ifndef SCHEDULE_HPP
#define SCHEDULE_HPP

#include <string>

using namespace std;

class Schedule {
private:
    string scheduleID;
    string startTime;
    string endTime;
    string date;

public:
    Schedule(const string& scheduleID, const string& date, const string& startTime, const string& endTime);

    string setSchedule(const string& eventID, const string& date, const string& startTime, const string& endTime);
    bool updateSchedule(const string& scheduleID, const string& date, const string& startTime, const string& endTime);
    Schedule getSchedule(const string& scheduleID) const;
};

#endif
