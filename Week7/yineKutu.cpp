#include <iostream>

using namespace std;

class Kutu
{
private:
    double genislik, derinlik, uzunluk;
public:
    Kutu(double g=2.0, double d=2.3, double u=2.2);
    double hacim();
    int karsilastir(Kutu kutu);
};

Kutu::Kutu(double g, double d, double u)
{
    cout << "Kurucu tarafindan cagriliyor..." << endl;
    genislik = g; derinlik = d; uzunluk = u;
}

double Kutu::hacim()
{
    return genislik*derinlik*uzunluk;
}

int Kutu::karsilastir(Kutu kutu)
{
    return this->hacim() > kutu.hacim();
}

int main(int argc, const char** argv)
{
    Kutu aBox;
    Kutu bBox(3.3, 4.2, 1.2);
    cout << "a Kutu hacimi = " << aBox.hacim() << endl;
    cout << "b Kutu hacimi = " << bBox.hacim() << endl;
    if (aBox.karsilastir(bBox))
    {
        cout << "Kutu b kutu a'dan daha kucuktur." << endl;
    }
    else
    {
        cout << "Kutu a kutu b'den daha kucuktur." << endl;
    }
    return 0;
}