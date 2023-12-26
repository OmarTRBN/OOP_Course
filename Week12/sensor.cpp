#include <iostream>

using namespace std;

class Sensor
{
public:
    virtual double veri(double deger)=0;
    string name;
};

class TempSensor : public Sensor
{
public:
    virtual double veri(double temperature) override
    {
        return temperature * 1/2.98;
    }
};

class UltrasonicSensor : public Sensor
{
public:
    virtual double veri(double speed) override
    {
        return speed * 0.5;
    }
};

class SpeedSensor : public Sensor
{
    virtual double veri(double displacement) override
    {
        return displacement * displacement * 0.5;
    }
};

int main(int argc, char const *argv[])
{
    TempSensor temp1;
    UltrasonicSensor mesafe1;
    SpeedSensor speed1;

    Sensor* dizi[3] = {&temp1, &mesafe1, &speed1};
    
    double cikis = dizi[0]->veri(8);
    cout << "Sicaklik sensor cikisi: " << cikis << endl;
    
    cikis = dizi[1]->veri(8);
    cout << "Mesafe sensor cikisi: " << cikis << endl;
    
    cikis = dizi[2]->veri(8);
    cout << "Hiz sensor cikisi: " << cikis << endl;

    // delete *dizi;
    // for (int i=0; i<3; i++)
    // {
    //     delete dizi[i];
    // }

    return 0;
}
