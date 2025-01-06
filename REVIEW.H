#ifndef REVIEW_H
#define REVIEW_H

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

class Review
{
    private:
    string reviewID;
    string reviewerName;
    int rating;
    string comment;
    string timeStamp;

    public:
    const string submitReview(string& id,string& name,int rate,string& comm) const;
    bool deleteReview(string ID);
    double getAverageRating(string eventID);
};

#endif