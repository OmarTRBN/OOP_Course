#include <iostream>

using namespace std;

class Kutu
{
private:
    int gn,yk,uz;
public:
    void setDeger(int g, int y, int u)
    {
        gn = g;
        yk = y;
        uz = u;
    }

    void getDeger()
    {
        cout << "genislik: " << gn << endl;
        cout << "yukseklik: " << yk << endl;
        cout << "uzunluk: " << uz << endl;
    }

    void hacimHesapla()
    {
        cout << "hacim: " << gn*yk*uz << endl;
    }
};

int main(int argc, char const *argv[])
{
    Kutu kutuObj;
    kutuObj.setDeger(9, 9, 4);
    kutuObj.getDeger();
    kutuObj.hacimHesapla();
    
    return 0;
}
