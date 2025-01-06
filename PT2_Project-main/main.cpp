#include <iostream>
#include "Sponsor.hpp"
#include "Resource.hpp"

using namespace std;

int main() {

    //Sponsor Test
    Sponsor sponsor1("S001", "TechCorp", "Technology", 50000.0);
    Sponsor sponsor2;

    sponsor2.addSponsor("S002", "MediCorp", "Medical", 10000.0);

    std::cout << "\n\nSponsor Details:\n";
    sponsor1.getSponsorDetails();


    //Resources Test
    Resource projector("R001", "Projector", 10);

    cout << projector.checkResourceDetails() << "\n";
    if (projector.allocateResource(3)) {
        cout << "\n\nResources allocated successfully!\n";
    } else {
        cout << "Allocation failed: Not enough resources!\n";
    } 

    cout << projector.checkResourceDetails() << "\n";

    cout << "adding 5 projector...\n";
    projector.addResource(5);

    cout << projector.checkResourceDetails() << "\n\n\n";

    system("pause");
    return 0;
}
