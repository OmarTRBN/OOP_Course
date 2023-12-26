#include <iostream>

using namespace std;

class Sekil
{
public:
    Sekil(int g = 10, int y = 10) : genislik(g), yukseklik(y) {}

    void getGenislik() { cout << "Genislik: " << genislik << endl;}
    void getYukseklik() { cout << "Yukseklik: " << yukseklik << endl; }
    
    void setGenislik(int g) { genislik = g; }
    void setYukseklik(int y) { yukseklik = y; }
    
    virtual void alanHesapla() = 0;
    
protected:
    int genislik, yukseklik;
};

class Dikdortgen : public Sekil
{
public:
    Dikdortgen(int g = 8, int y = 8) : Sekil(g, y) {}
    virtual void alanHesapla() override
    {
        cout << "Alan: " << genislik * yukseklik << endl;
    }
};

class Ucgen : public Sekil
{
public:
    Ucgen(int g = 8, int y = 8) : Sekil(g, y) {}
    virtual void alanHesapla() override
    {
        cout << "Alan: " << genislik * yukseklik * 0.5 << endl;
    }
};

int main(int argc, char const *argv[])
{
    Dikdortgen rectangle(9, 9);
    rectangle.alanHesapla();

    rectangle.setGenislik(6);
    rectangle.setYukseklik(12);
    rectangle.alanHesapla();

    Ucgen triangle;
    triangle.alanHesapla();
    triangle.setGenislik(6);
    triangle.setYukseklik(12);
    triangle.alanHesapla();

    return 0;
}
