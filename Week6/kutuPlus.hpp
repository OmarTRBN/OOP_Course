#include <iostream>

using namespace std;

class KutuSinifi
{
protected:
    float Derinlik;
    float Genislik;
    float Uzunluk;

public:
    // Default constructor
    KutuSinifi() : Derinlik(5.0), Genislik(5.0), Uzunluk(5.0) {}

    // Parameterized constructor
    KutuSinifi(float genislik, float uzunluk, float derinlik)
        : Genislik(genislik), Uzunluk(uzunluk), Derinlik(derinlik) {}

    void setHacim(float genislik, float uzunluk, float derinlik);
    float getHacim();
    virtual void displayInfo(); // Virtual function for polymorphism
};

class Bavul : public KutuSinifi
{
public:
    // Default constructor
    Bavul() : KutuSinifi() {}

    // Parameterized constructor
    Bavul(float genislik, float uzunluk, float derinlik)
        : KutuSinifi(genislik, uzunluk, derinlik) {}

    void displayInfo() override; // Override the virtual function
};

class ElektronikKutu : public KutuSinifi
{
private:
    float BatteryPower;

public:
    // Default constructor
    ElektronikKutu() : KutuSinifi(), BatteryPower(100.0) {}

    // Parameterized constructor
    ElektronikKutu(float genislik, float uzunluk, float derinlik, float battery)
        : KutuSinifi(genislik, uzunluk, derinlik), BatteryPower(battery) {}

    void chargeBattery(int durationMinutes);
    float getBatteryStatus();
    void displayInfo() override;
};

void KutuSinifi::setHacim(float genislik, float uzunluk, float derinlik)
{
    Genislik = genislik;
    Uzunluk = uzunluk;
    Derinlik = derinlik;
}

float KutuSinifi::getHacim()
{
    return (Derinlik * Genislik * Uzunluk);
}

void KutuSinifi::displayInfo()
{
    cout << "Box dimensions: " << Genislik << " x " << Uzunluk << " x " << Derinlik << endl;
}

void Bavul::displayInfo()
{
    cout << "Suitcase dimensions: " << Genislik << " x " << Uzunluk << " x " << Derinlik << endl;
}

void ElektronikKutu::chargeBattery(int durationMinutes)
{
    if (BatteryPower <= 100)
    {
        BatteryPower += durationMinutes * 0.1;
    }
    else
    {
        cout << endl
             << "Battery is fully charged!" << endl;
    }
}

float ElektronikKutu::getBatteryStatus()
{
    return BatteryPower;
}

void ElektronikKutu::displayInfo()
{
    cout << "Electronic Box dimensions: " << Genislik << " x " << Uzunluk << " x " << Derinlik << endl;
    cout << "Electronic Box battery: " << BatteryPower << endl;
}