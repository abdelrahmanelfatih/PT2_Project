#ifndef REVIEW_H
#define REVIEW_H

#include <string>
using namespace std;

class Review {
private:
    string reviewID;
    string reviewerName;
    int rating;
    string comment;
    string timeStamp;

public:
    Review(const string& id, const string& name, int rate, const string& comm, const string& time);

    string submitReview() const;
    bool deleteReview();


    // Getters
    void generateReview() const;
    void getReviewDetails() const;
};

#endif 
