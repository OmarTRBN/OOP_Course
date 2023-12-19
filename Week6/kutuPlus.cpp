#include <iostream>
#include <iomanip>
#include "kutuPlus.hpp"

using namespace std;

int main()
{
    // float g, u, d;
    // KutuSinifi Cube;

    // cout << "Enter dimensions (g u d) with spaces in between: ";
    // cin >> g >> u >> d;

    // Cube.setHacim(g, u, d);
    // float hacim = Cube.getHacim();

    // cout << endl
    //      << "The volume is " << setprecision(5) << hacim << endl;
    
    // // Bavul sinifi ile
    // Bavul omarsBavul;
    // omarsBavul.setHacim(g, u, d);
    // cout << omarsBavul.getHacim() << " is Omar's Bavul's size." << endl;

    // // Polymorphism example
    // KutuSinifi *basePtr = &omarsBavul; // Pointing to the derived class object
    // basePtr->displayInfo();            // Calls the overridden function

    // Example usage with constructors
    KutuSinifi defaultBox; // Calls the default constructor
    defaultBox.displayInfo();

    KutuSinifi customBox(1.0, 2.0, 0.5); // Calls the parameterized constructor
    customBox.displayInfo();

    Bavul defaultBavul; // Calls the default constructor
    defaultBavul.displayInfo();

    Bavul customBavul(2.0, 3.0, 1.0); // Calls the parameterized constructor
    customBavul.displayInfo();

    ElektronikKutu defaultElectronicBox; // Calls the default constructor
    defaultElectronicBox.displayInfo();

    ElektronikKutu customElectronicBox(1.5, 2.5, 0.8, 50.0); // Calls the parameterized constructor
    customElectronicBox.displayInfo();
    customElectronicBox.chargeBattery(60);
    cout << "After one hour of charge: ";
    customElectronicBox.displayInfo();

    return 0;
}
