#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include <string>
using namespace std;

class Notification {
private:
    string notificationID;
    string message;
    string timeStamp;

public:
    Notification();

    Notification(const string& id, const string& msg, const string& time);

    void generateNotification();
    void getNotificationDetails();

    string sendMessage() const;
    void setMessage(const string& msg);

    // Getters
    string getNotificationID() const;
    string getMessage() const;
    string getTimeStamp() const;
};

#endif 
