#include <iostream>

// What is a static member (of a class)

using namespace std;

class Sekil2D
{
public:
    int getGenislik() const { return genislik; }
    int getYukseklik() const { return yukseklik; }
    void setGenislik(int width) { genislik = width; }
    void setYukseklik(int height) { yukseklik = height; }

protected:
    int genislik, yukseklik;
};

class Dikdortgen: public Sekil2D
{
public:
    int alanHesapla();
};

class Ucgen : public Sekil2D
{
public:
    int alanHesapla();
};

int Dikdortgen::alanHesapla()
{
    return genislik * yukseklik;
}

int Ucgen::alanHesapla()
{
    return genislik * yukseklik * 0.5;
}

int main(int argc, char const *argv[])
{
    Sekil2D sekil;
    sekil.setGenislik(12);
    sekil.setYukseklik(12);

    
    return 0;
}
