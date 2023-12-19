#include <iostream>
using namespace std;

class Vektor
{
public:
    int x, y;

    Vektor operator+(const Vektor &other) const
    {
        Vektor sonuc;
        sonuc.x = x + other.x;
        sonuc.y = y + other.y;
        return sonuc;
    }
};
int main()
{
    Vektor v1 = {2, 3};
    Vektor v2 = {4, 5};

    //  Vektor v3(2,3);
    /*
    Vektor v1;
    v1.x = 2;
    v1.y = 3;

    Vektor v2;
    v2.x = 4;
    v2.y = 5;
    */

    Vektor toplam = v1 + v2;
    cout << "Toplam : { " << toplam.x << " , " << toplam.y << " }" << endl;

    return 0;
}