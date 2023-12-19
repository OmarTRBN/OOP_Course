#include <iostream>
using namespace std;

class Automobile
{
public:
    double weight;
};

class Car : public Automobile
{
private:
    double maintanenceCost;    
public:
    Car(double mC, double weight) : maintanenceCost(mC) {}
    double getMaintanenceCost()
    {
        return maintanenceCost;
    } 
};

class Otopark
{
    // Different prices for different otomobiles
public:
    double fiyatHesapla(Car *carObj)
    {
        double totalPrice = 1.20 * carObj->getMaintanenceCost() + 0.2 * carObj->weight;
        return totalPrice;
    }
};

int main(int argc, char const *argv[])
{
    Otopark ParkingPlace;
    Car *ferrari = new Car(1000, 500);

    cout << "Total price is " << ParkingPlace.fiyatHesapla(ferrari) << " dollars." << endl;
    return 0;
}
