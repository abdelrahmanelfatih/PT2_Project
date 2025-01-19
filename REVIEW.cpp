#include "Review.h"

Review::Review(const string& id, const string& name, int rate, const string& comm, const string& time)
    : reviewID(id), reviewerName(name), rating(rate), comment(comm), timeStamp(time) {}

string Review::submitReview() const {
    return "Review submitted successfully!";
}

bool Review::deleteReview() {
    reviewID = "";
    reviewerName = "";
    rating = 0;
    comment = "";
    timeStamp = "";
    return true;
}


void generateReview() cosnt {

    cout<<"Enter Review ID: ";
    cin >> reviewID;
    cout<<"Enter Reviewer Name: "
    cin>> reviewerName;
    cat;
    cout<<"Input Rate (1-5 Stars)";
    cin<< rating;
    if (rating > 5 || isalpha(rating)){
        cout<<"Invalid Rating, Please Try Again"
        goto cat;
    }
    cout<<"Write your Comment: ";
    cin<< comment;
    cout << "Current Time? ";
    cin<< timeStamp;
}

void getReviewDetails() const{
    cout<<"Reviewer Name: "<< reviewerName<<endl;
    cout<<"Review ID: "<< reviewID<<endl;
    cout<<"Given Rating: " <<rating<<endl;
    cout<<"Comment: "<<comment<<endl;
    cout<<"Time of Review: "<<timeStamp<<endl;
}



string Review::getReviewID() const { return reviewID; }
string Review::getReviewerName() const { return reviewerName; }
int Review::getRating() const { return rating; }
string Review::getComment() const { return comment; }
string Review::getTimeStamp() const { return timeStamp; }
