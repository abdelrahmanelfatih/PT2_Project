#include "Notification.h"

string Notification::sendMessage() const {
    return "Notification sent: " + message;
}

void Notification::setMessage(string& msg) {
    message = msg;
}
