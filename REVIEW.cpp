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



string Review::getReviewID() const { return reviewID; }
string Review::getReviewerName() const { return reviewerName; }
int Review::getRating() const { return rating; }
string Review::getComment() const { return comment; }
string Review::getTimeStamp() const { return timeStamp; }
