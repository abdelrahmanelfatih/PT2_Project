#ifndef RESOURCE_HPP
#define RESOURCE_HPP

#include <string>

using namespace std;

class Resource {
private:
    string resourceID;
    string type;
    int quantity;

public:
    Resource(const string& id, const string& type, int quantity);

    void addResource(int q);
    bool allocateResource(int amount);
    string checkResourceDetails() const;
};

#endif
