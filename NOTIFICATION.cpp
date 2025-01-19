#include "Notification.h"
#include <iostream>

Notification::Notification(){};

Notification::Notification(const string& id, const string& msg, const string& time)
    : notificationID(id), message(msg), timeStamp(time) {}

void Notification::generateNotification(){
    cout << "Notification ID: "; cin.ignore(); getline(cin, notificationID);
    cout << "Message: "; cin.ignore(); getline(cin, message);
    cout << "Time: "; getline(cin, timeStamp);
}

void Notification::getNotificationDetails(){
    cout << "\nNotification ID: " << notificationID;
    cout << "\nMessage: " << message;
    cout << "\nTime: " << timeStamp << endl;
}


string Notification::sendMessage() const {
    return "Notification sent: " + message;
}

void Notification::setMessage(const string& msg) {
    message = msg;
}

string Notification::getNotificationID() const { return notificationID; }
string Notification::getMessage() const { return message; }
string Notification::getTimeStamp() const { return timeStamp; }
