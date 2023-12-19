#include <iostream>

using namespace std;

class sekil
{
public:
    sekil(int g = 3, int y = 3);
    void setYaz(int g, int y);
    void getOku();
    double x = 0.5;

protected:
    int genislik;
    int yukseklik;
};

sekil::sekil(int g, int y)
{
    genislik = g;
    yukseklik = y;
}

void sekil::setYaz(int g, int y)
{
    genislik = g;
    yukseklik = y;
}

void sekil::getOku()
{
    cout << "nesnenin genislik :" << genislik << endl;
    cout << "nesnenin yukseklik :" << yukseklik << endl;
}

class diktorgen : public sekil
{
public:
    diktorgen(int g = 3, int y = 3);
    double getalan(); // Removed parameters from this function

private:
};

diktorgen::diktorgen(int g, int y) : sekil(g, y) {}

double diktorgen::getalan()
{
    return yukseklik * genislik * x;
}

int main()
{
    diktorgen D1;
    D1.getOku();
    cout << "D1 nesnenin alani :" << D1.getalan() << endl;
    D1.setYaz(20, 50);
    D1.getOku();
    cout << "D1 nesnenin alani :" << D1.getalan() << endl;
    return 0;
}