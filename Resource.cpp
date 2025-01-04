#include "Resource.hpp"
using namespace std;

Resource::Resource(const string& id, const string& type, int quantity)
    : resourceID(id), type(type), quantity(quantity) {}

void Resource::addResource(int q) {
    quantity += q;
}

bool Resource::allocateResource(int amount) {
    if (amount > quantity) {
        return false;
    }
    quantity -= amount;
    return true;
}

string Resource::checkResourceDetails() const {
    return "Resource ID: " + resourceID + ", Type: " + type + ", Quantity: " + to_string(quantity);
}
