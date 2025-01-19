#ifndef RESOURCE_HPP
#define RESOURCE_HPP

#include <string>

using namespace std;

class Resource {
private:
    int resourceID;
    string type;
    int quantity;

public:
    Resource(int id, const string& type, int quantity);

    void addResource(int q);
    bool allocateResource(int amount);
    string checkResourceDetails() const;

    int getID() const;
    string getType() const;
    int getQuantity() const;
};

#endif
