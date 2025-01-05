#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

class Notification 
{
    private:
    string notificationID;
    string message;
    string timestamp;

    public:
    string sendMessage() const;
    void setMessage(string& msg);
};