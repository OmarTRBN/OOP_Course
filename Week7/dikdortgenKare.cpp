#include <iostream>

using namespace std;

class Kare; 

class Rectangle
{
public:
    Rectangle (int u, int g) : length(u), width(g) {}
    void AlanHesapla(const Kare& kareObj);
private:
    int length;
    int width;
};

class Kare
{
public:
    Kare(int kenar) : edgeLength(kenar) {}
    friend void Rectangle::AlanHesapla(const Kare& kareObj);
private:
    int edgeLength;
};

void Rectangle::AlanHesapla(const Kare& kareObj)
{
    int alan = kareObj.edgeLength * kareObj.edgeLength;
}

int main()
{
    Rectangle myRectangle(4, 6);
    Kare myKare(5);

    myRectangle.AlanHesapla(myKare);

    return 0;
}
