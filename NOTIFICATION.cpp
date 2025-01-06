#include "Notification.h"

Notification::Notification(const string& id, const string& msg, const string& time)
    : notificationID(id), message(msg), timeStamp(time) {}

string Notification::sendMessage() const {
    return "Notification sent: " + message;
}

void Notification::setMessage(const string& msg) {
    message = msg;
}

string Notification::getNotificationID() const { return notificationID; }
string Notification::getMessage() const { return message; }
string Notification::getTimeStamp() const { return timeStamp; }
